/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>These are the items returned in the results of a search of Amazon EBS backup
   * metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/EBSResultItem">AWS
   * API Reference</a></p>
   */
  class EBSResultItem
  {
  public:
    AWS_BACKUPSEARCH_API EBSResultItem();
    AWS_BACKUPSEARCH_API EBSResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API EBSResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are one or more items in the results that match values for the Amazon
     * Resource Name (ARN) of recovery points returned in a search of Amazon EBS backup
     * metadata.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const{ return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    inline void SetBackupResourceArn(const Aws::String& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = value; }
    inline void SetBackupResourceArn(Aws::String&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::move(value); }
    inline void SetBackupResourceArn(const char* value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn.assign(value); }
    inline EBSResultItem& WithBackupResourceArn(const Aws::String& value) { SetBackupResourceArn(value); return *this;}
    inline EBSResultItem& WithBackupResourceArn(Aws::String&& value) { SetBackupResourceArn(std::move(value)); return *this;}
    inline EBSResultItem& WithBackupResourceArn(const char* value) { SetBackupResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for the Amazon
     * Resource Name (ARN) of source resources returned in a search of Amazon EBS
     * backup metadata.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }
    inline EBSResultItem& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}
    inline EBSResultItem& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}
    inline EBSResultItem& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline EBSResultItem& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline EBSResultItem& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline EBSResultItem& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file systems
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::String& GetFileSystemIdentifier() const{ return m_fileSystemIdentifier; }
    inline bool FileSystemIdentifierHasBeenSet() const { return m_fileSystemIdentifierHasBeenSet; }
    inline void SetFileSystemIdentifier(const Aws::String& value) { m_fileSystemIdentifierHasBeenSet = true; m_fileSystemIdentifier = value; }
    inline void SetFileSystemIdentifier(Aws::String&& value) { m_fileSystemIdentifierHasBeenSet = true; m_fileSystemIdentifier = std::move(value); }
    inline void SetFileSystemIdentifier(const char* value) { m_fileSystemIdentifierHasBeenSet = true; m_fileSystemIdentifier.assign(value); }
    inline EBSResultItem& WithFileSystemIdentifier(const Aws::String& value) { SetFileSystemIdentifier(value); return *this;}
    inline EBSResultItem& WithFileSystemIdentifier(Aws::String&& value) { SetFileSystemIdentifier(std::move(value)); return *this;}
    inline EBSResultItem& WithFileSystemIdentifier(const char* value) { SetFileSystemIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file paths
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline EBSResultItem& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline EBSResultItem& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline EBSResultItem& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file sizes
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline EBSResultItem& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for creation
     * times returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EBSResultItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EBSResultItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for Last
     * Modified Time returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EBSResultItem& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EBSResultItem& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupResourceArn;
    bool m_backupResourceArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_fileSystemIdentifier;
    bool m_fileSystemIdentifierHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    long long m_fileSize;
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
