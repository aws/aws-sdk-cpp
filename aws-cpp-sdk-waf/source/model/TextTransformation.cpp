/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/TextTransformation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace TextTransformationMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int COMPRESS_WHITE_SPACE_HASH = HashingUtils::HashString("COMPRESS_WHITE_SPACE");
        static const int HTML_ENTITY_DECODE_HASH = HashingUtils::HashString("HTML_ENTITY_DECODE");
        static const int LOWERCASE_HASH = HashingUtils::HashString("LOWERCASE");
        static const int CMD_LINE_HASH = HashingUtils::HashString("CMD_LINE");
        static const int URL_DECODE_HASH = HashingUtils::HashString("URL_DECODE");


        TextTransformation GetTextTransformationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TextTransformation::NONE;
          }
          else if (hashCode == COMPRESS_WHITE_SPACE_HASH)
          {
            return TextTransformation::COMPRESS_WHITE_SPACE;
          }
          else if (hashCode == HTML_ENTITY_DECODE_HASH)
          {
            return TextTransformation::HTML_ENTITY_DECODE;
          }
          else if (hashCode == LOWERCASE_HASH)
          {
            return TextTransformation::LOWERCASE;
          }
          else if (hashCode == CMD_LINE_HASH)
          {
            return TextTransformation::CMD_LINE;
          }
          else if (hashCode == URL_DECODE_HASH)
          {
            return TextTransformation::URL_DECODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextTransformation>(hashCode);
          }

          return TextTransformation::NOT_SET;
        }

        Aws::String GetNameForTextTransformation(TextTransformation enumValue)
        {
          switch(enumValue)
          {
          case TextTransformation::NONE:
            return "NONE";
          case TextTransformation::COMPRESS_WHITE_SPACE:
            return "COMPRESS_WHITE_SPACE";
          case TextTransformation::HTML_ENTITY_DECODE:
            return "HTML_ENTITY_DECODE";
          case TextTransformation::LOWERCASE:
            return "LOWERCASE";
          case TextTransformation::CMD_LINE:
            return "CMD_LINE";
          case TextTransformation::URL_DECODE:
            return "URL_DECODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TextTransformationMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
