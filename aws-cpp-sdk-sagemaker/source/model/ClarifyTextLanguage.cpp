/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyTextLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ClarifyTextLanguageMapper
      {

        static const int af_HASH = HashingUtils::HashString("af");
        static const int sq_HASH = HashingUtils::HashString("sq");
        static const int ar_HASH = HashingUtils::HashString("ar");
        static const int hy_HASH = HashingUtils::HashString("hy");
        static const int eu_HASH = HashingUtils::HashString("eu");
        static const int bn_HASH = HashingUtils::HashString("bn");
        static const int bg_HASH = HashingUtils::HashString("bg");
        static const int ca_HASH = HashingUtils::HashString("ca");
        static const int zh_HASH = HashingUtils::HashString("zh");
        static const int hr_HASH = HashingUtils::HashString("hr");
        static const int cs_HASH = HashingUtils::HashString("cs");
        static const int da_HASH = HashingUtils::HashString("da");
        static const int nl_HASH = HashingUtils::HashString("nl");
        static const int en_HASH = HashingUtils::HashString("en");
        static const int et_HASH = HashingUtils::HashString("et");
        static const int fi_HASH = HashingUtils::HashString("fi");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int el_HASH = HashingUtils::HashString("el");
        static const int gu_HASH = HashingUtils::HashString("gu");
        static const int he_HASH = HashingUtils::HashString("he");
        static const int hi_HASH = HashingUtils::HashString("hi");
        static const int hu_HASH = HashingUtils::HashString("hu");
        static const int is_HASH = HashingUtils::HashString("is");
        static const int id_HASH = HashingUtils::HashString("id");
        static const int ga_HASH = HashingUtils::HashString("ga");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int kn_HASH = HashingUtils::HashString("kn");
        static const int ky_HASH = HashingUtils::HashString("ky");
        static const int lv_HASH = HashingUtils::HashString("lv");
        static const int lt_HASH = HashingUtils::HashString("lt");
        static const int lb_HASH = HashingUtils::HashString("lb");
        static const int mk_HASH = HashingUtils::HashString("mk");
        static const int ml_HASH = HashingUtils::HashString("ml");
        static const int mr_HASH = HashingUtils::HashString("mr");
        static const int ne_HASH = HashingUtils::HashString("ne");
        static const int nb_HASH = HashingUtils::HashString("nb");
        static const int fa_HASH = HashingUtils::HashString("fa");
        static const int pl_HASH = HashingUtils::HashString("pl");
        static const int pt_HASH = HashingUtils::HashString("pt");
        static const int ro_HASH = HashingUtils::HashString("ro");
        static const int ru_HASH = HashingUtils::HashString("ru");
        static const int sa_HASH = HashingUtils::HashString("sa");
        static const int sr_HASH = HashingUtils::HashString("sr");
        static const int tn_HASH = HashingUtils::HashString("tn");
        static const int si_HASH = HashingUtils::HashString("si");
        static const int sk_HASH = HashingUtils::HashString("sk");
        static const int sl_HASH = HashingUtils::HashString("sl");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int sv_HASH = HashingUtils::HashString("sv");
        static const int tl_HASH = HashingUtils::HashString("tl");
        static const int ta_HASH = HashingUtils::HashString("ta");
        static const int tt_HASH = HashingUtils::HashString("tt");
        static const int te_HASH = HashingUtils::HashString("te");
        static const int tr_HASH = HashingUtils::HashString("tr");
        static const int uk_HASH = HashingUtils::HashString("uk");
        static const int ur_HASH = HashingUtils::HashString("ur");
        static const int yo_HASH = HashingUtils::HashString("yo");
        static const int lij_HASH = HashingUtils::HashString("lij");
        static const int xx_HASH = HashingUtils::HashString("xx");


        ClarifyTextLanguage GetClarifyTextLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == af_HASH)
          {
            return ClarifyTextLanguage::af;
          }
          else if (hashCode == sq_HASH)
          {
            return ClarifyTextLanguage::sq;
          }
          else if (hashCode == ar_HASH)
          {
            return ClarifyTextLanguage::ar;
          }
          else if (hashCode == hy_HASH)
          {
            return ClarifyTextLanguage::hy;
          }
          else if (hashCode == eu_HASH)
          {
            return ClarifyTextLanguage::eu;
          }
          else if (hashCode == bn_HASH)
          {
            return ClarifyTextLanguage::bn;
          }
          else if (hashCode == bg_HASH)
          {
            return ClarifyTextLanguage::bg;
          }
          else if (hashCode == ca_HASH)
          {
            return ClarifyTextLanguage::ca;
          }
          else if (hashCode == zh_HASH)
          {
            return ClarifyTextLanguage::zh;
          }
          else if (hashCode == hr_HASH)
          {
            return ClarifyTextLanguage::hr;
          }
          else if (hashCode == cs_HASH)
          {
            return ClarifyTextLanguage::cs;
          }
          else if (hashCode == da_HASH)
          {
            return ClarifyTextLanguage::da;
          }
          else if (hashCode == nl_HASH)
          {
            return ClarifyTextLanguage::nl;
          }
          else if (hashCode == en_HASH)
          {
            return ClarifyTextLanguage::en;
          }
          else if (hashCode == et_HASH)
          {
            return ClarifyTextLanguage::et;
          }
          else if (hashCode == fi_HASH)
          {
            return ClarifyTextLanguage::fi;
          }
          else if (hashCode == fr_HASH)
          {
            return ClarifyTextLanguage::fr;
          }
          else if (hashCode == de_HASH)
          {
            return ClarifyTextLanguage::de;
          }
          else if (hashCode == el_HASH)
          {
            return ClarifyTextLanguage::el;
          }
          else if (hashCode == gu_HASH)
          {
            return ClarifyTextLanguage::gu;
          }
          else if (hashCode == he_HASH)
          {
            return ClarifyTextLanguage::he;
          }
          else if (hashCode == hi_HASH)
          {
            return ClarifyTextLanguage::hi;
          }
          else if (hashCode == hu_HASH)
          {
            return ClarifyTextLanguage::hu;
          }
          else if (hashCode == is_HASH)
          {
            return ClarifyTextLanguage::is;
          }
          else if (hashCode == id_HASH)
          {
            return ClarifyTextLanguage::id;
          }
          else if (hashCode == ga_HASH)
          {
            return ClarifyTextLanguage::ga;
          }
          else if (hashCode == it_HASH)
          {
            return ClarifyTextLanguage::it;
          }
          else if (hashCode == kn_HASH)
          {
            return ClarifyTextLanguage::kn;
          }
          else if (hashCode == ky_HASH)
          {
            return ClarifyTextLanguage::ky;
          }
          else if (hashCode == lv_HASH)
          {
            return ClarifyTextLanguage::lv;
          }
          else if (hashCode == lt_HASH)
          {
            return ClarifyTextLanguage::lt;
          }
          else if (hashCode == lb_HASH)
          {
            return ClarifyTextLanguage::lb;
          }
          else if (hashCode == mk_HASH)
          {
            return ClarifyTextLanguage::mk;
          }
          else if (hashCode == ml_HASH)
          {
            return ClarifyTextLanguage::ml;
          }
          else if (hashCode == mr_HASH)
          {
            return ClarifyTextLanguage::mr;
          }
          else if (hashCode == ne_HASH)
          {
            return ClarifyTextLanguage::ne;
          }
          else if (hashCode == nb_HASH)
          {
            return ClarifyTextLanguage::nb;
          }
          else if (hashCode == fa_HASH)
          {
            return ClarifyTextLanguage::fa;
          }
          else if (hashCode == pl_HASH)
          {
            return ClarifyTextLanguage::pl;
          }
          else if (hashCode == pt_HASH)
          {
            return ClarifyTextLanguage::pt;
          }
          else if (hashCode == ro_HASH)
          {
            return ClarifyTextLanguage::ro;
          }
          else if (hashCode == ru_HASH)
          {
            return ClarifyTextLanguage::ru;
          }
          else if (hashCode == sa_HASH)
          {
            return ClarifyTextLanguage::sa;
          }
          else if (hashCode == sr_HASH)
          {
            return ClarifyTextLanguage::sr;
          }
          else if (hashCode == tn_HASH)
          {
            return ClarifyTextLanguage::tn;
          }
          else if (hashCode == si_HASH)
          {
            return ClarifyTextLanguage::si;
          }
          else if (hashCode == sk_HASH)
          {
            return ClarifyTextLanguage::sk;
          }
          else if (hashCode == sl_HASH)
          {
            return ClarifyTextLanguage::sl;
          }
          else if (hashCode == es_HASH)
          {
            return ClarifyTextLanguage::es;
          }
          else if (hashCode == sv_HASH)
          {
            return ClarifyTextLanguage::sv;
          }
          else if (hashCode == tl_HASH)
          {
            return ClarifyTextLanguage::tl;
          }
          else if (hashCode == ta_HASH)
          {
            return ClarifyTextLanguage::ta;
          }
          else if (hashCode == tt_HASH)
          {
            return ClarifyTextLanguage::tt;
          }
          else if (hashCode == te_HASH)
          {
            return ClarifyTextLanguage::te;
          }
          else if (hashCode == tr_HASH)
          {
            return ClarifyTextLanguage::tr;
          }
          else if (hashCode == uk_HASH)
          {
            return ClarifyTextLanguage::uk;
          }
          else if (hashCode == ur_HASH)
          {
            return ClarifyTextLanguage::ur;
          }
          else if (hashCode == yo_HASH)
          {
            return ClarifyTextLanguage::yo;
          }
          else if (hashCode == lij_HASH)
          {
            return ClarifyTextLanguage::lij;
          }
          else if (hashCode == xx_HASH)
          {
            return ClarifyTextLanguage::xx;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClarifyTextLanguage>(hashCode);
          }

          return ClarifyTextLanguage::NOT_SET;
        }

        Aws::String GetNameForClarifyTextLanguage(ClarifyTextLanguage enumValue)
        {
          switch(enumValue)
          {
          case ClarifyTextLanguage::af:
            return "af";
          case ClarifyTextLanguage::sq:
            return "sq";
          case ClarifyTextLanguage::ar:
            return "ar";
          case ClarifyTextLanguage::hy:
            return "hy";
          case ClarifyTextLanguage::eu:
            return "eu";
          case ClarifyTextLanguage::bn:
            return "bn";
          case ClarifyTextLanguage::bg:
            return "bg";
          case ClarifyTextLanguage::ca:
            return "ca";
          case ClarifyTextLanguage::zh:
            return "zh";
          case ClarifyTextLanguage::hr:
            return "hr";
          case ClarifyTextLanguage::cs:
            return "cs";
          case ClarifyTextLanguage::da:
            return "da";
          case ClarifyTextLanguage::nl:
            return "nl";
          case ClarifyTextLanguage::en:
            return "en";
          case ClarifyTextLanguage::et:
            return "et";
          case ClarifyTextLanguage::fi:
            return "fi";
          case ClarifyTextLanguage::fr:
            return "fr";
          case ClarifyTextLanguage::de:
            return "de";
          case ClarifyTextLanguage::el:
            return "el";
          case ClarifyTextLanguage::gu:
            return "gu";
          case ClarifyTextLanguage::he:
            return "he";
          case ClarifyTextLanguage::hi:
            return "hi";
          case ClarifyTextLanguage::hu:
            return "hu";
          case ClarifyTextLanguage::is:
            return "is";
          case ClarifyTextLanguage::id:
            return "id";
          case ClarifyTextLanguage::ga:
            return "ga";
          case ClarifyTextLanguage::it:
            return "it";
          case ClarifyTextLanguage::kn:
            return "kn";
          case ClarifyTextLanguage::ky:
            return "ky";
          case ClarifyTextLanguage::lv:
            return "lv";
          case ClarifyTextLanguage::lt:
            return "lt";
          case ClarifyTextLanguage::lb:
            return "lb";
          case ClarifyTextLanguage::mk:
            return "mk";
          case ClarifyTextLanguage::ml:
            return "ml";
          case ClarifyTextLanguage::mr:
            return "mr";
          case ClarifyTextLanguage::ne:
            return "ne";
          case ClarifyTextLanguage::nb:
            return "nb";
          case ClarifyTextLanguage::fa:
            return "fa";
          case ClarifyTextLanguage::pl:
            return "pl";
          case ClarifyTextLanguage::pt:
            return "pt";
          case ClarifyTextLanguage::ro:
            return "ro";
          case ClarifyTextLanguage::ru:
            return "ru";
          case ClarifyTextLanguage::sa:
            return "sa";
          case ClarifyTextLanguage::sr:
            return "sr";
          case ClarifyTextLanguage::tn:
            return "tn";
          case ClarifyTextLanguage::si:
            return "si";
          case ClarifyTextLanguage::sk:
            return "sk";
          case ClarifyTextLanguage::sl:
            return "sl";
          case ClarifyTextLanguage::es:
            return "es";
          case ClarifyTextLanguage::sv:
            return "sv";
          case ClarifyTextLanguage::tl:
            return "tl";
          case ClarifyTextLanguage::ta:
            return "ta";
          case ClarifyTextLanguage::tt:
            return "tt";
          case ClarifyTextLanguage::te:
            return "te";
          case ClarifyTextLanguage::tr:
            return "tr";
          case ClarifyTextLanguage::uk:
            return "uk";
          case ClarifyTextLanguage::ur:
            return "ur";
          case ClarifyTextLanguage::yo:
            return "yo";
          case ClarifyTextLanguage::lij:
            return "lij";
          case ClarifyTextLanguage::xx:
            return "xx";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClarifyTextLanguageMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
