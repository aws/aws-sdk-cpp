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

        static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
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
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
        static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
        static const int ca_ES_HASH = HashingUtils::HashString("ca-ES");
        static const int da_DK_HASH = HashingUtils::HashString("da-DK");
        static const int fi_FI_HASH = HashingUtils::HashString("fi-FI");
        static const int id_ID_HASH = HashingUtils::HashString("id-ID");
        static const int ms_MY_HASH = HashingUtils::HashString("ms-MY");
        static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
        static const int no_NO_HASH = HashingUtils::HashString("no-NO");
        static const int pl_PL_HASH = HashingUtils::HashString("pl-PL");
        static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");
        static const int tl_PH_HASH = HashingUtils::HashString("tl-PH");


        VocabularyLanguageCode GetVocabularyLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ca_ES_HASH)
          {
            return VocabularyLanguageCode::ca_ES;
          }
          else if (hashCode == da_DK_HASH)
          {
            return VocabularyLanguageCode::da_DK;
          }
          else if (hashCode == fi_FI_HASH)
          {
            return VocabularyLanguageCode::fi_FI;
          }
          else if (hashCode == id_ID_HASH)
          {
            return VocabularyLanguageCode::id_ID;
          }
          else if (hashCode == ms_MY_HASH)
          {
            return VocabularyLanguageCode::ms_MY;
          }
          else if (hashCode == nl_NL_HASH)
          {
            return VocabularyLanguageCode::nl_NL;
          }
          else if (hashCode == no_NO_HASH)
          {
            return VocabularyLanguageCode::no_NO;
          }
          else if (hashCode == pl_PL_HASH)
          {
            return VocabularyLanguageCode::pl_PL;
          }
          else if (hashCode == sv_SE_HASH)
          {
            return VocabularyLanguageCode::sv_SE;
          }
          else if (hashCode == tl_PH_HASH)
          {
            return VocabularyLanguageCode::tl_PH;
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
          case VocabularyLanguageCode::ca_ES:
            return "ca-ES";
          case VocabularyLanguageCode::da_DK:
            return "da-DK";
          case VocabularyLanguageCode::fi_FI:
            return "fi-FI";
          case VocabularyLanguageCode::id_ID:
            return "id-ID";
          case VocabularyLanguageCode::ms_MY:
            return "ms-MY";
          case VocabularyLanguageCode::nl_NL:
            return "nl-NL";
          case VocabularyLanguageCode::no_NO:
            return "no-NO";
          case VocabularyLanguageCode::pl_PL:
            return "pl-PL";
          case VocabularyLanguageCode::sv_SE:
            return "sv-SE";
          case VocabularyLanguageCode::tl_PH:
            return "tl-PH";
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
