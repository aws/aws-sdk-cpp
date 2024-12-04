/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentOutputTextFormatType.h>
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
      namespace DocumentOutputTextFormatTypeMapper
      {

        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int MARKDOWN_HASH = HashingUtils::HashString("MARKDOWN");
        static const int HTML_HASH = HashingUtils::HashString("HTML");
        static const int CSV_HASH = HashingUtils::HashString("CSV");


        DocumentOutputTextFormatType GetDocumentOutputTextFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_HASH)
          {
            return DocumentOutputTextFormatType::PLAIN_TEXT;
          }
          else if (hashCode == MARKDOWN_HASH)
          {
            return DocumentOutputTextFormatType::MARKDOWN;
          }
          else if (hashCode == HTML_HASH)
          {
            return DocumentOutputTextFormatType::HTML;
          }
          else if (hashCode == CSV_HASH)
          {
            return DocumentOutputTextFormatType::CSV;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentOutputTextFormatType>(hashCode);
          }

          return DocumentOutputTextFormatType::NOT_SET;
        }

        Aws::String GetNameForDocumentOutputTextFormatType(DocumentOutputTextFormatType enumValue)
        {
          switch(enumValue)
          {
          case DocumentOutputTextFormatType::NOT_SET:
            return {};
          case DocumentOutputTextFormatType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case DocumentOutputTextFormatType::MARKDOWN:
            return "MARKDOWN";
          case DocumentOutputTextFormatType::HTML:
            return "HTML";
          case DocumentOutputTextFormatType::CSV:
            return "CSV";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentOutputTextFormatTypeMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
