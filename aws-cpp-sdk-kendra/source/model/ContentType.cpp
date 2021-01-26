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

        static const int PDF_HASH = HashingUtils::HashString("PDF");
        static const int HTML_HASH = HashingUtils::HashString("HTML");
        static const int MS_WORD_HASH = HashingUtils::HashString("MS_WORD");
        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int PPT_HASH = HashingUtils::HashString("PPT");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
