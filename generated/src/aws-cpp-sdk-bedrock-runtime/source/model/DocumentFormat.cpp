/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/DocumentFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace DocumentFormatMapper
      {

        static const int pdf_HASH = HashingUtils::HashString("pdf");
        static const int csv_HASH = HashingUtils::HashString("csv");
        static const int doc_HASH = HashingUtils::HashString("doc");
        static const int docx_HASH = HashingUtils::HashString("docx");
        static const int xls_HASH = HashingUtils::HashString("xls");
        static const int xlsx_HASH = HashingUtils::HashString("xlsx");
        static const int html_HASH = HashingUtils::HashString("html");
        static const int txt_HASH = HashingUtils::HashString("txt");
        static const int md_HASH = HashingUtils::HashString("md");


        DocumentFormat GetDocumentFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pdf_HASH)
          {
            return DocumentFormat::pdf;
          }
          else if (hashCode == csv_HASH)
          {
            return DocumentFormat::csv;
          }
          else if (hashCode == doc_HASH)
          {
            return DocumentFormat::doc;
          }
          else if (hashCode == docx_HASH)
          {
            return DocumentFormat::docx;
          }
          else if (hashCode == xls_HASH)
          {
            return DocumentFormat::xls;
          }
          else if (hashCode == xlsx_HASH)
          {
            return DocumentFormat::xlsx;
          }
          else if (hashCode == html_HASH)
          {
            return DocumentFormat::html;
          }
          else if (hashCode == txt_HASH)
          {
            return DocumentFormat::txt;
          }
          else if (hashCode == md_HASH)
          {
            return DocumentFormat::md;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentFormat>(hashCode);
          }

          return DocumentFormat::NOT_SET;
        }

        Aws::String GetNameForDocumentFormat(DocumentFormat enumValue)
        {
          switch(enumValue)
          {
          case DocumentFormat::NOT_SET:
            return {};
          case DocumentFormat::pdf:
            return "pdf";
          case DocumentFormat::csv:
            return "csv";
          case DocumentFormat::doc:
            return "doc";
          case DocumentFormat::docx:
            return "docx";
          case DocumentFormat::xls:
            return "xls";
          case DocumentFormat::xlsx:
            return "xlsx";
          case DocumentFormat::html:
            return "html";
          case DocumentFormat::txt:
            return "txt";
          case DocumentFormat::md:
            return "md";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentFormatMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
