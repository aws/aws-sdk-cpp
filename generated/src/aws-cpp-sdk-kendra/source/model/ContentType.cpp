/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ContentTypeMapper
      {

        static constexpr uint32_t PDF_HASH = ConstExprHashingUtils::HashString("PDF");
        static constexpr uint32_t HTML_HASH = ConstExprHashingUtils::HashString("HTML");
        static constexpr uint32_t MS_WORD_HASH = ConstExprHashingUtils::HashString("MS_WORD");
        static constexpr uint32_t PLAIN_TEXT_HASH = ConstExprHashingUtils::HashString("PLAIN_TEXT");
        static constexpr uint32_t PPT_HASH = ConstExprHashingUtils::HashString("PPT");
        static constexpr uint32_t RTF_HASH = ConstExprHashingUtils::HashString("RTF");
        static constexpr uint32_t XML_HASH = ConstExprHashingUtils::HashString("XML");
        static constexpr uint32_t XSLT_HASH = ConstExprHashingUtils::HashString("XSLT");
        static constexpr uint32_t MS_EXCEL_HASH = ConstExprHashingUtils::HashString("MS_EXCEL");
        static constexpr uint32_t CSV_HASH = ConstExprHashingUtils::HashString("CSV");
        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t MD_HASH = ConstExprHashingUtils::HashString("MD");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PDF_HASH)
          {
            return ContentType::PDF;
          }
          else if (hashCode == HTML_HASH)
          {
            return ContentType::HTML;
          }
          else if (hashCode == MS_WORD_HASH)
          {
            return ContentType::MS_WORD;
          }
          else if (hashCode == PLAIN_TEXT_HASH)
          {
            return ContentType::PLAIN_TEXT;
          }
          else if (hashCode == PPT_HASH)
          {
            return ContentType::PPT;
          }
          else if (hashCode == RTF_HASH)
          {
            return ContentType::RTF;
          }
          else if (hashCode == XML_HASH)
          {
            return ContentType::XML;
          }
          else if (hashCode == XSLT_HASH)
          {
            return ContentType::XSLT;
          }
          else if (hashCode == MS_EXCEL_HASH)
          {
            return ContentType::MS_EXCEL;
          }
          else if (hashCode == CSV_HASH)
          {
            return ContentType::CSV;
          }
          else if (hashCode == JSON_HASH)
          {
            return ContentType::JSON;
          }
          else if (hashCode == MD_HASH)
          {
            return ContentType::MD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentType>(hashCode);
          }

          return ContentType::NOT_SET;
        }

        Aws::String GetNameForContentType(ContentType enumValue)
        {
          switch(enumValue)
          {
          case ContentType::NOT_SET:
            return {};
          case ContentType::PDF:
            return "PDF";
          case ContentType::HTML:
            return "HTML";
          case ContentType::MS_WORD:
            return "MS_WORD";
          case ContentType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case ContentType::PPT:
            return "PPT";
          case ContentType::RTF:
            return "RTF";
          case ContentType::XML:
            return "XML";
          case ContentType::XSLT:
            return "XSLT";
          case ContentType::MS_EXCEL:
            return "MS_EXCEL";
          case ContentType::CSV:
            return "CSV";
          case ContentType::JSON:
            return "JSON";
          case ContentType::MD:
            return "MD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
