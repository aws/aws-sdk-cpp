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

        static constexpr uint32_t en_HASH = ConstExprHashingUtils::HashString("en");
        static constexpr uint32_t es_HASH = ConstExprHashingUtils::HashString("es");
        static constexpr uint32_t fr_HASH = ConstExprHashingUtils::HashString("fr");
        static constexpr uint32_t de_HASH = ConstExprHashingUtils::HashString("de");
        static constexpr uint32_t it_HASH = ConstExprHashingUtils::HashString("it");
        static constexpr uint32_t pt_HASH = ConstExprHashingUtils::HashString("pt");
        static constexpr uint32_t ar_HASH = ConstExprHashingUtils::HashString("ar");
        static constexpr uint32_t hi_HASH = ConstExprHashingUtils::HashString("hi");
        static constexpr uint32_t ja_HASH = ConstExprHashingUtils::HashString("ja");
        static constexpr uint32_t ko_HASH = ConstExprHashingUtils::HashString("ko");
        static constexpr uint32_t zh_HASH = ConstExprHashingUtils::HashString("zh");
        static constexpr uint32_t zh_TW_HASH = ConstExprHashingUtils::HashString("zh-TW");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LanguageCode::NOT_SET:
            return {};
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
