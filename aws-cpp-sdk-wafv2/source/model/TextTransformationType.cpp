/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/TextTransformationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace TextTransformationTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int COMPRESS_WHITE_SPACE_HASH = HashingUtils::HashString("COMPRESS_WHITE_SPACE");
        static const int HTML_ENTITY_DECODE_HASH = HashingUtils::HashString("HTML_ENTITY_DECODE");
        static const int LOWERCASE_HASH = HashingUtils::HashString("LOWERCASE");
        static const int CMD_LINE_HASH = HashingUtils::HashString("CMD_LINE");
        static const int URL_DECODE_HASH = HashingUtils::HashString("URL_DECODE");


        TextTransformationType GetTextTransformationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TextTransformationType::NONE;
          }
          else if (hashCode == COMPRESS_WHITE_SPACE_HASH)
          {
            return TextTransformationType::COMPRESS_WHITE_SPACE;
          }
          else if (hashCode == HTML_ENTITY_DECODE_HASH)
          {
            return TextTransformationType::HTML_ENTITY_DECODE;
          }
          else if (hashCode == LOWERCASE_HASH)
          {
            return TextTransformationType::LOWERCASE;
          }
          else if (hashCode == CMD_LINE_HASH)
          {
            return TextTransformationType::CMD_LINE;
          }
          else if (hashCode == URL_DECODE_HASH)
          {
            return TextTransformationType::URL_DECODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextTransformationType>(hashCode);
          }

          return TextTransformationType::NOT_SET;
        }

        Aws::String GetNameForTextTransformationType(TextTransformationType enumValue)
        {
          switch(enumValue)
          {
          case TextTransformationType::NONE:
            return "NONE";
          case TextTransformationType::COMPRESS_WHITE_SPACE:
            return "COMPRESS_WHITE_SPACE";
          case TextTransformationType::HTML_ENTITY_DECODE:
            return "HTML_ENTITY_DECODE";
          case TextTransformationType::LOWERCASE:
            return "LOWERCASE";
          case TextTransformationType::CMD_LINE:
            return "CMD_LINE";
          case TextTransformationType::URL_DECODE:
            return "URL_DECODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextTransformationTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
