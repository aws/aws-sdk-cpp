/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/polly/model/TextType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace TextTypeMapper
      {

        static const int ssml_HASH = HashingUtils::HashString("ssml");
        static const int text_HASH = HashingUtils::HashString("text");


        TextType GetTextTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ssml_HASH)
          {
            return TextType::ssml;
          }
          else if (hashCode == text_HASH)
          {
            return TextType::text;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextType>(hashCode);
          }

          return TextType::NOT_SET;
        }

        Aws::String GetNameForTextType(TextType enumValue)
        {
          switch(enumValue)
          {
          case TextType::ssml:
            return "ssml";
          case TextType::text:
            return "text";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TextTypeMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
