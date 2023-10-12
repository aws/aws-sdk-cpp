/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/AnalysisSchemeLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearch
  {
    namespace Model
    {
      namespace AnalysisSchemeLanguageMapper
      {

        static constexpr uint32_t ar_HASH = ConstExprHashingUtils::HashString("ar");
        static constexpr uint32_t bg_HASH = ConstExprHashingUtils::HashString("bg");
        static constexpr uint32_t ca_HASH = ConstExprHashingUtils::HashString("ca");
        static constexpr uint32_t cs_HASH = ConstExprHashingUtils::HashString("cs");
        static constexpr uint32_t da_HASH = ConstExprHashingUtils::HashString("da");
        static constexpr uint32_t de_HASH = ConstExprHashingUtils::HashString("de");
        static constexpr uint32_t el_HASH = ConstExprHashingUtils::HashString("el");
        static constexpr uint32_t en_HASH = ConstExprHashingUtils::HashString("en");
        static constexpr uint32_t es_HASH = ConstExprHashingUtils::HashString("es");
        static constexpr uint32_t eu_HASH = ConstExprHashingUtils::HashString("eu");
        static constexpr uint32_t fa_HASH = ConstExprHashingUtils::HashString("fa");
        static constexpr uint32_t fi_HASH = ConstExprHashingUtils::HashString("fi");
        static constexpr uint32_t fr_HASH = ConstExprHashingUtils::HashString("fr");
        static constexpr uint32_t ga_HASH = ConstExprHashingUtils::HashString("ga");
        static constexpr uint32_t gl_HASH = ConstExprHashingUtils::HashString("gl");
        static constexpr uint32_t he_HASH = ConstExprHashingUtils::HashString("he");
        static constexpr uint32_t hi_HASH = ConstExprHashingUtils::HashString("hi");
        static constexpr uint32_t hu_HASH = ConstExprHashingUtils::HashString("hu");
        static constexpr uint32_t hy_HASH = ConstExprHashingUtils::HashString("hy");
        static constexpr uint32_t id_HASH = ConstExprHashingUtils::HashString("id");
        static constexpr uint32_t it_HASH = ConstExprHashingUtils::HashString("it");
        static constexpr uint32_t ja_HASH = ConstExprHashingUtils::HashString("ja");
        static constexpr uint32_t ko_HASH = ConstExprHashingUtils::HashString("ko");
        static constexpr uint32_t lv_HASH = ConstExprHashingUtils::HashString("lv");
        static constexpr uint32_t mul_HASH = ConstExprHashingUtils::HashString("mul");
        static constexpr uint32_t nl_HASH = ConstExprHashingUtils::HashString("nl");
        static constexpr uint32_t no_HASH = ConstExprHashingUtils::HashString("no");
        static constexpr uint32_t pt_HASH = ConstExprHashingUtils::HashString("pt");
        static constexpr uint32_t ro_HASH = ConstExprHashingUtils::HashString("ro");
        static constexpr uint32_t ru_HASH = ConstExprHashingUtils::HashString("ru");
        static constexpr uint32_t sv_HASH = ConstExprHashingUtils::HashString("sv");
        static constexpr uint32_t th_HASH = ConstExprHashingUtils::HashString("th");
        static constexpr uint32_t tr_HASH = ConstExprHashingUtils::HashString("tr");
        static constexpr uint32_t zh_Hans_HASH = ConstExprHashingUtils::HashString("zh-Hans");
        static constexpr uint32_t zh_Hant_HASH = ConstExprHashingUtils::HashString("zh-Hant");


        AnalysisSchemeLanguage GetAnalysisSchemeLanguageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ar_HASH)
          {
            return AnalysisSchemeLanguage::ar;
          }
          else if (hashCode == bg_HASH)
          {
            return AnalysisSchemeLanguage::bg;
          }
          else if (hashCode == ca_HASH)
          {
            return AnalysisSchemeLanguage::ca;
          }
          else if (hashCode == cs_HASH)
          {
            return AnalysisSchemeLanguage::cs;
          }
          else if (hashCode == da_HASH)
          {
            return AnalysisSchemeLanguage::da;
          }
          else if (hashCode == de_HASH)
          {
            return AnalysisSchemeLanguage::de;
          }
          else if (hashCode == el_HASH)
          {
            return AnalysisSchemeLanguage::el;
          }
          else if (hashCode == en_HASH)
          {
            return AnalysisSchemeLanguage::en;
          }
          else if (hashCode == es_HASH)
          {
            return AnalysisSchemeLanguage::es;
          }
          else if (hashCode == eu_HASH)
          {
            return AnalysisSchemeLanguage::eu;
          }
          else if (hashCode == fa_HASH)
          {
            return AnalysisSchemeLanguage::fa;
          }
          else if (hashCode == fi_HASH)
          {
            return AnalysisSchemeLanguage::fi;
          }
          else if (hashCode == fr_HASH)
          {
            return AnalysisSchemeLanguage::fr;
          }
          else if (hashCode == ga_HASH)
          {
            return AnalysisSchemeLanguage::ga;
          }
          else if (hashCode == gl_HASH)
          {
            return AnalysisSchemeLanguage::gl;
          }
          else if (hashCode == he_HASH)
          {
            return AnalysisSchemeLanguage::he;
          }
          else if (hashCode == hi_HASH)
          {
            return AnalysisSchemeLanguage::hi;
          }
          else if (hashCode == hu_HASH)
          {
            return AnalysisSchemeLanguage::hu;
          }
          else if (hashCode == hy_HASH)
          {
            return AnalysisSchemeLanguage::hy;
          }
          else if (hashCode == id_HASH)
          {
            return AnalysisSchemeLanguage::id;
          }
          else if (hashCode == it_HASH)
          {
            return AnalysisSchemeLanguage::it;
          }
          else if (hashCode == ja_HASH)
          {
            return AnalysisSchemeLanguage::ja;
          }
          else if (hashCode == ko_HASH)
          {
            return AnalysisSchemeLanguage::ko;
          }
          else if (hashCode == lv_HASH)
          {
            return AnalysisSchemeLanguage::lv;
          }
          else if (hashCode == mul_HASH)
          {
            return AnalysisSchemeLanguage::mul;
          }
          else if (hashCode == nl_HASH)
          {
            return AnalysisSchemeLanguage::nl;
          }
          else if (hashCode == no_HASH)
          {
            return AnalysisSchemeLanguage::no;
          }
          else if (hashCode == pt_HASH)
          {
            return AnalysisSchemeLanguage::pt;
          }
          else if (hashCode == ro_HASH)
          {
            return AnalysisSchemeLanguage::ro;
          }
          else if (hashCode == ru_HASH)
          {
            return AnalysisSchemeLanguage::ru;
          }
          else if (hashCode == sv_HASH)
          {
            return AnalysisSchemeLanguage::sv;
          }
          else if (hashCode == th_HASH)
          {
            return AnalysisSchemeLanguage::th;
          }
          else if (hashCode == tr_HASH)
          {
            return AnalysisSchemeLanguage::tr;
          }
          else if (hashCode == zh_Hans_HASH)
          {
            return AnalysisSchemeLanguage::zh_Hans;
          }
          else if (hashCode == zh_Hant_HASH)
          {
            return AnalysisSchemeLanguage::zh_Hant;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisSchemeLanguage>(hashCode);
          }

          return AnalysisSchemeLanguage::NOT_SET;
        }

        Aws::String GetNameForAnalysisSchemeLanguage(AnalysisSchemeLanguage enumValue)
        {
          switch(enumValue)
          {
          case AnalysisSchemeLanguage::NOT_SET:
            return {};
          case AnalysisSchemeLanguage::ar:
            return "ar";
          case AnalysisSchemeLanguage::bg:
            return "bg";
          case AnalysisSchemeLanguage::ca:
            return "ca";
          case AnalysisSchemeLanguage::cs:
            return "cs";
          case AnalysisSchemeLanguage::da:
            return "da";
          case AnalysisSchemeLanguage::de:
            return "de";
          case AnalysisSchemeLanguage::el:
            return "el";
          case AnalysisSchemeLanguage::en:
            return "en";
          case AnalysisSchemeLanguage::es:
            return "es";
          case AnalysisSchemeLanguage::eu:
            return "eu";
          case AnalysisSchemeLanguage::fa:
            return "fa";
          case AnalysisSchemeLanguage::fi:
            return "fi";
          case AnalysisSchemeLanguage::fr:
            return "fr";
          case AnalysisSchemeLanguage::ga:
            return "ga";
          case AnalysisSchemeLanguage::gl:
            return "gl";
          case AnalysisSchemeLanguage::he:
            return "he";
          case AnalysisSchemeLanguage::hi:
            return "hi";
          case AnalysisSchemeLanguage::hu:
            return "hu";
          case AnalysisSchemeLanguage::hy:
            return "hy";
          case AnalysisSchemeLanguage::id:
            return "id";
          case AnalysisSchemeLanguage::it:
            return "it";
          case AnalysisSchemeLanguage::ja:
            return "ja";
          case AnalysisSchemeLanguage::ko:
            return "ko";
          case AnalysisSchemeLanguage::lv:
            return "lv";
          case AnalysisSchemeLanguage::mul:
            return "mul";
          case AnalysisSchemeLanguage::nl:
            return "nl";
          case AnalysisSchemeLanguage::no:
            return "no";
          case AnalysisSchemeLanguage::pt:
            return "pt";
          case AnalysisSchemeLanguage::ro:
            return "ro";
          case AnalysisSchemeLanguage::ru:
            return "ru";
          case AnalysisSchemeLanguage::sv:
            return "sv";
          case AnalysisSchemeLanguage::th:
            return "th";
          case AnalysisSchemeLanguage::tr:
            return "tr";
          case AnalysisSchemeLanguage::zh_Hans:
            return "zh-Hans";
          case AnalysisSchemeLanguage::zh_Hant:
            return "zh-Hant";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisSchemeLanguageMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
