/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VocabularyLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace VocabularyLanguageCodeMapper
      {

        static constexpr uint32_t ar_AE_HASH = ConstExprHashingUtils::HashString("ar-AE");
        static constexpr uint32_t de_CH_HASH = ConstExprHashingUtils::HashString("de-CH");
        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t en_AB_HASH = ConstExprHashingUtils::HashString("en-AB");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t en_IE_HASH = ConstExprHashingUtils::HashString("en-IE");
        static constexpr uint32_t en_IN_HASH = ConstExprHashingUtils::HashString("en-IN");
        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t en_WL_HASH = ConstExprHashingUtils::HashString("en-WL");
        static constexpr uint32_t es_ES_HASH = ConstExprHashingUtils::HashString("es-ES");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t fr_CA_HASH = ConstExprHashingUtils::HashString("fr-CA");
        static constexpr uint32_t fr_FR_HASH = ConstExprHashingUtils::HashString("fr-FR");
        static constexpr uint32_t hi_IN_HASH = ConstExprHashingUtils::HashString("hi-IN");
        static constexpr uint32_t it_IT_HASH = ConstExprHashingUtils::HashString("it-IT");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");
        static constexpr uint32_t ko_KR_HASH = ConstExprHashingUtils::HashString("ko-KR");
        static constexpr uint32_t pt_BR_HASH = ConstExprHashingUtils::HashString("pt-BR");
        static constexpr uint32_t pt_PT_HASH = ConstExprHashingUtils::HashString("pt-PT");
        static constexpr uint32_t zh_CN_HASH = ConstExprHashingUtils::HashString("zh-CN");
        static constexpr uint32_t en_NZ_HASH = ConstExprHashingUtils::HashString("en-NZ");
        static constexpr uint32_t en_ZA_HASH = ConstExprHashingUtils::HashString("en-ZA");


        VocabularyLanguageCode GetVocabularyLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ar_AE_HASH)
          {
            return VocabularyLanguageCode::ar_AE;
          }
          else if (hashCode == de_CH_HASH)
          {
            return VocabularyLanguageCode::de_CH;
          }
          else if (hashCode == de_DE_HASH)
          {
            return VocabularyLanguageCode::de_DE;
          }
          else if (hashCode == en_AB_HASH)
          {
            return VocabularyLanguageCode::en_AB;
          }
          else if (hashCode == en_AU_HASH)
          {
            return VocabularyLanguageCode::en_AU;
          }
          else if (hashCode == en_GB_HASH)
          {
            return VocabularyLanguageCode::en_GB;
          }
          else if (hashCode == en_IE_HASH)
          {
            return VocabularyLanguageCode::en_IE;
          }
          else if (hashCode == en_IN_HASH)
          {
            return VocabularyLanguageCode::en_IN;
          }
          else if (hashCode == en_US_HASH)
          {
            return VocabularyLanguageCode::en_US;
          }
          else if (hashCode == en_WL_HASH)
          {
            return VocabularyLanguageCode::en_WL;
          }
          else if (hashCode == es_ES_HASH)
          {
            return VocabularyLanguageCode::es_ES;
          }
          else if (hashCode == es_US_HASH)
          {
            return VocabularyLanguageCode::es_US;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return VocabularyLanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return VocabularyLanguageCode::fr_FR;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return VocabularyLanguageCode::hi_IN;
          }
          else if (hashCode == it_IT_HASH)
          {
            return VocabularyLanguageCode::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return VocabularyLanguageCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return VocabularyLanguageCode::ko_KR;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return VocabularyLanguageCode::pt_BR;
          }
          else if (hashCode == pt_PT_HASH)
          {
            return VocabularyLanguageCode::pt_PT;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return VocabularyLanguageCode::zh_CN;
          }
          else if (hashCode == en_NZ_HASH)
          {
            return VocabularyLanguageCode::en_NZ;
          }
          else if (hashCode == en_ZA_HASH)
          {
            return VocabularyLanguageCode::en_ZA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VocabularyLanguageCode>(hashCode);
          }

          return VocabularyLanguageCode::NOT_SET;
        }

        Aws::String GetNameForVocabularyLanguageCode(VocabularyLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case VocabularyLanguageCode::NOT_SET:
            return {};
          case VocabularyLanguageCode::ar_AE:
            return "ar-AE";
          case VocabularyLanguageCode::de_CH:
            return "de-CH";
          case VocabularyLanguageCode::de_DE:
            return "de-DE";
          case VocabularyLanguageCode::en_AB:
            return "en-AB";
          case VocabularyLanguageCode::en_AU:
            return "en-AU";
          case VocabularyLanguageCode::en_GB:
            return "en-GB";
          case VocabularyLanguageCode::en_IE:
            return "en-IE";
          case VocabularyLanguageCode::en_IN:
            return "en-IN";
          case VocabularyLanguageCode::en_US:
            return "en-US";
          case VocabularyLanguageCode::en_WL:
            return "en-WL";
          case VocabularyLanguageCode::es_ES:
            return "es-ES";
          case VocabularyLanguageCode::es_US:
            return "es-US";
          case VocabularyLanguageCode::fr_CA:
            return "fr-CA";
          case VocabularyLanguageCode::fr_FR:
            return "fr-FR";
          case VocabularyLanguageCode::hi_IN:
            return "hi-IN";
          case VocabularyLanguageCode::it_IT:
            return "it-IT";
          case VocabularyLanguageCode::ja_JP:
            return "ja-JP";
          case VocabularyLanguageCode::ko_KR:
            return "ko-KR";
          case VocabularyLanguageCode::pt_BR:
            return "pt-BR";
          case VocabularyLanguageCode::pt_PT:
            return "pt-PT";
          case VocabularyLanguageCode::zh_CN:
            return "zh-CN";
          case VocabularyLanguageCode::en_NZ:
            return "en-NZ";
          case VocabularyLanguageCode::en_ZA:
            return "en-ZA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VocabularyLanguageCodeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
