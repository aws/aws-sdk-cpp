/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

        static const int ar_HASH = HashingUtils::HashString("ar");
        static const int bg_HASH = HashingUtils::HashString("bg");
        static const int ca_HASH = HashingUtils::HashString("ca");
        static const int cs_HASH = HashingUtils::HashString("cs");
        static const int da_HASH = HashingUtils::HashString("da");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int el_HASH = HashingUtils::HashString("el");
        static const int en_HASH = HashingUtils::HashString("en");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int eu_HASH = HashingUtils::HashString("eu");
        static const int fa_HASH = HashingUtils::HashString("fa");
        static const int fi_HASH = HashingUtils::HashString("fi");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int ga_HASH = HashingUtils::HashString("ga");
        static const int gl_HASH = HashingUtils::HashString("gl");
        static const int he_HASH = HashingUtils::HashString("he");
        static const int hi_HASH = HashingUtils::HashString("hi");
        static const int hu_HASH = HashingUtils::HashString("hu");
        static const int hy_HASH = HashingUtils::HashString("hy");
        static const int id_HASH = HashingUtils::HashString("id");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int ja_HASH = HashingUtils::HashString("ja");
        static const int ko_HASH = HashingUtils::HashString("ko");
        static const int lv_HASH = HashingUtils::HashString("lv");
        static const int mul_HASH = HashingUtils::HashString("mul");
        static const int nl_HASH = HashingUtils::HashString("nl");
        static const int no_HASH = HashingUtils::HashString("no");
        static const int pt_HASH = HashingUtils::HashString("pt");
        static const int ro_HASH = HashingUtils::HashString("ro");
        static const int ru_HASH = HashingUtils::HashString("ru");
        static const int sv_HASH = HashingUtils::HashString("sv");
        static const int th_HASH = HashingUtils::HashString("th");
        static const int tr_HASH = HashingUtils::HashString("tr");
        static const int zh_Hans_HASH = HashingUtils::HashString("zh-Hans");
        static const int zh_Hant_HASH = HashingUtils::HashString("zh-Hant");


        AnalysisSchemeLanguage GetAnalysisSchemeLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace AnalysisSchemeLanguageMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
