/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormLanguageCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormLanguageCodeMapper {

static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int es_ES_HASH = HashingUtils::HashString("es-ES");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
static const int ms_MY_HASH = HashingUtils::HashString("ms-MY");
static const int af_ZA_HASH = HashingUtils::HashString("af-ZA");
static const int sq_AL_HASH = HashingUtils::HashString("sq-AL");
static const int am_ET_HASH = HashingUtils::HashString("am-ET");
static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
static const int ar_SA_HASH = HashingUtils::HashString("ar-SA");
static const int hy_AM_HASH = HashingUtils::HashString("hy-AM");
static const int eu_ES_HASH = HashingUtils::HashString("eu-ES");
static const int be_BY_HASH = HashingUtils::HashString("be-BY");
static const int bs_BA_HASH = HashingUtils::HashString("bs-BA");
static const int bg_BG_HASH = HashingUtils::HashString("bg-BG");
static const int ca_ES_HASH = HashingUtils::HashString("ca-ES");
static const int ckb_IR_HASH = HashingUtils::HashString("ckb-IR");
static const int ckb_IQ_HASH = HashingUtils::HashString("ckb-IQ");
static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
static const int hr_HR_HASH = HashingUtils::HashString("hr-HR");
static const int cs_CZ_HASH = HashingUtils::HashString("cs-CZ");
static const int da_DK_HASH = HashingUtils::HashString("da-DK");
static const int nl_BE_HASH = HashingUtils::HashString("nl-BE");
static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
static const int en_AU_HASH = HashingUtils::HashString("en-AU");
static const int en_IN_HASH = HashingUtils::HashString("en-IN");
static const int en_IE_HASH = HashingUtils::HashString("en-IE");
static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
static const int en_AB_HASH = HashingUtils::HashString("en-AB");
static const int en_SG_HASH = HashingUtils::HashString("en-SG");
static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
static const int en_GB_HASH = HashingUtils::HashString("en-GB");
static const int en_WL_HASH = HashingUtils::HashString("en-WL");
static const int fa_IR_HASH = HashingUtils::HashString("fa-IR");
static const int fa_AF_HASH = HashingUtils::HashString("fa-AF");
static const int fi_FI_HASH = HashingUtils::HashString("fi-FI");
static const int fr_BE_HASH = HashingUtils::HashString("fr-BE");
static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
static const int ga_IE_HASH = HashingUtils::HashString("ga-IE");
static const int gl_ES_HASH = HashingUtils::HashString("gl-ES");
static const int ka_GE_HASH = HashingUtils::HashString("ka-GE");
static const int de_AT_HASH = HashingUtils::HashString("de-AT");
static const int de_CH_HASH = HashingUtils::HashString("de-CH");
static const int el_GR_HASH = HashingUtils::HashString("el-GR");
static const int gu_IN_HASH = HashingUtils::HashString("gu-IN");
static const int ht_HT_HASH = HashingUtils::HashString("ht-HT");
static const int he_IL_HASH = HashingUtils::HashString("he-IL");
static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
static const int hu_HU_HASH = HashingUtils::HashString("hu-HU");
static const int is_IS_HASH = HashingUtils::HashString("is-IS");
static const int id_ID_HASH = HashingUtils::HashString("id-ID");
static const int jv_ID_HASH = HashingUtils::HashString("jv-ID");
static const int km_KH_HASH = HashingUtils::HashString("km-KH");
static const int kn_IN_HASH = HashingUtils::HashString("kn-IN");
static const int kk_KZ_HASH = HashingUtils::HashString("kk-KZ");
static const int lo_LA_HASH = HashingUtils::HashString("lo-LA");
static const int lv_LV_HASH = HashingUtils::HashString("lv-LV");
static const int lt_LT_HASH = HashingUtils::HashString("lt-LT");
static const int mk_MK_HASH = HashingUtils::HashString("mk-MK");
static const int ml_IN_HASH = HashingUtils::HashString("ml-IN");
static const int mr_IN_HASH = HashingUtils::HashString("mr-IN");
static const int ne_NP_HASH = HashingUtils::HashString("ne-NP");
static const int no_NO_HASH = HashingUtils::HashString("no-NO");
static const int or_IN_HASH = HashingUtils::HashString("or-IN");
static const int ps_AF_HASH = HashingUtils::HashString("ps-AF");
static const int pl_PL_HASH = HashingUtils::HashString("pl-PL");
static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
static const int pa_IN_HASH = HashingUtils::HashString("pa-IN");
static const int ro_RO_HASH = HashingUtils::HashString("ro-RO");
static const int ru_RU_HASH = HashingUtils::HashString("ru-RU");
static const int sr_RS_HASH = HashingUtils::HashString("sr-RS");
static const int si_LK_HASH = HashingUtils::HashString("si-LK");
static const int sk_SK_HASH = HashingUtils::HashString("sk-SK");
static const int sl_SI_HASH = HashingUtils::HashString("sl-SI");
static const int es_MX_HASH = HashingUtils::HashString("es-MX");
static const int es_US_HASH = HashingUtils::HashString("es-US");
static const int su_ID_HASH = HashingUtils::HashString("su-ID");
static const int sw_BI_HASH = HashingUtils::HashString("sw-BI");
static const int sw_KE_HASH = HashingUtils::HashString("sw-KE");
static const int sw_RW_HASH = HashingUtils::HashString("sw-RW");
static const int sw_TZ_HASH = HashingUtils::HashString("sw-TZ");
static const int sw_UG_HASH = HashingUtils::HashString("sw-UG");
static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");
static const int tl_PH_HASH = HashingUtils::HashString("tl-PH");
static const int ta_IN_HASH = HashingUtils::HashString("ta-IN");
static const int te_IN_HASH = HashingUtils::HashString("te-IN");
static const int th_TH_HASH = HashingUtils::HashString("th-TH");
static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");
static const int uk_UA_HASH = HashingUtils::HashString("uk-UA");
static const int uz_UZ_HASH = HashingUtils::HashString("uz-UZ");
static const int vi_VN_HASH = HashingUtils::HashString("vi-VN");
static const int zu_ZA_HASH = HashingUtils::HashString("zu-ZA");
static const int my_MM_HASH = HashingUtils::HashString("my-MM");
static const int so_SO_HASH = HashingUtils::HashString("so-SO");
static const int yue_HK_HASH = HashingUtils::HashString("yue-HK");
static const int et_EE_HASH = HashingUtils::HashString("et-EE");
static const int hmn_HASH = HashingUtils::HashString("hmn");
static const int lg_UG_HASH = HashingUtils::HashString("lg-UG");
static const int cy_GB_HASH = HashingUtils::HashString("cy-GB");
static const int xh_ZA_HASH = HashingUtils::HashString("xh-ZA");
static const int bn_BD_HASH = HashingUtils::HashString("bn-BD");

EvaluationFormLanguageCode GetEvaluationFormLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == de_DE_HASH) {
    return EvaluationFormLanguageCode::de_DE;
  } else if (hashCode == en_US_HASH) {
    return EvaluationFormLanguageCode::en_US;
  } else if (hashCode == es_ES_HASH) {
    return EvaluationFormLanguageCode::es_ES;
  } else if (hashCode == fr_FR_HASH) {
    return EvaluationFormLanguageCode::fr_FR;
  } else if (hashCode == it_IT_HASH) {
    return EvaluationFormLanguageCode::it_IT;
  } else if (hashCode == pt_BR_HASH) {
    return EvaluationFormLanguageCode::pt_BR;
  } else if (hashCode == ja_JP_HASH) {
    return EvaluationFormLanguageCode::ja_JP;
  } else if (hashCode == ko_KR_HASH) {
    return EvaluationFormLanguageCode::ko_KR;
  } else if (hashCode == zh_CN_HASH) {
    return EvaluationFormLanguageCode::zh_CN;
  } else if (hashCode == ms_MY_HASH) {
    return EvaluationFormLanguageCode::ms_MY;
  } else if (hashCode == af_ZA_HASH) {
    return EvaluationFormLanguageCode::af_ZA;
  } else if (hashCode == sq_AL_HASH) {
    return EvaluationFormLanguageCode::sq_AL;
  } else if (hashCode == am_ET_HASH) {
    return EvaluationFormLanguageCode::am_ET;
  } else if (hashCode == ar_AE_HASH) {
    return EvaluationFormLanguageCode::ar_AE;
  } else if (hashCode == ar_SA_HASH) {
    return EvaluationFormLanguageCode::ar_SA;
  } else if (hashCode == hy_AM_HASH) {
    return EvaluationFormLanguageCode::hy_AM;
  } else if (hashCode == eu_ES_HASH) {
    return EvaluationFormLanguageCode::eu_ES;
  } else if (hashCode == be_BY_HASH) {
    return EvaluationFormLanguageCode::be_BY;
  } else if (hashCode == bs_BA_HASH) {
    return EvaluationFormLanguageCode::bs_BA;
  } else if (hashCode == bg_BG_HASH) {
    return EvaluationFormLanguageCode::bg_BG;
  } else if (hashCode == ca_ES_HASH) {
    return EvaluationFormLanguageCode::ca_ES;
  } else if (hashCode == ckb_IR_HASH) {
    return EvaluationFormLanguageCode::ckb_IR;
  } else if (hashCode == ckb_IQ_HASH) {
    return EvaluationFormLanguageCode::ckb_IQ;
  } else if (hashCode == zh_TW_HASH) {
    return EvaluationFormLanguageCode::zh_TW;
  } else if (hashCode == hr_HR_HASH) {
    return EvaluationFormLanguageCode::hr_HR;
  } else if (hashCode == cs_CZ_HASH) {
    return EvaluationFormLanguageCode::cs_CZ;
  } else if (hashCode == da_DK_HASH) {
    return EvaluationFormLanguageCode::da_DK;
  } else if (hashCode == nl_BE_HASH) {
    return EvaluationFormLanguageCode::nl_BE;
  } else if (hashCode == nl_NL_HASH) {
    return EvaluationFormLanguageCode::nl_NL;
  } else if (hashCode == en_AU_HASH) {
    return EvaluationFormLanguageCode::en_AU;
  } else if (hashCode == en_IN_HASH) {
    return EvaluationFormLanguageCode::en_IN;
  } else if (hashCode == en_IE_HASH) {
    return EvaluationFormLanguageCode::en_IE;
  } else if (hashCode == en_NZ_HASH) {
    return EvaluationFormLanguageCode::en_NZ;
  } else if (hashCode == en_AB_HASH) {
    return EvaluationFormLanguageCode::en_AB;
  } else if (hashCode == en_SG_HASH) {
    return EvaluationFormLanguageCode::en_SG;
  } else if (hashCode == en_ZA_HASH) {
    return EvaluationFormLanguageCode::en_ZA;
  } else if (hashCode == en_GB_HASH) {
    return EvaluationFormLanguageCode::en_GB;
  } else if (hashCode == en_WL_HASH) {
    return EvaluationFormLanguageCode::en_WL;
  } else if (hashCode == fa_IR_HASH) {
    return EvaluationFormLanguageCode::fa_IR;
  } else if (hashCode == fa_AF_HASH) {
    return EvaluationFormLanguageCode::fa_AF;
  } else if (hashCode == fi_FI_HASH) {
    return EvaluationFormLanguageCode::fi_FI;
  } else if (hashCode == fr_BE_HASH) {
    return EvaluationFormLanguageCode::fr_BE;
  } else if (hashCode == fr_CA_HASH) {
    return EvaluationFormLanguageCode::fr_CA;
  } else if (hashCode == ga_IE_HASH) {
    return EvaluationFormLanguageCode::ga_IE;
  } else if (hashCode == gl_ES_HASH) {
    return EvaluationFormLanguageCode::gl_ES;
  } else if (hashCode == ka_GE_HASH) {
    return EvaluationFormLanguageCode::ka_GE;
  } else if (hashCode == de_AT_HASH) {
    return EvaluationFormLanguageCode::de_AT;
  } else if (hashCode == de_CH_HASH) {
    return EvaluationFormLanguageCode::de_CH;
  } else if (hashCode == el_GR_HASH) {
    return EvaluationFormLanguageCode::el_GR;
  } else if (hashCode == gu_IN_HASH) {
    return EvaluationFormLanguageCode::gu_IN;
  } else if (hashCode == ht_HT_HASH) {
    return EvaluationFormLanguageCode::ht_HT;
  } else if (hashCode == he_IL_HASH) {
    return EvaluationFormLanguageCode::he_IL;
  } else if (hashCode == hi_IN_HASH) {
    return EvaluationFormLanguageCode::hi_IN;
  } else if (hashCode == hu_HU_HASH) {
    return EvaluationFormLanguageCode::hu_HU;
  } else if (hashCode == is_IS_HASH) {
    return EvaluationFormLanguageCode::is_IS;
  } else if (hashCode == id_ID_HASH) {
    return EvaluationFormLanguageCode::id_ID;
  } else if (hashCode == jv_ID_HASH) {
    return EvaluationFormLanguageCode::jv_ID;
  } else if (hashCode == km_KH_HASH) {
    return EvaluationFormLanguageCode::km_KH;
  } else if (hashCode == kn_IN_HASH) {
    return EvaluationFormLanguageCode::kn_IN;
  } else if (hashCode == kk_KZ_HASH) {
    return EvaluationFormLanguageCode::kk_KZ;
  } else if (hashCode == lo_LA_HASH) {
    return EvaluationFormLanguageCode::lo_LA;
  } else if (hashCode == lv_LV_HASH) {
    return EvaluationFormLanguageCode::lv_LV;
  } else if (hashCode == lt_LT_HASH) {
    return EvaluationFormLanguageCode::lt_LT;
  } else if (hashCode == mk_MK_HASH) {
    return EvaluationFormLanguageCode::mk_MK;
  } else if (hashCode == ml_IN_HASH) {
    return EvaluationFormLanguageCode::ml_IN;
  } else if (hashCode == mr_IN_HASH) {
    return EvaluationFormLanguageCode::mr_IN;
  } else if (hashCode == ne_NP_HASH) {
    return EvaluationFormLanguageCode::ne_NP;
  } else if (hashCode == no_NO_HASH) {
    return EvaluationFormLanguageCode::no_NO;
  } else if (hashCode == or_IN_HASH) {
    return EvaluationFormLanguageCode::or_IN;
  } else if (hashCode == ps_AF_HASH) {
    return EvaluationFormLanguageCode::ps_AF;
  } else if (hashCode == pl_PL_HASH) {
    return EvaluationFormLanguageCode::pl_PL;
  } else if (hashCode == pt_PT_HASH) {
    return EvaluationFormLanguageCode::pt_PT;
  } else if (hashCode == pa_IN_HASH) {
    return EvaluationFormLanguageCode::pa_IN;
  } else if (hashCode == ro_RO_HASH) {
    return EvaluationFormLanguageCode::ro_RO;
  } else if (hashCode == ru_RU_HASH) {
    return EvaluationFormLanguageCode::ru_RU;
  } else if (hashCode == sr_RS_HASH) {
    return EvaluationFormLanguageCode::sr_RS;
  } else if (hashCode == si_LK_HASH) {
    return EvaluationFormLanguageCode::si_LK;
  } else if (hashCode == sk_SK_HASH) {
    return EvaluationFormLanguageCode::sk_SK;
  } else if (hashCode == sl_SI_HASH) {
    return EvaluationFormLanguageCode::sl_SI;
  } else if (hashCode == es_MX_HASH) {
    return EvaluationFormLanguageCode::es_MX;
  } else if (hashCode == es_US_HASH) {
    return EvaluationFormLanguageCode::es_US;
  } else if (hashCode == su_ID_HASH) {
    return EvaluationFormLanguageCode::su_ID;
  } else if (hashCode == sw_BI_HASH) {
    return EvaluationFormLanguageCode::sw_BI;
  } else if (hashCode == sw_KE_HASH) {
    return EvaluationFormLanguageCode::sw_KE;
  } else if (hashCode == sw_RW_HASH) {
    return EvaluationFormLanguageCode::sw_RW;
  } else if (hashCode == sw_TZ_HASH) {
    return EvaluationFormLanguageCode::sw_TZ;
  } else if (hashCode == sw_UG_HASH) {
    return EvaluationFormLanguageCode::sw_UG;
  } else if (hashCode == sv_SE_HASH) {
    return EvaluationFormLanguageCode::sv_SE;
  } else if (hashCode == tl_PH_HASH) {
    return EvaluationFormLanguageCode::tl_PH;
  } else if (hashCode == ta_IN_HASH) {
    return EvaluationFormLanguageCode::ta_IN;
  } else if (hashCode == te_IN_HASH) {
    return EvaluationFormLanguageCode::te_IN;
  } else if (hashCode == th_TH_HASH) {
    return EvaluationFormLanguageCode::th_TH;
  } else if (hashCode == tr_TR_HASH) {
    return EvaluationFormLanguageCode::tr_TR;
  } else if (hashCode == uk_UA_HASH) {
    return EvaluationFormLanguageCode::uk_UA;
  } else if (hashCode == uz_UZ_HASH) {
    return EvaluationFormLanguageCode::uz_UZ;
  } else if (hashCode == vi_VN_HASH) {
    return EvaluationFormLanguageCode::vi_VN;
  } else if (hashCode == zu_ZA_HASH) {
    return EvaluationFormLanguageCode::zu_ZA;
  } else if (hashCode == my_MM_HASH) {
    return EvaluationFormLanguageCode::my_MM;
  } else if (hashCode == so_SO_HASH) {
    return EvaluationFormLanguageCode::so_SO;
  } else if (hashCode == yue_HK_HASH) {
    return EvaluationFormLanguageCode::yue_HK;
  } else if (hashCode == et_EE_HASH) {
    return EvaluationFormLanguageCode::et_EE;
  } else if (hashCode == hmn_HASH) {
    return EvaluationFormLanguageCode::hmn;
  } else if (hashCode == lg_UG_HASH) {
    return EvaluationFormLanguageCode::lg_UG;
  } else if (hashCode == cy_GB_HASH) {
    return EvaluationFormLanguageCode::cy_GB;
  } else if (hashCode == xh_ZA_HASH) {
    return EvaluationFormLanguageCode::xh_ZA;
  } else if (hashCode == bn_BD_HASH) {
    return EvaluationFormLanguageCode::bn_BD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormLanguageCode>(hashCode);
  }

  return EvaluationFormLanguageCode::NOT_SET;
}

