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

#include <aws/comprehend/model/LanguageCode.h>
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
      namespace LanguageCodeMapper
      {

        static const int en_HASH = HashingUtils::HashString("en");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int pt_HASH = HashingUtils::HashString("pt");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return LanguageCode::en;
          }
          else if (hashCode == es_HASH)
          {
            return LanguageCode::es;
          }
          else if (hashCode == fr_HASH)
          {
            return LanguageCode::fr;
          }
          else if (hashCode == de_HASH)
          {
            return LanguageCode::de;
          }
          else if (hashCode == it_HASH)
          {
            return LanguageCode::it;
          }
          else if (hashCode == pt_HASH)
          {
            return LanguageCode::pt;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCode>(hashCode);
          }

          return LanguageCode::NOT_SET;
        }

        Aws::String GetNameForLanguageCode(LanguageCode enumValue)
        {
          switch(enumValue)
          {
          case LanguageCode::en:
            return "en";
          case LanguageCode::es:
            return "es";
          case LanguageCode::fr:
            return "fr";
          case LanguageCode::de:
            return "de";
          case LanguageCode::it:
            return "it";
          case LanguageCode::pt:
            return "pt";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
