import os
import re
import uuid
from pathlib import Path
import logging

class CSPFixer:
    # static compiled regex patterns
    SCRIPT_TAG_PATTERN = re.compile(r'<script([^>]*)>')
    CSP_META_PATTERN = re.compile(r'<meta\s+http-equiv="Content-Security-Policy"[^>]*>\n?', re.IGNORECASE)
    HEAD_TAG_PATTERN = re.compile(r'<head>', re.IGNORECASE)
    def __init__(self, log_level=logging.INFO):
        self.nonce = str(uuid.uuid4())
        # CSP meta tags
        self.csp = (
            "default-src 'self'; "
            f"script-src 'self' 'nonce-{self.nonce}'; "
        )
        self.csp_meta = f'<meta http-equiv="Content-Security-Policy" content="{self.csp}">\n'
        logging.basicConfig(
            level=log_level,
            format='%(asctime)s - %(levelname)s - %(message)s',
            datefmt='%Y-%m-%d %H:%M:%S'
        )

    def __add_nonce(self, html_content:str) -> str:
        if not html_content:
            return html_content
                
        # replace existing script tags with nonce
        modified_content = self.SCRIPT_TAG_PATTERN.sub(
            f'<script nonce="{self.nonce}"\\1>',
            html_content
        )
        
        # remove any existing CSP meta tags so there is no conflict
        modified_content = self.CSP_META_PATTERN.sub(
            '',
            modified_content
        )

        # add CSP meta tag in head
        with_csp = self.HEAD_TAG_PATTERN.sub(
            f'<head>\n{self.csp_meta}',
            modified_content
        )
        
        return with_csp
    
    def update_files(self, path: Path) -> bool:
        # check valid path
        if not os.path.exists(path):
            logging.error(f'Path does not exist: {path}')
            return False
        
        if not os.path.isdir(path):
            logging.error(f'Path is not a directory: {path}')
            return False
        success = True
        processed_count = 0
        failed_count = 0
        for dirpath, dirnames, filenames in os.walk(path):
            for filename in filenames:
                if filename.endswith('.html'):
                    file_path = Path(dirpath) / filename 
                    logging.debug(f'Processing: {file_path}')
                    try:
                        with open(file_path, 'r', encoding='utf-8') as file:
                            content = file.read()
                        
                        processed = self.__add_nonce(content)
                        
                        with open(file_path, 'w', encoding='utf-8') as file:
                            file.write(processed)
                        logging.debug(f'Finished: {file_path}')
                        processed_count += 1
                    except (OSError, IOError) as e:
                        logging.error(f'Error processing {file_path}: {e}')
                        failed_count += 1
                        success = False
        logging.info(f"CSP update process completed. Processed {processed_count} files. Failed {failed_count} files")         
        return success