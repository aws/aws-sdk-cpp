/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int ar_HASH = HashingUtils::HashString("ar");
        static const int hi_HASH = HashingUtils::HashString("hi");
        static const int ja_HASH = HashingUtils::HashString("ja");
        static const int ko_HASH = HashingUtils::HashString("ko");
        static const int zh_HASH = HashingUtils::HashString("zh");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");


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
          else if (hashCode == ar_HASH)
          {
            return LanguageCode::ar;
          }
          else if (hashCode == hi_HASH)
          {
            return LanguageCode::hi;
          }
          else if (hashCode == ja_HASH)
          {
            return LanguageCode::ja;
          }
          else if (hashCode == ko_HASH)
          {
            return LanguageCode::ko;
          }
          else if (hashCode == zh_HASH)
          {
            return LanguageCode::zh;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LanguageCode::zh_TW;
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
          case LanguageCode::ar:
            return "ar";
          case LanguageCode::hi:
            return "hi";
          case LanguageCode::ja:
            return "ja";
          case LanguageCode::ko:
            return "ko";
          case LanguageCode::zh:
            return "zh";
          case LanguageCode::zh_TW:
            return "zh-TW";
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
