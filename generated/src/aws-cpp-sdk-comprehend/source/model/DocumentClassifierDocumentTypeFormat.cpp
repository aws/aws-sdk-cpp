/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierDocumentTypeFormat.h>
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
      namespace DocumentClassifierDocumentTypeFormatMapper
      {

        static const int PLAIN_TEXT_DOCUMENT_HASH = HashingUtils::HashString("PLAIN_TEXT_DOCUMENT");
        static const int SEMI_STRUCTURED_DOCUMENT_HASH = HashingUtils::HashString("SEMI_STRUCTURED_DOCUMENT");


        DocumentClassifierDocumentTypeFormat GetDocumentClassifierDocumentTypeFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_DOCUMENT_HASH)
          {
            return DocumentClassifierDocumentTypeFormat::PLAIN_TEXT_DOCUMENT;
          }
          else if (hashCode == SEMI_STRUCTURED_DOCUMENT_HASH)
          {
            return DocumentClassifierDocumentTypeFormat::SEMI_STRUCTURED_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentClassifierDocumentTypeFormat>(hashCode);
          }

          return DocumentClassifierDocumentTypeFormat::NOT_SET;
        }

        Aws::String GetNameForDocumentClassifierDocumentTypeFormat(DocumentClassifierDocumentTypeFormat enumValue)
        {
          switch(enumValue)
          {
          case DocumentClassifierDocumentTypeFormat::NOT_SET:
            return {};
          case DocumentClassifierDocumentTypeFormat::PLAIN_TEXT_DOCUMENT:
            return "PLAIN_TEXT_DOCUMENT";
          case DocumentClassifierDocumentTypeFormat::SEMI_STRUCTURED_DOCUMENT:
            return "SEMI_STRUCTURED_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentClassifierDocumentTypeFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
