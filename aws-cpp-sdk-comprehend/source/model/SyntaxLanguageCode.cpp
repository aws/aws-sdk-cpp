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

#include <aws/comprehend/model/SyntaxLanguageCode.h>
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
      namespace SyntaxLanguageCodeMapper
      {

        static const int en_HASH = HashingUtils::HashString("en");


        SyntaxLanguageCode GetSyntaxLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return SyntaxLanguageCode::en;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyntaxLanguageCode>(hashCode);
          }

          return SyntaxLanguageCode::NOT_SET;
        }

        Aws::String GetNameForSyntaxLanguageCode(SyntaxLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case SyntaxLanguageCode::en:
            return "en";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SyntaxLanguageCodeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
