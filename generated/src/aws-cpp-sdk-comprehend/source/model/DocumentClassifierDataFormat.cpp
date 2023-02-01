/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierDataFormat.h>
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
      namespace DocumentClassifierDataFormatMapper
      {

        static const int COMPREHEND_CSV_HASH = HashingUtils::HashString("COMPREHEND_CSV");
        static const int AUGMENTED_MANIFEST_HASH = HashingUtils::HashString("AUGMENTED_MANIFEST");


        DocumentClassifierDataFormat GetDocumentClassifierDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPREHEND_CSV_HASH)
          {
            return DocumentClassifierDataFormat::COMPREHEND_CSV;
          }
          else if (hashCode == AUGMENTED_MANIFEST_HASH)
          {
            return DocumentClassifierDataFormat::AUGMENTED_MANIFEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentClassifierDataFormat>(hashCode);
          }

          return DocumentClassifierDataFormat::NOT_SET;
        }

        Aws::String GetNameForDocumentClassifierDataFormat(DocumentClassifierDataFormat enumValue)
        {
          switch(enumValue)
          {
          case DocumentClassifierDataFormat::COMPREHEND_CSV:
            return "COMPREHEND_CSV";
          case DocumentClassifierDataFormat::AUGMENTED_MANIFEST:
            return "AUGMENTED_MANIFEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentClassifierDataFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
