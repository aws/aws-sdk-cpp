/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Locale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace LocaleMapper
      {

        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t en_IN_HASH = ConstExprHashingUtils::HashString("en-IN");
        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t es_419_HASH = ConstExprHashingUtils::HashString("es-419");
        static constexpr uint32_t es_ES_HASH = ConstExprHashingUtils::HashString("es-ES");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t fr_FR_HASH = ConstExprHashingUtils::HashString("fr-FR");
        static constexpr uint32_t fr_CA_HASH = ConstExprHashingUtils::HashString("fr-CA");
        static constexpr uint32_t it_IT_HASH = ConstExprHashingUtils::HashString("it-IT");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");
        static constexpr uint32_t ko_KR_HASH = ConstExprHashingUtils::HashString("ko-KR");


        Locale GetLocaleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == de_DE_HASH)
          {
            return Locale::de_DE;
          }
          else if (hashCode == en_AU_HASH)
          {
            return Locale::en_AU;
          }
          else if (hashCode == en_GB_HASH)
          {
            return Locale::en_GB;
          }
          else if (hashCode == en_IN_HASH)
          {
            return Locale::en_IN;
          }
          else if (hashCode == en_US_HASH)
          {
            return Locale::en_US;
          }
          else if (hashCode == es_419_HASH)
          {
            return Locale::es_419;
          }
          else if (hashCode == es_ES_HASH)
          {
            return Locale::es_ES;
          }
          else if (hashCode == es_US_HASH)
          {
            return Locale::es_US;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return Locale::fr_FR;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return Locale::fr_CA;
          }
          else if (hashCode == it_IT_HASH)
          {
            return Locale::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return Locale::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return Locale::ko_KR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Locale>(hashCode);
          }

          return Locale::NOT_SET;
        }

        Aws::String GetNameForLocale(Locale enumValue)
        {
          switch(enumValue)
          {
          case Locale::NOT_SET:
            return {};
          case Locale::de_DE:
            return "de-DE";
          case Locale::en_AU:
            return "en-AU";
          case Locale::en_GB:
            return "en-GB";
          case Locale::en_IN:
            return "en-IN";
          case Locale::en_US:
            return "en-US";
          case Locale::es_419:
            return "es-419";
          case Locale::es_ES:
            return "es-ES";
          case Locale::es_US:
            return "es-US";
          case Locale::fr_FR:
            return "fr-FR";
          case Locale::fr_CA:
            return "fr-CA";
          case Locale::it_IT:
            return "it-IT";
          case Locale::ja_JP:
            return "ja-JP";
          case Locale::ko_KR:
            return "ko-KR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocaleMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
