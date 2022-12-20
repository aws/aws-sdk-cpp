/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int af_ZA_HASH = HashingUtils::HashString("af-ZA");
        static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
        static const int ar_SA_HASH = HashingUtils::HashString("ar-SA");
        static const int da_DK_HASH = HashingUtils::HashString("da-DK");
        static const int de_CH_HASH = HashingUtils::HashString("de-CH");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int en_AB_HASH = HashingUtils::HashString("en-AB");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int en_IE_HASH = HashingUtils::HashString("en-IE");
        static const int en_IN_HASH = HashingUtils::HashString("en-IN");
        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_WL_HASH = HashingUtils::HashString("en-WL");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int fa_IR_HASH = HashingUtils::HashString("fa-IR");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int he_IL_HASH = HashingUtils::HashString("he-IL");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int id_ID_HASH = HashingUtils::HashString("id-ID");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int ms_MY_HASH = HashingUtils::HashString("ms-MY");
        static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
        static const int ru_RU_HASH = HashingUtils::HashString("ru-RU");
        static const int ta_IN_HASH = HashingUtils::HashString("ta-IN");
        static const int te_IN_HASH = HashingUtils::HashString("te-IN");
        static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
        static const int th_TH_HASH = HashingUtils::HashString("th-TH");
        static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
        static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
        static const int vi_VN_HASH = HashingUtils::HashString("vi-VN");
        static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == af_ZA_HASH)
          {
            return LanguageCode::af_ZA;
          }
          else if (hashCode == ar_AE_HASH)
          {
            return LanguageCode::ar_AE;
          }
          else if (hashCode == ar_SA_HASH)
          {
            return LanguageCode::ar_SA;
          }
          else if (hashCode == da_DK_HASH)
          {
            return LanguageCode::da_DK;
          }
          else if (hashCode == de_CH_HASH)
          {
            return LanguageCode::de_CH;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == en_AB_HASH)
          {
            return LanguageCode::en_AB;
          }
          else if (hashCode == en_AU_HASH)
          {
            return LanguageCode::en_AU;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCode::en_GB;
          }
          else if (hashCode == en_IE_HASH)
          {
            return LanguageCode::en_IE;
          }
          else if (hashCode == en_IN_HASH)
          {
            return LanguageCode::en_IN;
          }
          else if (hashCode == en_US_HASH)
          {
            return LanguageCode::en_US;
          }
          else if (hashCode == en_WL_HASH)
          {
            return LanguageCode::en_WL;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCode::es_ES;
          }
          else if (hashCode == es_US_HASH)
          {
            return LanguageCode::es_US;
          }
          else if (hashCode == fa_IR_HASH)
          {
            return LanguageCode::fa_IR;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == he_IL_HASH)
          {
            return LanguageCode::he_IL;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return LanguageCode::hi_IN;
          }
          else if (hashCode == id_ID_HASH)
          {
            return LanguageCode::id_ID;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == ms_MY_HASH)
          {
            return LanguageCode::ms_MY;
          }
          else if (hashCode == nl_NL_HASH)
          {
            return LanguageCode::nl_NL;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCode::pt_BR;
          }
          else if (hashCode == pt_PT_HASH)
          {
            return LanguageCode::pt_PT;
          }
          else if (hashCode == ru_RU_HASH)
          {
            return LanguageCode::ru_RU;
          }
          else if (hashCode == ta_IN_HASH)
          {
            return LanguageCode::ta_IN;
          }
          else if (hashCode == te_IN_HASH)
          {
            return LanguageCode::te_IN;
          }
          else if (hashCode == tr_TR_HASH)
          {
            return LanguageCode::tr_TR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LanguageCode::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LanguageCode::zh_TW;
          }
          else if (hashCode == th_TH_HASH)
          {
            return LanguageCode::th_TH;
          }
          else if (hashCode == en_ZA_HASH)
          {
            return LanguageCode::en_ZA;
          }
          else if (hashCode == en_NZ_HASH)
          {
            return LanguageCode::en_NZ;
          }
          else if (hashCode == vi_VN_HASH)
          {
            return LanguageCode::vi_VN;
          }
          else if (hashCode == sv_SE_HASH)
          {
            return LanguageCode::sv_SE;
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
          case LanguageCode::af_ZA:
            return "af-ZA";
          case LanguageCode::ar_AE:
            return "ar-AE";
          case LanguageCode::ar_SA:
            return "ar-SA";
          case LanguageCode::da_DK:
            return "da-DK";
          case LanguageCode::de_CH:
            return "de-CH";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::en_AB:
            return "en-AB";
          case LanguageCode::en_AU:
            return "en-AU";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::en_IE:
            return "en-IE";
          case LanguageCode::en_IN:
            return "en-IN";
          case LanguageCode::en_US:
            return "en-US";
          case LanguageCode::en_WL:
            return "en-WL";
          case LanguageCode::es_ES:
            return "es-ES";
          case LanguageCode::es_US:
            return "es-US";
          case LanguageCode::fa_IR:
            return "fa-IR";
          case LanguageCode::fr_CA:
            return "fr-CA";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::he_IL:
            return "he-IL";
          case LanguageCode::hi_IN:
            return "hi-IN";
          case LanguageCode::id_ID:
            return "id-ID";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::ja_JP:
            return "ja-JP";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::ms_MY:
            return "ms-MY";
          case LanguageCode::nl_NL:
            return "nl-NL";
          case LanguageCode::pt_BR:
            return "pt-BR";
          case LanguageCode::pt_PT:
            return "pt-PT";
          case LanguageCode::ru_RU:
            return "ru-RU";
          case LanguageCode::ta_IN:
            return "ta-IN";
          case LanguageCode::te_IN:
            return "te-IN";
          case LanguageCode::tr_TR:
            return "tr-TR";
          case LanguageCode::zh_CN:
            return "zh-CN";
          case LanguageCode::zh_TW:
            return "zh-TW";
          case LanguageCode::th_TH:
            return "th-TH";
          case LanguageCode::en_ZA:
            return "en-ZA";
          case LanguageCode::en_NZ:
            return "en-NZ";
          case LanguageCode::vi_VN:
            return "vi-VN";
          case LanguageCode::sv_SE:
            return "sv-SE";
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
  } // namespace TranscribeService
} // namespace Aws