Aws::String GetNameForEvaluationFormLanguageCode(EvaluationFormLanguageCode enumValue) {
  switch (enumValue) {
    case EvaluationFormLanguageCode::NOT_SET:
      return {};
    case EvaluationFormLanguageCode::de_DE:
      return "de-DE";
    case EvaluationFormLanguageCode::en_US:
      return "en-US";
    case EvaluationFormLanguageCode::es_ES:
      return "es-ES";
    case EvaluationFormLanguageCode::fr_FR:
      return "fr-FR";
    case EvaluationFormLanguageCode::it_IT:
      return "it-IT";
    case EvaluationFormLanguageCode::pt_BR:
      return "pt-BR";
    case EvaluationFormLanguageCode::ja_JP:
      return "ja-JP";
    case EvaluationFormLanguageCode::ko_KR:
      return "ko-KR";
    case EvaluationFormLanguageCode::zh_CN:
      return "zh-CN";
    case EvaluationFormLanguageCode::ms_MY:
      return "ms-MY";
    case EvaluationFormLanguageCode::af_ZA:
      return "af-ZA";
    case EvaluationFormLanguageCode::sq_AL:
      return "sq-AL";
    case EvaluationFormLanguageCode::am_ET:
      return "am-ET";
    case EvaluationFormLanguageCode::ar_AE:
      return "ar-AE";
    case EvaluationFormLanguageCode::ar_SA:
      return "ar-SA";
    case EvaluationFormLanguageCode::hy_AM:
      return "hy-AM";
    case EvaluationFormLanguageCode::eu_ES:
      return "eu-ES";
    case EvaluationFormLanguageCode::be_BY:
      return "be-BY";
    case EvaluationFormLanguageCode::bs_BA:
      return "bs-BA";
    case EvaluationFormLanguageCode::bg_BG:
      return "bg-BG";
    case EvaluationFormLanguageCode::ca_ES:
      return "ca-ES";
    case EvaluationFormLanguageCode::ckb_IR:
      return "ckb-IR";
    case EvaluationFormLanguageCode::ckb_IQ:
      return "ckb-IQ";
    case EvaluationFormLanguageCode::zh_TW:
      return "zh-TW";
    case EvaluationFormLanguageCode::hr_HR:
      return "hr-HR";
    case EvaluationFormLanguageCode::cs_CZ:
      return "cs-CZ";
    case EvaluationFormLanguageCode::da_DK:
      return "da-DK";
    case EvaluationFormLanguageCode::nl_BE:
      return "nl-BE";
    case EvaluationFormLanguageCode::nl_NL:
      return "nl-NL";
    case EvaluationFormLanguageCode::en_AU:
      return "en-AU";
    case EvaluationFormLanguageCode::en_IN:
      return "en-IN";
    case EvaluationFormLanguageCode::en_IE:
      return "en-IE";
    case EvaluationFormLanguageCode::en_NZ:
      return "en-NZ";
    case EvaluationFormLanguageCode::en_AB:
      return "en-AB";
    case EvaluationFormLanguageCode::en_SG:
      return "en-SG";
    case EvaluationFormLanguageCode::en_ZA:
      return "en-ZA";
    case EvaluationFormLanguageCode::en_GB:
      return "en-GB";
    case EvaluationFormLanguageCode::en_WL:
      return "en-WL";
    case EvaluationFormLanguageCode::fa_IR:
      return "fa-IR";
    case EvaluationFormLanguageCode::fa_AF:
      return "fa-AF";
    case EvaluationFormLanguageCode::fi_FI:
      return "fi-FI";
    case EvaluationFormLanguageCode::fr_BE:
      return "fr-BE";
    case EvaluationFormLanguageCode::fr_CA:
      return "fr-CA";
    case EvaluationFormLanguageCode::ga_IE:
      return "ga-IE";
    case EvaluationFormLanguageCode::gl_ES:
      return "gl-ES";
    case EvaluationFormLanguageCode::ka_GE:
      return "ka-GE";
    case EvaluationFormLanguageCode::de_AT:
      return "de-AT";
    case EvaluationFormLanguageCode::de_CH:
      return "de-CH";
    case EvaluationFormLanguageCode::el_GR:
      return "el-GR";
    case EvaluationFormLanguageCode::gu_IN:
      return "gu-IN";
    case EvaluationFormLanguageCode::ht_HT:
      return "ht-HT";
    case EvaluationFormLanguageCode::he_IL:
      return "he-IL";
    case EvaluationFormLanguageCode::hi_IN:
      return "hi-IN";
    case EvaluationFormLanguageCode::hu_HU:
      return "hu-HU";
    case EvaluationFormLanguageCode::is_IS:
      return "is-IS";
    case EvaluationFormLanguageCode::id_ID:
      return "id-ID";
    case EvaluationFormLanguageCode::jv_ID:
      return "jv-ID";
    case EvaluationFormLanguageCode::km_KH:
      return "km-KH";
    case EvaluationFormLanguageCode::kn_IN:
      return "kn-IN";
    case EvaluationFormLanguageCode::kk_KZ:
      return "kk-KZ";
    case EvaluationFormLanguageCode::lo_LA:
      return "lo-LA";
    case EvaluationFormLanguageCode::lv_LV:
      return "lv-LV";
    case EvaluationFormLanguageCode::lt_LT:
      return "lt-LT";
    case EvaluationFormLanguageCode::mk_MK:
      return "mk-MK";
    case EvaluationFormLanguageCode::ml_IN:
      return "ml-IN";
    case EvaluationFormLanguageCode::mr_IN:
      return "mr-IN";
    case EvaluationFormLanguageCode::ne_NP:
      return "ne-NP";
    case EvaluationFormLanguageCode::no_NO:
      return "no-NO";
    case EvaluationFormLanguageCode::or_IN:
      return "or-IN";
    case EvaluationFormLanguageCode::ps_AF:
      return "ps-AF";
    case EvaluationFormLanguageCode::pl_PL:
      return "pl-PL";
    case EvaluationFormLanguageCode::pt_PT:
      return "pt-PT";
    case EvaluationFormLanguageCode::pa_IN:
      return "pa-IN";
    case EvaluationFormLanguageCode::ro_RO:
      return "ro-RO";
    case EvaluationFormLanguageCode::ru_RU:
      return "ru-RU";
    case EvaluationFormLanguageCode::sr_RS:
      return "sr-RS";
    case EvaluationFormLanguageCode::si_LK:
      return "si-LK";
    case EvaluationFormLanguageCode::sk_SK:
      return "sk-SK";
    case EvaluationFormLanguageCode::sl_SI:
      return "sl-SI";
    case EvaluationFormLanguageCode::es_MX:
      return "es-MX";
    case EvaluationFormLanguageCode::es_US:
      return "es-US";
    case EvaluationFormLanguageCode::su_ID:
      return "su-ID";
    case EvaluationFormLanguageCode::sw_BI:
      return "sw-BI";
    case EvaluationFormLanguageCode::sw_KE:
      return "sw-KE";
    case EvaluationFormLanguageCode::sw_RW:
      return "sw-RW";
    case EvaluationFormLanguageCode::sw_TZ:
      return "sw-TZ";
    case EvaluationFormLanguageCode::sw_UG:
      return "sw-UG";
    case EvaluationFormLanguageCode::sv_SE:
      return "sv-SE";
    case EvaluationFormLanguageCode::tl_PH:
      return "tl-PH";
    case EvaluationFormLanguageCode::ta_IN:
      return "ta-IN";
    case EvaluationFormLanguageCode::te_IN:
      return "te-IN";
    case EvaluationFormLanguageCode::th_TH:
      return "th-TH";
    case EvaluationFormLanguageCode::tr_TR:
      return "tr-TR";
    case EvaluationFormLanguageCode::uk_UA:
      return "uk-UA";
    case EvaluationFormLanguageCode::uz_UZ:
      return "uz-UZ";
    case EvaluationFormLanguageCode::vi_VN:
      return "vi-VN";
    case EvaluationFormLanguageCode::zu_ZA:
      return "zu-ZA";
    case EvaluationFormLanguageCode::my_MM:
      return "my-MM";
    case EvaluationFormLanguageCode::so_SO:
      return "so-SO";
    case EvaluationFormLanguageCode::yue_HK:
      return "yue-HK";
    case EvaluationFormLanguageCode::et_EE:
      return "et-EE";
    case EvaluationFormLanguageCode::hmn:
      return "hmn";
    case EvaluationFormLanguageCode::lg_UG:
      return "lg-UG";
    case EvaluationFormLanguageCode::cy_GB:
      return "cy-GB";
    case EvaluationFormLanguageCode::xh_ZA:
      return "xh-ZA";
    case EvaluationFormLanguageCode::bn_BD:
      return "bn-BD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormLanguageCodeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
