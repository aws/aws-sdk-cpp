/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DocumentTypeMapper
      {

        static const int NATIVE_PDF_HASH = HashingUtils::HashString("NATIVE_PDF");
        static const int SCANNED_PDF_HASH = HashingUtils::HashString("SCANNED_PDF");
        static const int MS_WORD_HASH = HashingUtils::HashString("MS_WORD");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int TEXTRACT_DETECT_DOCUMENT_TEXT_JSON_HASH = HashingUtils::HashString("TEXTRACT_DETECT_DOCUMENT_TEXT_JSON");
        static const int TEXTRACT_ANALYZE_DOCUMENT_JSON_HASH = HashingUtils::HashString("TEXTRACT_ANALYZE_DOCUMENT_JSON");


        DocumentType GetDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NATIVE_PDF_HASH)
          {
            return DocumentType::NATIVE_PDF;
          }
          else if (hashCode == SCANNED_PDF_HASH)
          {
            return DocumentType::SCANNED_PDF;
          }
          else if (hashCode == MS_WORD_HASH)
          {
            return DocumentType::MS_WORD;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return DocumentType::IMAGE;
          }
          else if (hashCode == PLAIN_TEXT_HASH)
          {
            return DocumentType::PLAIN_TEXT;
          }
          else if (hashCode == TEXTRACT_DETECT_DOCUMENT_TEXT_JSON_HASH)
          {
            return DocumentType::TEXTRACT_DETECT_DOCUMENT_TEXT_JSON;
          }
          else if (hashCode == TEXTRACT_ANALYZE_DOCUMENT_JSON_HASH)
          {
            return DocumentType::TEXTRACT_ANALYZE_DOCUMENT_JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentType>(hashCode);
          }

          return DocumentType::NOT_SET;
        }

        Aws::String GetNameForDocumentType(DocumentType enumValue)
        {
          switch(enumValue)
          {
          case DocumentType::NATIVE_PDF:
            return "NATIVE_PDF";
          case DocumentType::SCANNED_PDF:
            return "SCANNED_PDF";
          case DocumentType::MS_WORD:
            return "MS_WORD";
          case DocumentType::IMAGE:
            return "IMAGE";
          case DocumentType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case DocumentType::TEXTRACT_DETECT_DOCUMENT_TEXT_JSON:
            return "TEXTRACT_DETECT_DOCUMENT_TEXT_JSON";
          case DocumentType::TEXTRACT_ANALYZE_DOCUMENT_JSON:
            return "TEXTRACT_ANALYZE_DOCUMENT_JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
