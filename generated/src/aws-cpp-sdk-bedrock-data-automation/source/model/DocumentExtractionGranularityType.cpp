/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentExtractionGranularityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace DocumentExtractionGranularityTypeMapper
      {

        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int PAGE_HASH = HashingUtils::HashString("PAGE");
        static const int ELEMENT_HASH = HashingUtils::HashString("ELEMENT");
        static const int WORD_HASH = HashingUtils::HashString("WORD");
        static const int LINE_HASH = HashingUtils::HashString("LINE");


        DocumentExtractionGranularityType GetDocumentExtractionGranularityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_HASH)
          {
            return DocumentExtractionGranularityType::DOCUMENT;
          }
          else if (hashCode == PAGE_HASH)
          {
            return DocumentExtractionGranularityType::PAGE;
          }
          else if (hashCode == ELEMENT_HASH)
          {
            return DocumentExtractionGranularityType::ELEMENT;
          }
          else if (hashCode == WORD_HASH)
          {
            return DocumentExtractionGranularityType::WORD;
          }
          else if (hashCode == LINE_HASH)
          {
            return DocumentExtractionGranularityType::LINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentExtractionGranularityType>(hashCode);
          }

          return DocumentExtractionGranularityType::NOT_SET;
        }

        Aws::String GetNameForDocumentExtractionGranularityType(DocumentExtractionGranularityType enumValue)
        {
          switch(enumValue)
          {
          case DocumentExtractionGranularityType::NOT_SET:
            return {};
          case DocumentExtractionGranularityType::DOCUMENT:
            return "DOCUMENT";
          case DocumentExtractionGranularityType::PAGE:
            return "PAGE";
          case DocumentExtractionGranularityType::ELEMENT:
            return "ELEMENT";
          case DocumentExtractionGranularityType::WORD:
            return "WORD";
          case DocumentExtractionGranularityType::LINE:
            return "LINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentExtractionGranularityTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
