/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberCountryCode.h>
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
      namespace PhoneNumberCountryCodeMapper
      {

        static constexpr uint32_t AF_HASH = ConstExprHashingUtils::HashString("AF");
        static constexpr uint32_t AL_HASH = ConstExprHashingUtils::HashString("AL");
        static constexpr uint32_t DZ_HASH = ConstExprHashingUtils::HashString("DZ");
        static constexpr uint32_t AS_HASH = ConstExprHashingUtils::HashString("AS");
        static constexpr uint32_t AD_HASH = ConstExprHashingUtils::HashString("AD");
        static constexpr uint32_t AO_HASH = ConstExprHashingUtils::HashString("AO");
        static constexpr uint32_t AI_HASH = ConstExprHashingUtils::HashString("AI");
        static constexpr uint32_t AQ_HASH = ConstExprHashingUtils::HashString("AQ");
        static constexpr uint32_t AG_HASH = ConstExprHashingUtils::HashString("AG");
        static constexpr uint32_t AR_HASH = ConstExprHashingUtils::HashString("AR");
        static constexpr uint32_t AM_HASH = ConstExprHashingUtils::HashString("AM");
        static constexpr uint32_t AW_HASH = ConstExprHashingUtils::HashString("AW");
        static constexpr uint32_t AU_HASH = ConstExprHashingUtils::HashString("AU");
        static constexpr uint32_t AT_HASH = ConstExprHashingUtils::HashString("AT");
        static constexpr uint32_t AZ_HASH = ConstExprHashingUtils::HashString("AZ");
        static constexpr uint32_t BS_HASH = ConstExprHashingUtils::HashString("BS");
        static constexpr uint32_t BH_HASH = ConstExprHashingUtils::HashString("BH");
        static constexpr uint32_t BD_HASH = ConstExprHashingUtils::HashString("BD");
        static constexpr uint32_t BB_HASH = ConstExprHashingUtils::HashString("BB");
        static constexpr uint32_t BY_HASH = ConstExprHashingUtils::HashString("BY");
        static constexpr uint32_t BE_HASH = ConstExprHashingUtils::HashString("BE");
        static constexpr uint32_t BZ_HASH = ConstExprHashingUtils::HashString("BZ");
        static constexpr uint32_t BJ_HASH = ConstExprHashingUtils::HashString("BJ");
        static constexpr uint32_t BM_HASH = ConstExprHashingUtils::HashString("BM");
        static constexpr uint32_t BT_HASH = ConstExprHashingUtils::HashString("BT");
        static constexpr uint32_t BO_HASH = ConstExprHashingUtils::HashString("BO");
        static constexpr uint32_t BA_HASH = ConstExprHashingUtils::HashString("BA");
        static constexpr uint32_t BW_HASH = ConstExprHashingUtils::HashString("BW");
        static constexpr uint32_t BR_HASH = ConstExprHashingUtils::HashString("BR");
        static constexpr uint32_t IO_HASH = ConstExprHashingUtils::HashString("IO");
        static constexpr uint32_t VG_HASH = ConstExprHashingUtils::HashString("VG");
        static constexpr uint32_t BN_HASH = ConstExprHashingUtils::HashString("BN");
        static constexpr uint32_t BG_HASH = ConstExprHashingUtils::HashString("BG");
        static constexpr uint32_t BF_HASH = ConstExprHashingUtils::HashString("BF");
        static constexpr uint32_t BI_HASH = ConstExprHashingUtils::HashString("BI");
        static constexpr uint32_t KH_HASH = ConstExprHashingUtils::HashString("KH");
        static constexpr uint32_t CM_HASH = ConstExprHashingUtils::HashString("CM");
        static constexpr uint32_t CA_HASH = ConstExprHashingUtils::HashString("CA");
        static constexpr uint32_t CV_HASH = ConstExprHashingUtils::HashString("CV");
        static constexpr uint32_t KY_HASH = ConstExprHashingUtils::HashString("KY");
        static constexpr uint32_t CF_HASH = ConstExprHashingUtils::HashString("CF");
        static constexpr uint32_t TD_HASH = ConstExprHashingUtils::HashString("TD");
        static constexpr uint32_t CL_HASH = ConstExprHashingUtils::HashString("CL");
        static constexpr uint32_t CN_HASH = ConstExprHashingUtils::HashString("CN");
        static constexpr uint32_t CX_HASH = ConstExprHashingUtils::HashString("CX");
        static constexpr uint32_t CC_HASH = ConstExprHashingUtils::HashString("CC");
        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t KM_HASH = ConstExprHashingUtils::HashString("KM");
        static constexpr uint32_t CK_HASH = ConstExprHashingUtils::HashString("CK");
        static constexpr uint32_t CR_HASH = ConstExprHashingUtils::HashString("CR");
        static constexpr uint32_t HR_HASH = ConstExprHashingUtils::HashString("HR");
        static constexpr uint32_t CU_HASH = ConstExprHashingUtils::HashString("CU");
        static constexpr uint32_t CW_HASH = ConstExprHashingUtils::HashString("CW");
        static constexpr uint32_t CY_HASH = ConstExprHashingUtils::HashString("CY");
        static constexpr uint32_t CZ_HASH = ConstExprHashingUtils::HashString("CZ");
        static constexpr uint32_t CD_HASH = ConstExprHashingUtils::HashString("CD");
        static constexpr uint32_t DK_HASH = ConstExprHashingUtils::HashString("DK");
        static constexpr uint32_t DJ_HASH = ConstExprHashingUtils::HashString("DJ");
        static constexpr uint32_t DM_HASH = ConstExprHashingUtils::HashString("DM");
        static constexpr uint32_t DO_HASH = ConstExprHashingUtils::HashString("DO");
        static constexpr uint32_t TL_HASH = ConstExprHashingUtils::HashString("TL");
        static constexpr uint32_t EC_HASH = ConstExprHashingUtils::HashString("EC");
        static constexpr uint32_t EG_HASH = ConstExprHashingUtils::HashString("EG");
        static constexpr uint32_t SV_HASH = ConstExprHashingUtils::HashString("SV");
        static constexpr uint32_t GQ_HASH = ConstExprHashingUtils::HashString("GQ");
        static constexpr uint32_t ER_HASH = ConstExprHashingUtils::HashString("ER");
        static constexpr uint32_t EE_HASH = ConstExprHashingUtils::HashString("EE");
        static constexpr uint32_t ET_HASH = ConstExprHashingUtils::HashString("ET");
        static constexpr uint32_t FK_HASH = ConstExprHashingUtils::HashString("FK");
        static constexpr uint32_t FO_HASH = ConstExprHashingUtils::HashString("FO");
        static constexpr uint32_t FJ_HASH = ConstExprHashingUtils::HashString("FJ");
        static constexpr uint32_t FI_HASH = ConstExprHashingUtils::HashString("FI");
        static constexpr uint32_t FR_HASH = ConstExprHashingUtils::HashString("FR");
        static constexpr uint32_t PF_HASH = ConstExprHashingUtils::HashString("PF");
        static constexpr uint32_t GA_HASH = ConstExprHashingUtils::HashString("GA");
        static constexpr uint32_t GM_HASH = ConstExprHashingUtils::HashString("GM");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t DE_HASH = ConstExprHashingUtils::HashString("DE");
        static constexpr uint32_t GH_HASH = ConstExprHashingUtils::HashString("GH");
        static constexpr uint32_t GI_HASH = ConstExprHashingUtils::HashString("GI");
        static constexpr uint32_t GR_HASH = ConstExprHashingUtils::HashString("GR");
        static constexpr uint32_t GL_HASH = ConstExprHashingUtils::HashString("GL");
        static constexpr uint32_t GD_HASH = ConstExprHashingUtils::HashString("GD");
        static constexpr uint32_t GU_HASH = ConstExprHashingUtils::HashString("GU");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GG_HASH = ConstExprHashingUtils::HashString("GG");
        static constexpr uint32_t GN_HASH = ConstExprHashingUtils::HashString("GN");
        static constexpr uint32_t GW_HASH = ConstExprHashingUtils::HashString("GW");
        static constexpr uint32_t GY_HASH = ConstExprHashingUtils::HashString("GY");
        static constexpr uint32_t HT_HASH = ConstExprHashingUtils::HashString("HT");
        static constexpr uint32_t HN_HASH = ConstExprHashingUtils::HashString("HN");
        static constexpr uint32_t HK_HASH = ConstExprHashingUtils::HashString("HK");
        static constexpr uint32_t HU_HASH = ConstExprHashingUtils::HashString("HU");
        static constexpr uint32_t IS_HASH = ConstExprHashingUtils::HashString("IS");
        static constexpr uint32_t IN_HASH = ConstExprHashingUtils::HashString("IN");
        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t IR_HASH = ConstExprHashingUtils::HashString("IR");
        static constexpr uint32_t IQ_HASH = ConstExprHashingUtils::HashString("IQ");
        static constexpr uint32_t IE_HASH = ConstExprHashingUtils::HashString("IE");
        static constexpr uint32_t IM_HASH = ConstExprHashingUtils::HashString("IM");
        static constexpr uint32_t IL_HASH = ConstExprHashingUtils::HashString("IL");
        static constexpr uint32_t IT_HASH = ConstExprHashingUtils::HashString("IT");
        static constexpr uint32_t CI_HASH = ConstExprHashingUtils::HashString("CI");
        static constexpr uint32_t JM_HASH = ConstExprHashingUtils::HashString("JM");
        static constexpr uint32_t JP_HASH = ConstExprHashingUtils::HashString("JP");
        static constexpr uint32_t JE_HASH = ConstExprHashingUtils::HashString("JE");
        static constexpr uint32_t JO_HASH = ConstExprHashingUtils::HashString("JO");
        static constexpr uint32_t KZ_HASH = ConstExprHashingUtils::HashString("KZ");
        static constexpr uint32_t KE_HASH = ConstExprHashingUtils::HashString("KE");
        static constexpr uint32_t KI_HASH = ConstExprHashingUtils::HashString("KI");
        static constexpr uint32_t KW_HASH = ConstExprHashingUtils::HashString("KW");
        static constexpr uint32_t KG_HASH = ConstExprHashingUtils::HashString("KG");
        static constexpr uint32_t LA_HASH = ConstExprHashingUtils::HashString("LA");
        static constexpr uint32_t LV_HASH = ConstExprHashingUtils::HashString("LV");
        static constexpr uint32_t LB_HASH = ConstExprHashingUtils::HashString("LB");
        static constexpr uint32_t LS_HASH = ConstExprHashingUtils::HashString("LS");
        static constexpr uint32_t LR_HASH = ConstExprHashingUtils::HashString("LR");
        static constexpr uint32_t LY_HASH = ConstExprHashingUtils::HashString("LY");
        static constexpr uint32_t LI_HASH = ConstExprHashingUtils::HashString("LI");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LU_HASH = ConstExprHashingUtils::HashString("LU");
        static constexpr uint32_t MO_HASH = ConstExprHashingUtils::HashString("MO");
        static constexpr uint32_t MK_HASH = ConstExprHashingUtils::HashString("MK");
        static constexpr uint32_t MG_HASH = ConstExprHashingUtils::HashString("MG");
        static constexpr uint32_t MW_HASH = ConstExprHashingUtils::HashString("MW");
        static constexpr uint32_t MY_HASH = ConstExprHashingUtils::HashString("MY");
        static constexpr uint32_t MV_HASH = ConstExprHashingUtils::HashString("MV");
        static constexpr uint32_t ML_HASH = ConstExprHashingUtils::HashString("ML");
        static constexpr uint32_t MT_HASH = ConstExprHashingUtils::HashString("MT");
        static constexpr uint32_t MH_HASH = ConstExprHashingUtils::HashString("MH");
        static constexpr uint32_t MR_HASH = ConstExprHashingUtils::HashString("MR");
        static constexpr uint32_t MU_HASH = ConstExprHashingUtils::HashString("MU");
        static constexpr uint32_t YT_HASH = ConstExprHashingUtils::HashString("YT");
        static constexpr uint32_t MX_HASH = ConstExprHashingUtils::HashString("MX");
        static constexpr uint32_t FM_HASH = ConstExprHashingUtils::HashString("FM");
        static constexpr uint32_t MD_HASH = ConstExprHashingUtils::HashString("MD");
        static constexpr uint32_t MC_HASH = ConstExprHashingUtils::HashString("MC");
        static constexpr uint32_t MN_HASH = ConstExprHashingUtils::HashString("MN");
        static constexpr uint32_t ME_HASH = ConstExprHashingUtils::HashString("ME");
        static constexpr uint32_t MS_HASH = ConstExprHashingUtils::HashString("MS");
        static constexpr uint32_t MA_HASH = ConstExprHashingUtils::HashString("MA");
        static constexpr uint32_t MZ_HASH = ConstExprHashingUtils::HashString("MZ");
        static constexpr uint32_t MM_HASH = ConstExprHashingUtils::HashString("MM");
        static constexpr uint32_t NA_HASH = ConstExprHashingUtils::HashString("NA");
        static constexpr uint32_t NR_HASH = ConstExprHashingUtils::HashString("NR");
        static constexpr uint32_t NP_HASH = ConstExprHashingUtils::HashString("NP");
        static constexpr uint32_t NL_HASH = ConstExprHashingUtils::HashString("NL");
        static constexpr uint32_t AN_HASH = ConstExprHashingUtils::HashString("AN");
        static constexpr uint32_t NC_HASH = ConstExprHashingUtils::HashString("NC");
        static constexpr uint32_t NZ_HASH = ConstExprHashingUtils::HashString("NZ");
        static constexpr uint32_t NI_HASH = ConstExprHashingUtils::HashString("NI");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t NG_HASH = ConstExprHashingUtils::HashString("NG");
        static constexpr uint32_t NU_HASH = ConstExprHashingUtils::HashString("NU");
        static constexpr uint32_t KP_HASH = ConstExprHashingUtils::HashString("KP");
        static constexpr uint32_t MP_HASH = ConstExprHashingUtils::HashString("MP");
        static constexpr uint32_t NO_HASH = ConstExprHashingUtils::HashString("NO");
        static constexpr uint32_t OM_HASH = ConstExprHashingUtils::HashString("OM");
        static constexpr uint32_t PK_HASH = ConstExprHashingUtils::HashString("PK");
        static constexpr uint32_t PW_HASH = ConstExprHashingUtils::HashString("PW");
        static constexpr uint32_t PA_HASH = ConstExprHashingUtils::HashString("PA");
        static constexpr uint32_t PG_HASH = ConstExprHashingUtils::HashString("PG");
        static constexpr uint32_t PY_HASH = ConstExprHashingUtils::HashString("PY");
        static constexpr uint32_t PE_HASH = ConstExprHashingUtils::HashString("PE");
        static constexpr uint32_t PH_HASH = ConstExprHashingUtils::HashString("PH");
        static constexpr uint32_t PN_HASH = ConstExprHashingUtils::HashString("PN");
        static constexpr uint32_t PL_HASH = ConstExprHashingUtils::HashString("PL");
        static constexpr uint32_t PT_HASH = ConstExprHashingUtils::HashString("PT");
        static constexpr uint32_t PR_HASH = ConstExprHashingUtils::HashString("PR");
        static constexpr uint32_t QA_HASH = ConstExprHashingUtils::HashString("QA");
        static constexpr uint32_t CG_HASH = ConstExprHashingUtils::HashString("CG");
        static constexpr uint32_t RE_HASH = ConstExprHashingUtils::HashString("RE");
        static constexpr uint32_t RO_HASH = ConstExprHashingUtils::HashString("RO");
        static constexpr uint32_t RU_HASH = ConstExprHashingUtils::HashString("RU");
        static constexpr uint32_t RW_HASH = ConstExprHashingUtils::HashString("RW");
        static constexpr uint32_t BL_HASH = ConstExprHashingUtils::HashString("BL");
        static constexpr uint32_t SH_HASH = ConstExprHashingUtils::HashString("SH");
        static constexpr uint32_t KN_HASH = ConstExprHashingUtils::HashString("KN");
        static constexpr uint32_t LC_HASH = ConstExprHashingUtils::HashString("LC");
        static constexpr uint32_t MF_HASH = ConstExprHashingUtils::HashString("MF");
        static constexpr uint32_t PM_HASH = ConstExprHashingUtils::HashString("PM");
        static constexpr uint32_t VC_HASH = ConstExprHashingUtils::HashString("VC");
        static constexpr uint32_t WS_HASH = ConstExprHashingUtils::HashString("WS");
        static constexpr uint32_t SM_HASH = ConstExprHashingUtils::HashString("SM");
        static constexpr uint32_t ST_HASH = ConstExprHashingUtils::HashString("ST");
        static constexpr uint32_t SA_HASH = ConstExprHashingUtils::HashString("SA");
        static constexpr uint32_t SN_HASH = ConstExprHashingUtils::HashString("SN");
        static constexpr uint32_t RS_HASH = ConstExprHashingUtils::HashString("RS");
        static constexpr uint32_t SC_HASH = ConstExprHashingUtils::HashString("SC");
        static constexpr uint32_t SL_HASH = ConstExprHashingUtils::HashString("SL");
        static constexpr uint32_t SG_HASH = ConstExprHashingUtils::HashString("SG");
        static constexpr uint32_t SX_HASH = ConstExprHashingUtils::HashString("SX");
        static constexpr uint32_t SK_HASH = ConstExprHashingUtils::HashString("SK");
        static constexpr uint32_t SI_HASH = ConstExprHashingUtils::HashString("SI");
        static constexpr uint32_t SB_HASH = ConstExprHashingUtils::HashString("SB");
        static constexpr uint32_t SO_HASH = ConstExprHashingUtils::HashString("SO");
        static constexpr uint32_t ZA_HASH = ConstExprHashingUtils::HashString("ZA");
        static constexpr uint32_t KR_HASH = ConstExprHashingUtils::HashString("KR");
        static constexpr uint32_t ES_HASH = ConstExprHashingUtils::HashString("ES");
        static constexpr uint32_t LK_HASH = ConstExprHashingUtils::HashString("LK");
        static constexpr uint32_t SD_HASH = ConstExprHashingUtils::HashString("SD");
        static constexpr uint32_t SR_HASH = ConstExprHashingUtils::HashString("SR");
        static constexpr uint32_t SJ_HASH = ConstExprHashingUtils::HashString("SJ");
        static constexpr uint32_t SZ_HASH = ConstExprHashingUtils::HashString("SZ");
        static constexpr uint32_t SE_HASH = ConstExprHashingUtils::HashString("SE");
        static constexpr uint32_t CH_HASH = ConstExprHashingUtils::HashString("CH");
        static constexpr uint32_t SY_HASH = ConstExprHashingUtils::HashString("SY");
        static constexpr uint32_t TW_HASH = ConstExprHashingUtils::HashString("TW");
        static constexpr uint32_t TJ_HASH = ConstExprHashingUtils::HashString("TJ");
        static constexpr uint32_t TZ_HASH = ConstExprHashingUtils::HashString("TZ");
        static constexpr uint32_t TH_HASH = ConstExprHashingUtils::HashString("TH");
        static constexpr uint32_t TG_HASH = ConstExprHashingUtils::HashString("TG");
        static constexpr uint32_t TK_HASH = ConstExprHashingUtils::HashString("TK");
        static constexpr uint32_t TO_HASH = ConstExprHashingUtils::HashString("TO");
        static constexpr uint32_t TT_HASH = ConstExprHashingUtils::HashString("TT");
        static constexpr uint32_t TN_HASH = ConstExprHashingUtils::HashString("TN");
        static constexpr uint32_t TR_HASH = ConstExprHashingUtils::HashString("TR");
        static constexpr uint32_t TM_HASH = ConstExprHashingUtils::HashString("TM");
        static constexpr uint32_t TC_HASH = ConstExprHashingUtils::HashString("TC");
        static constexpr uint32_t TV_HASH = ConstExprHashingUtils::HashString("TV");
        static constexpr uint32_t VI_HASH = ConstExprHashingUtils::HashString("VI");
        static constexpr uint32_t UG_HASH = ConstExprHashingUtils::HashString("UG");
        static constexpr uint32_t UA_HASH = ConstExprHashingUtils::HashString("UA");
        static constexpr uint32_t AE_HASH = ConstExprHashingUtils::HashString("AE");
        static constexpr uint32_t GB_HASH = ConstExprHashingUtils::HashString("GB");
        static constexpr uint32_t US_HASH = ConstExprHashingUtils::HashString("US");
        static constexpr uint32_t UY_HASH = ConstExprHashingUtils::HashString("UY");
        static constexpr uint32_t UZ_HASH = ConstExprHashingUtils::HashString("UZ");
        static constexpr uint32_t VU_HASH = ConstExprHashingUtils::HashString("VU");
        static constexpr uint32_t VA_HASH = ConstExprHashingUtils::HashString("VA");
        static constexpr uint32_t VE_HASH = ConstExprHashingUtils::HashString("VE");
        static constexpr uint32_t VN_HASH = ConstExprHashingUtils::HashString("VN");
        static constexpr uint32_t WF_HASH = ConstExprHashingUtils::HashString("WF");
        static constexpr uint32_t EH_HASH = ConstExprHashingUtils::HashString("EH");
        static constexpr uint32_t YE_HASH = ConstExprHashingUtils::HashString("YE");
        static constexpr uint32_t ZM_HASH = ConstExprHashingUtils::HashString("ZM");
        static constexpr uint32_t ZW_HASH = ConstExprHashingUtils::HashString("ZW");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(uint32_t hashCode, PhoneNumberCountryCode& enumValue)
        {
          if (hashCode == AF_HASH)
          {
            enumValue = PhoneNumberCountryCode::AF;
            return true;
          }
          else if (hashCode == AL_HASH)
          {
            enumValue = PhoneNumberCountryCode::AL;
            return true;
          }
          else if (hashCode == DZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::DZ;
            return true;
          }
          else if (hashCode == AS_HASH)
          {
            enumValue = PhoneNumberCountryCode::AS;
            return true;
          }
          else if (hashCode == AD_HASH)
          {
            enumValue = PhoneNumberCountryCode::AD;
            return true;
          }
          else if (hashCode == AO_HASH)
          {
            enumValue = PhoneNumberCountryCode::AO;
            return true;
          }
          else if (hashCode == AI_HASH)
          {
            enumValue = PhoneNumberCountryCode::AI;
            return true;
          }
          else if (hashCode == AQ_HASH)
          {
            enumValue = PhoneNumberCountryCode::AQ;
            return true;
          }
          else if (hashCode == AG_HASH)
          {
            enumValue = PhoneNumberCountryCode::AG;
            return true;
          }
          else if (hashCode == AR_HASH)
          {
            enumValue = PhoneNumberCountryCode::AR;
            return true;
          }
          else if (hashCode == AM_HASH)
          {
            enumValue = PhoneNumberCountryCode::AM;
            return true;
          }
          else if (hashCode == AW_HASH)
          {
            enumValue = PhoneNumberCountryCode::AW;
            return true;
          }
          else if (hashCode == AU_HASH)
          {
            enumValue = PhoneNumberCountryCode::AU;
            return true;
          }
          else if (hashCode == AT_HASH)
          {
            enumValue = PhoneNumberCountryCode::AT;
            return true;
          }
          else if (hashCode == AZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::AZ;
            return true;
          }
          else if (hashCode == BS_HASH)
          {
            enumValue = PhoneNumberCountryCode::BS;
            return true;
          }
          else if (hashCode == BH_HASH)
          {
            enumValue = PhoneNumberCountryCode::BH;
            return true;
          }
          else if (hashCode == BD_HASH)
          {
            enumValue = PhoneNumberCountryCode::BD;
            return true;
          }
          else if (hashCode == BB_HASH)
          {
            enumValue = PhoneNumberCountryCode::BB;
            return true;
          }
          else if (hashCode == BY_HASH)
          {
            enumValue = PhoneNumberCountryCode::BY;
            return true;
          }
          else if (hashCode == BE_HASH)
          {
            enumValue = PhoneNumberCountryCode::BE;
            return true;
          }
          else if (hashCode == BZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::BZ;
            return true;
          }
          else if (hashCode == BJ_HASH)
          {
            enumValue = PhoneNumberCountryCode::BJ;
            return true;
          }
          else if (hashCode == BM_HASH)
          {
            enumValue = PhoneNumberCountryCode::BM;
            return true;
          }
          else if (hashCode == BT_HASH)
          {
            enumValue = PhoneNumberCountryCode::BT;
            return true;
          }
          else if (hashCode == BO_HASH)
          {
            enumValue = PhoneNumberCountryCode::BO;
            return true;
          }
          else if (hashCode == BA_HASH)
          {
            enumValue = PhoneNumberCountryCode::BA;
            return true;
          }
          else if (hashCode == BW_HASH)
          {
            enumValue = PhoneNumberCountryCode::BW;
            return true;
          }
          else if (hashCode == BR_HASH)
          {
            enumValue = PhoneNumberCountryCode::BR;
            return true;
          }
          else if (hashCode == IO_HASH)
          {
            enumValue = PhoneNumberCountryCode::IO;
            return true;
          }
          else if (hashCode == VG_HASH)
          {
            enumValue = PhoneNumberCountryCode::VG;
            return true;
          }
          else if (hashCode == BN_HASH)
          {
            enumValue = PhoneNumberCountryCode::BN;
            return true;
          }
          else if (hashCode == BG_HASH)
          {
            enumValue = PhoneNumberCountryCode::BG;
            return true;
          }
          else if (hashCode == BF_HASH)
          {
            enumValue = PhoneNumberCountryCode::BF;
            return true;
          }
          else if (hashCode == BI_HASH)
          {
            enumValue = PhoneNumberCountryCode::BI;
            return true;
          }
          else if (hashCode == KH_HASH)
          {
            enumValue = PhoneNumberCountryCode::KH;
            return true;
          }
          else if (hashCode == CM_HASH)
          {
            enumValue = PhoneNumberCountryCode::CM;
            return true;
          }
          else if (hashCode == CA_HASH)
          {
            enumValue = PhoneNumberCountryCode::CA;
            return true;
          }
          else if (hashCode == CV_HASH)
          {
            enumValue = PhoneNumberCountryCode::CV;
            return true;
          }
          else if (hashCode == KY_HASH)
          {
            enumValue = PhoneNumberCountryCode::KY;
            return true;
          }
          else if (hashCode == CF_HASH)
          {
            enumValue = PhoneNumberCountryCode::CF;
            return true;
          }
          else if (hashCode == TD_HASH)
          {
            enumValue = PhoneNumberCountryCode::TD;
            return true;
          }
          else if (hashCode == CL_HASH)
          {
            enumValue = PhoneNumberCountryCode::CL;
            return true;
          }
          else if (hashCode == CN_HASH)
          {
            enumValue = PhoneNumberCountryCode::CN;
            return true;
          }
          else if (hashCode == CX_HASH)
          {
            enumValue = PhoneNumberCountryCode::CX;
            return true;
          }
          else if (hashCode == CC_HASH)
          {
            enumValue = PhoneNumberCountryCode::CC;
            return true;
          }
          else if (hashCode == CO_HASH)
          {
            enumValue = PhoneNumberCountryCode::CO;
            return true;
          }
          else if (hashCode == KM_HASH)
          {
            enumValue = PhoneNumberCountryCode::KM;
            return true;
          }
          else if (hashCode == CK_HASH)
          {
            enumValue = PhoneNumberCountryCode::CK;
            return true;
          }
          else if (hashCode == CR_HASH)
          {
            enumValue = PhoneNumberCountryCode::CR;
            return true;
          }
          else if (hashCode == HR_HASH)
          {
            enumValue = PhoneNumberCountryCode::HR;
            return true;
          }
          else if (hashCode == CU_HASH)
          {
            enumValue = PhoneNumberCountryCode::CU;
            return true;
          }
          else if (hashCode == CW_HASH)
          {
            enumValue = PhoneNumberCountryCode::CW;
            return true;
          }
          else if (hashCode == CY_HASH)
          {
            enumValue = PhoneNumberCountryCode::CY;
            return true;
          }
          else if (hashCode == CZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::CZ;
            return true;
          }
          else if (hashCode == CD_HASH)
          {
            enumValue = PhoneNumberCountryCode::CD;
            return true;
          }
          else if (hashCode == DK_HASH)
          {
            enumValue = PhoneNumberCountryCode::DK;
            return true;
          }
          else if (hashCode == DJ_HASH)
          {
            enumValue = PhoneNumberCountryCode::DJ;
            return true;
          }
          else if (hashCode == DM_HASH)
          {
            enumValue = PhoneNumberCountryCode::DM;
            return true;
          }
          else if (hashCode == DO_HASH)
          {
            enumValue = PhoneNumberCountryCode::DO;
            return true;
          }
          else if (hashCode == TL_HASH)
          {
            enumValue = PhoneNumberCountryCode::TL;
            return true;
          }
          else if (hashCode == EC_HASH)
          {
            enumValue = PhoneNumberCountryCode::EC;
            return true;
          }
          else if (hashCode == EG_HASH)
          {
            enumValue = PhoneNumberCountryCode::EG;
            return true;
          }
          else if (hashCode == SV_HASH)
          {
            enumValue = PhoneNumberCountryCode::SV;
            return true;
          }
          else if (hashCode == GQ_HASH)
          {
            enumValue = PhoneNumberCountryCode::GQ;
            return true;
          }
          else if (hashCode == ER_HASH)
          {
            enumValue = PhoneNumberCountryCode::ER;
            return true;
          }
          else if (hashCode == EE_HASH)
          {
            enumValue = PhoneNumberCountryCode::EE;
            return true;
          }
          else if (hashCode == ET_HASH)
          {
            enumValue = PhoneNumberCountryCode::ET;
            return true;
          }
          else if (hashCode == FK_HASH)
          {
            enumValue = PhoneNumberCountryCode::FK;
            return true;
          }
          else if (hashCode == FO_HASH)
          {
            enumValue = PhoneNumberCountryCode::FO;
            return true;
          }
          else if (hashCode == FJ_HASH)
          {
            enumValue = PhoneNumberCountryCode::FJ;
            return true;
          }
          else if (hashCode == FI_HASH)
          {
            enumValue = PhoneNumberCountryCode::FI;
            return true;
          }
          else if (hashCode == FR_HASH)
          {
            enumValue = PhoneNumberCountryCode::FR;
            return true;
          }
          else if (hashCode == PF_HASH)
          {
            enumValue = PhoneNumberCountryCode::PF;
            return true;
          }
          else if (hashCode == GA_HASH)
          {
            enumValue = PhoneNumberCountryCode::GA;
            return true;
          }
          else if (hashCode == GM_HASH)
          {
            enumValue = PhoneNumberCountryCode::GM;
            return true;
          }
          else if (hashCode == GE_HASH)
          {
            enumValue = PhoneNumberCountryCode::GE;
            return true;
          }
          else if (hashCode == DE_HASH)
          {
            enumValue = PhoneNumberCountryCode::DE;
            return true;
          }
          else if (hashCode == GH_HASH)
          {
            enumValue = PhoneNumberCountryCode::GH;
            return true;
          }
          else if (hashCode == GI_HASH)
          {
            enumValue = PhoneNumberCountryCode::GI;
            return true;
          }
          else if (hashCode == GR_HASH)
          {
            enumValue = PhoneNumberCountryCode::GR;
            return true;
          }
          else if (hashCode == GL_HASH)
          {
            enumValue = PhoneNumberCountryCode::GL;
            return true;
          }
          else if (hashCode == GD_HASH)
          {
            enumValue = PhoneNumberCountryCode::GD;
            return true;
          }
          else if (hashCode == GU_HASH)
          {
            enumValue = PhoneNumberCountryCode::GU;
            return true;
          }
          else if (hashCode == GT_HASH)
          {
            enumValue = PhoneNumberCountryCode::GT;
            return true;
          }
          else if (hashCode == GG_HASH)
          {
            enumValue = PhoneNumberCountryCode::GG;
            return true;
          }
          else if (hashCode == GN_HASH)
          {
            enumValue = PhoneNumberCountryCode::GN;
            return true;
          }
          else if (hashCode == GW_HASH)
          {
            enumValue = PhoneNumberCountryCode::GW;
            return true;
          }
          else if (hashCode == GY_HASH)
          {
            enumValue = PhoneNumberCountryCode::GY;
            return true;
          }
          else if (hashCode == HT_HASH)
          {
            enumValue = PhoneNumberCountryCode::HT;
            return true;
          }
          else if (hashCode == HN_HASH)
          {
            enumValue = PhoneNumberCountryCode::HN;
            return true;
          }
          else if (hashCode == HK_HASH)
          {
            enumValue = PhoneNumberCountryCode::HK;
            return true;
          }
          else if (hashCode == HU_HASH)
          {
            enumValue = PhoneNumberCountryCode::HU;
            return true;
          }
          else if (hashCode == IS_HASH)
          {
            enumValue = PhoneNumberCountryCode::IS;
            return true;
          }
          else if (hashCode == IN_HASH)
          {
            enumValue = PhoneNumberCountryCode::IN;
            return true;
          }
          else if (hashCode == ID_HASH)
          {
            enumValue = PhoneNumberCountryCode::ID;
            return true;
          }
          else if (hashCode == IR_HASH)
          {
            enumValue = PhoneNumberCountryCode::IR;
            return true;
          }
          else if (hashCode == IQ_HASH)
          {
            enumValue = PhoneNumberCountryCode::IQ;
            return true;
          }
          else if (hashCode == IE_HASH)
          {
            enumValue = PhoneNumberCountryCode::IE;
            return true;
          }
          else if (hashCode == IM_HASH)
          {
            enumValue = PhoneNumberCountryCode::IM;
            return true;
          }
          else if (hashCode == IL_HASH)
          {
            enumValue = PhoneNumberCountryCode::IL;
            return true;
          }
          else if (hashCode == IT_HASH)
          {
            enumValue = PhoneNumberCountryCode::IT;
            return true;
          }
          else if (hashCode == CI_HASH)
          {
            enumValue = PhoneNumberCountryCode::CI;
            return true;
          }
          else if (hashCode == JM_HASH)
          {
            enumValue = PhoneNumberCountryCode::JM;
            return true;
          }
          else if (hashCode == JP_HASH)
          {
            enumValue = PhoneNumberCountryCode::JP;
            return true;
          }
          else if (hashCode == JE_HASH)
          {
            enumValue = PhoneNumberCountryCode::JE;
            return true;
          }
          else if (hashCode == JO_HASH)
          {
            enumValue = PhoneNumberCountryCode::JO;
            return true;
          }
          else if (hashCode == KZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::KZ;
            return true;
          }
          else if (hashCode == KE_HASH)
          {
            enumValue = PhoneNumberCountryCode::KE;
            return true;
          }
          else if (hashCode == KI_HASH)
          {
            enumValue = PhoneNumberCountryCode::KI;
            return true;
          }
          else if (hashCode == KW_HASH)
          {
            enumValue = PhoneNumberCountryCode::KW;
            return true;
          }
          else if (hashCode == KG_HASH)
          {
            enumValue = PhoneNumberCountryCode::KG;
            return true;
          }
          else if (hashCode == LA_HASH)
          {
            enumValue = PhoneNumberCountryCode::LA;
            return true;
          }
          else if (hashCode == LV_HASH)
          {
            enumValue = PhoneNumberCountryCode::LV;
            return true;
          }
          else if (hashCode == LB_HASH)
          {
            enumValue = PhoneNumberCountryCode::LB;
            return true;
          }
          else if (hashCode == LS_HASH)
          {
            enumValue = PhoneNumberCountryCode::LS;
            return true;
          }
          else if (hashCode == LR_HASH)
          {
            enumValue = PhoneNumberCountryCode::LR;
            return true;
          }
          else if (hashCode == LY_HASH)
          {
            enumValue = PhoneNumberCountryCode::LY;
            return true;
          }
          else if (hashCode == LI_HASH)
          {
            enumValue = PhoneNumberCountryCode::LI;
            return true;
          }
          else if (hashCode == LT_HASH)
          {
            enumValue = PhoneNumberCountryCode::LT;
            return true;
          }
          else if (hashCode == LU_HASH)
          {
            enumValue = PhoneNumberCountryCode::LU;
            return true;
          }
          else if (hashCode == MO_HASH)
          {
            enumValue = PhoneNumberCountryCode::MO;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(uint32_t hashCode, PhoneNumberCountryCode& enumValue)
        {
          if (hashCode == MK_HASH)
          {
            enumValue = PhoneNumberCountryCode::MK;
            return true;
          }
          else if (hashCode == MG_HASH)
          {
            enumValue = PhoneNumberCountryCode::MG;
            return true;
          }
          else if (hashCode == MW_HASH)
          {
            enumValue = PhoneNumberCountryCode::MW;
            return true;
          }
          else if (hashCode == MY_HASH)
          {
            enumValue = PhoneNumberCountryCode::MY;
            return true;
          }
          else if (hashCode == MV_HASH)
          {
            enumValue = PhoneNumberCountryCode::MV;
            return true;
          }
          else if (hashCode == ML_HASH)
          {
            enumValue = PhoneNumberCountryCode::ML;
            return true;
          }
          else if (hashCode == MT_HASH)
          {
            enumValue = PhoneNumberCountryCode::MT;
            return true;
          }
          else if (hashCode == MH_HASH)
          {
            enumValue = PhoneNumberCountryCode::MH;
            return true;
          }
          else if (hashCode == MR_HASH)
          {
            enumValue = PhoneNumberCountryCode::MR;
            return true;
          }
          else if (hashCode == MU_HASH)
          {
            enumValue = PhoneNumberCountryCode::MU;
            return true;
          }
          else if (hashCode == YT_HASH)
          {
            enumValue = PhoneNumberCountryCode::YT;
            return true;
          }
          else if (hashCode == MX_HASH)
          {
            enumValue = PhoneNumberCountryCode::MX;
            return true;
          }
          else if (hashCode == FM_HASH)
          {
            enumValue = PhoneNumberCountryCode::FM;
            return true;
          }
          else if (hashCode == MD_HASH)
          {
            enumValue = PhoneNumberCountryCode::MD;
            return true;
          }
          else if (hashCode == MC_HASH)
          {
            enumValue = PhoneNumberCountryCode::MC;
            return true;
          }
          else if (hashCode == MN_HASH)
          {
            enumValue = PhoneNumberCountryCode::MN;
            return true;
          }
          else if (hashCode == ME_HASH)
          {
            enumValue = PhoneNumberCountryCode::ME;
            return true;
          }
          else if (hashCode == MS_HASH)
          {
            enumValue = PhoneNumberCountryCode::MS;
            return true;
          }
          else if (hashCode == MA_HASH)
          {
            enumValue = PhoneNumberCountryCode::MA;
            return true;
          }
          else if (hashCode == MZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::MZ;
            return true;
          }
          else if (hashCode == MM_HASH)
          {
            enumValue = PhoneNumberCountryCode::MM;
            return true;
          }
          else if (hashCode == NA_HASH)
          {
            enumValue = PhoneNumberCountryCode::NA;
            return true;
          }
          else if (hashCode == NR_HASH)
          {
            enumValue = PhoneNumberCountryCode::NR;
            return true;
          }
          else if (hashCode == NP_HASH)
          {
            enumValue = PhoneNumberCountryCode::NP;
            return true;
          }
          else if (hashCode == NL_HASH)
          {
            enumValue = PhoneNumberCountryCode::NL;
            return true;
          }
          else if (hashCode == AN_HASH)
          {
            enumValue = PhoneNumberCountryCode::AN;
            return true;
          }
          else if (hashCode == NC_HASH)
          {
            enumValue = PhoneNumberCountryCode::NC;
            return true;
          }
          else if (hashCode == NZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::NZ;
            return true;
          }
          else if (hashCode == NI_HASH)
          {
            enumValue = PhoneNumberCountryCode::NI;
            return true;
          }
          else if (hashCode == NE_HASH)
          {
            enumValue = PhoneNumberCountryCode::NE;
            return true;
          }
          else if (hashCode == NG_HASH)
          {
            enumValue = PhoneNumberCountryCode::NG;
            return true;
          }
          else if (hashCode == NU_HASH)
          {
            enumValue = PhoneNumberCountryCode::NU;
            return true;
          }
          else if (hashCode == KP_HASH)
          {
            enumValue = PhoneNumberCountryCode::KP;
            return true;
          }
          else if (hashCode == MP_HASH)
          {
            enumValue = PhoneNumberCountryCode::MP;
            return true;
          }
          else if (hashCode == NO_HASH)
          {
            enumValue = PhoneNumberCountryCode::NO;
            return true;
          }
          else if (hashCode == OM_HASH)
          {
            enumValue = PhoneNumberCountryCode::OM;
            return true;
          }
          else if (hashCode == PK_HASH)
          {
            enumValue = PhoneNumberCountryCode::PK;
            return true;
          }
          else if (hashCode == PW_HASH)
          {
            enumValue = PhoneNumberCountryCode::PW;
            return true;
          }
          else if (hashCode == PA_HASH)
          {
            enumValue = PhoneNumberCountryCode::PA;
            return true;
          }
          else if (hashCode == PG_HASH)
          {
            enumValue = PhoneNumberCountryCode::PG;
            return true;
          }
          else if (hashCode == PY_HASH)
          {
            enumValue = PhoneNumberCountryCode::PY;
            return true;
          }
          else if (hashCode == PE_HASH)
          {
            enumValue = PhoneNumberCountryCode::PE;
            return true;
          }
          else if (hashCode == PH_HASH)
          {
            enumValue = PhoneNumberCountryCode::PH;
            return true;
          }
          else if (hashCode == PN_HASH)
          {
            enumValue = PhoneNumberCountryCode::PN;
            return true;
          }
          else if (hashCode == PL_HASH)
          {
            enumValue = PhoneNumberCountryCode::PL;
            return true;
          }
          else if (hashCode == PT_HASH)
          {
            enumValue = PhoneNumberCountryCode::PT;
            return true;
          }
          else if (hashCode == PR_HASH)
          {
            enumValue = PhoneNumberCountryCode::PR;
            return true;
          }
          else if (hashCode == QA_HASH)
          {
            enumValue = PhoneNumberCountryCode::QA;
            return true;
          }
          else if (hashCode == CG_HASH)
          {
            enumValue = PhoneNumberCountryCode::CG;
            return true;
          }
          else if (hashCode == RE_HASH)
          {
            enumValue = PhoneNumberCountryCode::RE;
            return true;
          }
          else if (hashCode == RO_HASH)
          {
            enumValue = PhoneNumberCountryCode::RO;
            return true;
          }
          else if (hashCode == RU_HASH)
          {
            enumValue = PhoneNumberCountryCode::RU;
            return true;
          }
          else if (hashCode == RW_HASH)
          {
            enumValue = PhoneNumberCountryCode::RW;
            return true;
          }
          else if (hashCode == BL_HASH)
          {
            enumValue = PhoneNumberCountryCode::BL;
            return true;
          }
          else if (hashCode == SH_HASH)
          {
            enumValue = PhoneNumberCountryCode::SH;
            return true;
          }
          else if (hashCode == KN_HASH)
          {
            enumValue = PhoneNumberCountryCode::KN;
            return true;
          }
          else if (hashCode == LC_HASH)
          {
            enumValue = PhoneNumberCountryCode::LC;
            return true;
          }
          else if (hashCode == MF_HASH)
          {
            enumValue = PhoneNumberCountryCode::MF;
            return true;
          }
          else if (hashCode == PM_HASH)
          {
            enumValue = PhoneNumberCountryCode::PM;
            return true;
          }
          else if (hashCode == VC_HASH)
          {
            enumValue = PhoneNumberCountryCode::VC;
            return true;
          }
          else if (hashCode == WS_HASH)
          {
            enumValue = PhoneNumberCountryCode::WS;
            return true;
          }
          else if (hashCode == SM_HASH)
          {
            enumValue = PhoneNumberCountryCode::SM;
            return true;
          }
          else if (hashCode == ST_HASH)
          {
            enumValue = PhoneNumberCountryCode::ST;
            return true;
          }
          else if (hashCode == SA_HASH)
          {
            enumValue = PhoneNumberCountryCode::SA;
            return true;
          }
          else if (hashCode == SN_HASH)
          {
            enumValue = PhoneNumberCountryCode::SN;
            return true;
          }
          else if (hashCode == RS_HASH)
          {
            enumValue = PhoneNumberCountryCode::RS;
            return true;
          }
          else if (hashCode == SC_HASH)
          {
            enumValue = PhoneNumberCountryCode::SC;
            return true;
          }
          else if (hashCode == SL_HASH)
          {
            enumValue = PhoneNumberCountryCode::SL;
            return true;
          }
          else if (hashCode == SG_HASH)
          {
            enumValue = PhoneNumberCountryCode::SG;
            return true;
          }
          else if (hashCode == SX_HASH)
          {
            enumValue = PhoneNumberCountryCode::SX;
            return true;
          }
          else if (hashCode == SK_HASH)
          {
            enumValue = PhoneNumberCountryCode::SK;
            return true;
          }
          else if (hashCode == SI_HASH)
          {
            enumValue = PhoneNumberCountryCode::SI;
            return true;
          }
          else if (hashCode == SB_HASH)
          {
            enumValue = PhoneNumberCountryCode::SB;
            return true;
          }
          else if (hashCode == SO_HASH)
          {
            enumValue = PhoneNumberCountryCode::SO;
            return true;
          }
          else if (hashCode == ZA_HASH)
          {
            enumValue = PhoneNumberCountryCode::ZA;
            return true;
          }
          else if (hashCode == KR_HASH)
          {
            enumValue = PhoneNumberCountryCode::KR;
            return true;
          }
          else if (hashCode == ES_HASH)
          {
            enumValue = PhoneNumberCountryCode::ES;
            return true;
          }
          else if (hashCode == LK_HASH)
          {
            enumValue = PhoneNumberCountryCode::LK;
            return true;
          }
          else if (hashCode == SD_HASH)
          {
            enumValue = PhoneNumberCountryCode::SD;
            return true;
          }
          else if (hashCode == SR_HASH)
          {
            enumValue = PhoneNumberCountryCode::SR;
            return true;
          }
          else if (hashCode == SJ_HASH)
          {
            enumValue = PhoneNumberCountryCode::SJ;
            return true;
          }
          else if (hashCode == SZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::SZ;
            return true;
          }
          else if (hashCode == SE_HASH)
          {
            enumValue = PhoneNumberCountryCode::SE;
            return true;
          }
          else if (hashCode == CH_HASH)
          {
            enumValue = PhoneNumberCountryCode::CH;
            return true;
          }
          else if (hashCode == SY_HASH)
          {
            enumValue = PhoneNumberCountryCode::SY;
            return true;
          }
          else if (hashCode == TW_HASH)
          {
            enumValue = PhoneNumberCountryCode::TW;
            return true;
          }
          else if (hashCode == TJ_HASH)
          {
            enumValue = PhoneNumberCountryCode::TJ;
            return true;
          }
          else if (hashCode == TZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::TZ;
            return true;
          }
          else if (hashCode == TH_HASH)
          {
            enumValue = PhoneNumberCountryCode::TH;
            return true;
          }
          else if (hashCode == TG_HASH)
          {
            enumValue = PhoneNumberCountryCode::TG;
            return true;
          }
          else if (hashCode == TK_HASH)
          {
            enumValue = PhoneNumberCountryCode::TK;
            return true;
          }
          else if (hashCode == TO_HASH)
          {
            enumValue = PhoneNumberCountryCode::TO;
            return true;
          }
          else if (hashCode == TT_HASH)
          {
            enumValue = PhoneNumberCountryCode::TT;
            return true;
          }
          else if (hashCode == TN_HASH)
          {
            enumValue = PhoneNumberCountryCode::TN;
            return true;
          }
          else if (hashCode == TR_HASH)
          {
            enumValue = PhoneNumberCountryCode::TR;
            return true;
          }
          else if (hashCode == TM_HASH)
          {
            enumValue = PhoneNumberCountryCode::TM;
            return true;
          }
          else if (hashCode == TC_HASH)
          {
            enumValue = PhoneNumberCountryCode::TC;
            return true;
          }
          else if (hashCode == TV_HASH)
          {
            enumValue = PhoneNumberCountryCode::TV;
            return true;
          }
          else if (hashCode == VI_HASH)
          {
            enumValue = PhoneNumberCountryCode::VI;
            return true;
          }
          else if (hashCode == UG_HASH)
          {
            enumValue = PhoneNumberCountryCode::UG;
            return true;
          }
          else if (hashCode == UA_HASH)
          {
            enumValue = PhoneNumberCountryCode::UA;
            return true;
          }
          else if (hashCode == AE_HASH)
          {
            enumValue = PhoneNumberCountryCode::AE;
            return true;
          }
          else if (hashCode == GB_HASH)
          {
            enumValue = PhoneNumberCountryCode::GB;
            return true;
          }
          else if (hashCode == US_HASH)
          {
            enumValue = PhoneNumberCountryCode::US;
            return true;
          }
          else if (hashCode == UY_HASH)
          {
            enumValue = PhoneNumberCountryCode::UY;
            return true;
          }
          else if (hashCode == UZ_HASH)
          {
            enumValue = PhoneNumberCountryCode::UZ;
            return true;
          }
          else if (hashCode == VU_HASH)
          {
            enumValue = PhoneNumberCountryCode::VU;
            return true;
          }
          else if (hashCode == VA_HASH)
          {
            enumValue = PhoneNumberCountryCode::VA;
            return true;
          }
          else if (hashCode == VE_HASH)
          {
            enumValue = PhoneNumberCountryCode::VE;
            return true;
          }
          else if (hashCode == VN_HASH)
          {
            enumValue = PhoneNumberCountryCode::VN;
            return true;
          }
          else if (hashCode == WF_HASH)
          {
            enumValue = PhoneNumberCountryCode::WF;
            return true;
          }
          else if (hashCode == EH_HASH)
          {
            enumValue = PhoneNumberCountryCode::EH;
            return true;
          }
          else if (hashCode == YE_HASH)
          {
            enumValue = PhoneNumberCountryCode::YE;
            return true;
          }
          else if (hashCode == ZM_HASH)
          {
            enumValue = PhoneNumberCountryCode::ZM;
            return true;
          }
          else if (hashCode == ZW_HASH)
          {
            enumValue = PhoneNumberCountryCode::ZW;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(PhoneNumberCountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case PhoneNumberCountryCode::AF:
            value = "AF";
            return true;
          case PhoneNumberCountryCode::AL:
            value = "AL";
            return true;
          case PhoneNumberCountryCode::DZ:
            value = "DZ";
            return true;
          case PhoneNumberCountryCode::AS:
            value = "AS";
            return true;
          case PhoneNumberCountryCode::AD:
            value = "AD";
            return true;
          case PhoneNumberCountryCode::AO:
            value = "AO";
            return true;
          case PhoneNumberCountryCode::AI:
            value = "AI";
            return true;
          case PhoneNumberCountryCode::AQ:
            value = "AQ";
            return true;
          case PhoneNumberCountryCode::AG:
            value = "AG";
            return true;
          case PhoneNumberCountryCode::AR:
            value = "AR";
            return true;
          case PhoneNumberCountryCode::AM:
            value = "AM";
            return true;
          case PhoneNumberCountryCode::AW:
            value = "AW";
            return true;
          case PhoneNumberCountryCode::AU:
            value = "AU";
            return true;
          case PhoneNumberCountryCode::AT:
            value = "AT";
            return true;
          case PhoneNumberCountryCode::AZ:
            value = "AZ";
            return true;
          case PhoneNumberCountryCode::BS:
            value = "BS";
            return true;
          case PhoneNumberCountryCode::BH:
            value = "BH";
            return true;
          case PhoneNumberCountryCode::BD:
            value = "BD";
            return true;
          case PhoneNumberCountryCode::BB:
            value = "BB";
            return true;
          case PhoneNumberCountryCode::BY:
            value = "BY";
            return true;
          case PhoneNumberCountryCode::BE:
            value = "BE";
            return true;
          case PhoneNumberCountryCode::BZ:
            value = "BZ";
            return true;
          case PhoneNumberCountryCode::BJ:
            value = "BJ";
            return true;
          case PhoneNumberCountryCode::BM:
            value = "BM";
            return true;
          case PhoneNumberCountryCode::BT:
            value = "BT";
            return true;
          case PhoneNumberCountryCode::BO:
            value = "BO";
            return true;
          case PhoneNumberCountryCode::BA:
            value = "BA";
            return true;
          case PhoneNumberCountryCode::BW:
            value = "BW";
            return true;
          case PhoneNumberCountryCode::BR:
            value = "BR";
            return true;
          case PhoneNumberCountryCode::IO:
            value = "IO";
            return true;
          case PhoneNumberCountryCode::VG:
            value = "VG";
            return true;
          case PhoneNumberCountryCode::BN:
            value = "BN";
            return true;
          case PhoneNumberCountryCode::BG:
            value = "BG";
            return true;
          case PhoneNumberCountryCode::BF:
            value = "BF";
            return true;
          case PhoneNumberCountryCode::BI:
            value = "BI";
            return true;
          case PhoneNumberCountryCode::KH:
            value = "KH";
            return true;
          case PhoneNumberCountryCode::CM:
            value = "CM";
            return true;
          case PhoneNumberCountryCode::CA:
            value = "CA";
            return true;
          case PhoneNumberCountryCode::CV:
            value = "CV";
            return true;
          case PhoneNumberCountryCode::KY:
            value = "KY";
            return true;
          case PhoneNumberCountryCode::CF:
            value = "CF";
            return true;
          case PhoneNumberCountryCode::TD:
            value = "TD";
            return true;
          case PhoneNumberCountryCode::CL:
            value = "CL";
            return true;
          case PhoneNumberCountryCode::CN:
            value = "CN";
            return true;
          case PhoneNumberCountryCode::CX:
            value = "CX";
            return true;
          case PhoneNumberCountryCode::CC:
            value = "CC";
            return true;
          case PhoneNumberCountryCode::CO:
            value = "CO";
            return true;
          case PhoneNumberCountryCode::KM:
            value = "KM";
            return true;
          case PhoneNumberCountryCode::CK:
            value = "CK";
            return true;
          case PhoneNumberCountryCode::CR:
            value = "CR";
            return true;
          case PhoneNumberCountryCode::HR:
            value = "HR";
            return true;
          case PhoneNumberCountryCode::CU:
            value = "CU";
            return true;
          case PhoneNumberCountryCode::CW:
            value = "CW";
            return true;
          case PhoneNumberCountryCode::CY:
            value = "CY";
            return true;
          case PhoneNumberCountryCode::CZ:
            value = "CZ";
            return true;
          case PhoneNumberCountryCode::CD:
            value = "CD";
            return true;
          case PhoneNumberCountryCode::DK:
            value = "DK";
            return true;
          case PhoneNumberCountryCode::DJ:
            value = "DJ";
            return true;
          case PhoneNumberCountryCode::DM:
            value = "DM";
            return true;
          case PhoneNumberCountryCode::DO:
            value = "DO";
            return true;
          case PhoneNumberCountryCode::TL:
            value = "TL";
            return true;
          case PhoneNumberCountryCode::EC:
            value = "EC";
            return true;
          case PhoneNumberCountryCode::EG:
            value = "EG";
            return true;
          case PhoneNumberCountryCode::SV:
            value = "SV";
            return true;
          case PhoneNumberCountryCode::GQ:
            value = "GQ";
            return true;
          case PhoneNumberCountryCode::ER:
            value = "ER";
            return true;
          case PhoneNumberCountryCode::EE:
            value = "EE";
            return true;
          case PhoneNumberCountryCode::ET:
            value = "ET";
            return true;
          case PhoneNumberCountryCode::FK:
            value = "FK";
            return true;
          case PhoneNumberCountryCode::FO:
            value = "FO";
            return true;
          case PhoneNumberCountryCode::FJ:
            value = "FJ";
            return true;
          case PhoneNumberCountryCode::FI:
            value = "FI";
            return true;
          case PhoneNumberCountryCode::FR:
            value = "FR";
            return true;
          case PhoneNumberCountryCode::PF:
            value = "PF";
            return true;
          case PhoneNumberCountryCode::GA:
            value = "GA";
            return true;
          case PhoneNumberCountryCode::GM:
            value = "GM";
            return true;
          case PhoneNumberCountryCode::GE:
            value = "GE";
            return true;
          case PhoneNumberCountryCode::DE:
            value = "DE";
            return true;
          case PhoneNumberCountryCode::GH:
            value = "GH";
            return true;
          case PhoneNumberCountryCode::GI:
            value = "GI";
            return true;
          case PhoneNumberCountryCode::GR:
            value = "GR";
            return true;
          case PhoneNumberCountryCode::GL:
            value = "GL";
            return true;
          case PhoneNumberCountryCode::GD:
            value = "GD";
            return true;
          case PhoneNumberCountryCode::GU:
            value = "GU";
            return true;
          case PhoneNumberCountryCode::GT:
            value = "GT";
            return true;
          case PhoneNumberCountryCode::GG:
            value = "GG";
            return true;
          case PhoneNumberCountryCode::GN:
            value = "GN";
            return true;
          case PhoneNumberCountryCode::GW:
            value = "GW";
            return true;
          case PhoneNumberCountryCode::GY:
            value = "GY";
            return true;
          case PhoneNumberCountryCode::HT:
            value = "HT";
            return true;
          case PhoneNumberCountryCode::HN:
            value = "HN";
            return true;
          case PhoneNumberCountryCode::HK:
            value = "HK";
            return true;
          case PhoneNumberCountryCode::HU:
            value = "HU";
            return true;
          case PhoneNumberCountryCode::IS:
            value = "IS";
            return true;
          case PhoneNumberCountryCode::IN:
            value = "IN";
            return true;
          case PhoneNumberCountryCode::ID:
            value = "ID";
            return true;
          case PhoneNumberCountryCode::IR:
            value = "IR";
            return true;
          case PhoneNumberCountryCode::IQ:
            value = "IQ";
            return true;
          case PhoneNumberCountryCode::IE:
            value = "IE";
            return true;
          case PhoneNumberCountryCode::IM:
            value = "IM";
            return true;
          case PhoneNumberCountryCode::IL:
            value = "IL";
            return true;
          case PhoneNumberCountryCode::IT:
            value = "IT";
            return true;
          case PhoneNumberCountryCode::CI:
            value = "CI";
            return true;
          case PhoneNumberCountryCode::JM:
            value = "JM";
            return true;
          case PhoneNumberCountryCode::JP:
            value = "JP";
            return true;
          case PhoneNumberCountryCode::JE:
            value = "JE";
            return true;
          case PhoneNumberCountryCode::JO:
            value = "JO";
            return true;
          case PhoneNumberCountryCode::KZ:
            value = "KZ";
            return true;
          case PhoneNumberCountryCode::KE:
            value = "KE";
            return true;
          case PhoneNumberCountryCode::KI:
            value = "KI";
            return true;
          case PhoneNumberCountryCode::KW:
            value = "KW";
            return true;
          case PhoneNumberCountryCode::KG:
            value = "KG";
            return true;
          case PhoneNumberCountryCode::LA:
            value = "LA";
            return true;
          case PhoneNumberCountryCode::LV:
            value = "LV";
            return true;
          case PhoneNumberCountryCode::LB:
            value = "LB";
            return true;
          case PhoneNumberCountryCode::LS:
            value = "LS";
            return true;
          case PhoneNumberCountryCode::LR:
            value = "LR";
            return true;
          case PhoneNumberCountryCode::LY:
            value = "LY";
            return true;
          case PhoneNumberCountryCode::LI:
            value = "LI";
            return true;
          case PhoneNumberCountryCode::LT:
            value = "LT";
            return true;
          case PhoneNumberCountryCode::LU:
            value = "LU";
            return true;
          case PhoneNumberCountryCode::MO:
            value = "MO";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(PhoneNumberCountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case PhoneNumberCountryCode::MK:
            value = "MK";
            return true;
          case PhoneNumberCountryCode::MG:
            value = "MG";
            return true;
          case PhoneNumberCountryCode::MW:
            value = "MW";
            return true;
          case PhoneNumberCountryCode::MY:
            value = "MY";
            return true;
          case PhoneNumberCountryCode::MV:
            value = "MV";
            return true;
          case PhoneNumberCountryCode::ML:
            value = "ML";
            return true;
          case PhoneNumberCountryCode::MT:
            value = "MT";
            return true;
          case PhoneNumberCountryCode::MH:
            value = "MH";
            return true;
          case PhoneNumberCountryCode::MR:
            value = "MR";
            return true;
          case PhoneNumberCountryCode::MU:
            value = "MU";
            return true;
          case PhoneNumberCountryCode::YT:
            value = "YT";
            return true;
          case PhoneNumberCountryCode::MX:
            value = "MX";
            return true;
          case PhoneNumberCountryCode::FM:
            value = "FM";
            return true;
          case PhoneNumberCountryCode::MD:
            value = "MD";
            return true;
          case PhoneNumberCountryCode::MC:
            value = "MC";
            return true;
          case PhoneNumberCountryCode::MN:
            value = "MN";
            return true;
          case PhoneNumberCountryCode::ME:
            value = "ME";
            return true;
          case PhoneNumberCountryCode::MS:
            value = "MS";
            return true;
          case PhoneNumberCountryCode::MA:
            value = "MA";
            return true;
          case PhoneNumberCountryCode::MZ:
            value = "MZ";
            return true;
          case PhoneNumberCountryCode::MM:
            value = "MM";
            return true;
          case PhoneNumberCountryCode::NA:
            value = "NA";
            return true;
          case PhoneNumberCountryCode::NR:
            value = "NR";
            return true;
          case PhoneNumberCountryCode::NP:
            value = "NP";
            return true;
          case PhoneNumberCountryCode::NL:
            value = "NL";
            return true;
          case PhoneNumberCountryCode::AN:
            value = "AN";
            return true;
          case PhoneNumberCountryCode::NC:
            value = "NC";
            return true;
          case PhoneNumberCountryCode::NZ:
            value = "NZ";
            return true;
          case PhoneNumberCountryCode::NI:
            value = "NI";
            return true;
          case PhoneNumberCountryCode::NE:
            value = "NE";
            return true;
          case PhoneNumberCountryCode::NG:
            value = "NG";
            return true;
          case PhoneNumberCountryCode::NU:
            value = "NU";
            return true;
          case PhoneNumberCountryCode::KP:
            value = "KP";
            return true;
          case PhoneNumberCountryCode::MP:
            value = "MP";
            return true;
          case PhoneNumberCountryCode::NO:
            value = "NO";
            return true;
          case PhoneNumberCountryCode::OM:
            value = "OM";
            return true;
          case PhoneNumberCountryCode::PK:
            value = "PK";
            return true;
          case PhoneNumberCountryCode::PW:
            value = "PW";
            return true;
          case PhoneNumberCountryCode::PA:
            value = "PA";
            return true;
          case PhoneNumberCountryCode::PG:
            value = "PG";
            return true;
          case PhoneNumberCountryCode::PY:
            value = "PY";
            return true;
          case PhoneNumberCountryCode::PE:
            value = "PE";
            return true;
          case PhoneNumberCountryCode::PH:
            value = "PH";
            return true;
          case PhoneNumberCountryCode::PN:
            value = "PN";
            return true;
          case PhoneNumberCountryCode::PL:
            value = "PL";
            return true;
          case PhoneNumberCountryCode::PT:
            value = "PT";
            return true;
          case PhoneNumberCountryCode::PR:
            value = "PR";
            return true;
          case PhoneNumberCountryCode::QA:
            value = "QA";
            return true;
          case PhoneNumberCountryCode::CG:
            value = "CG";
            return true;
          case PhoneNumberCountryCode::RE:
            value = "RE";
            return true;
          case PhoneNumberCountryCode::RO:
            value = "RO";
            return true;
          case PhoneNumberCountryCode::RU:
            value = "RU";
            return true;
          case PhoneNumberCountryCode::RW:
            value = "RW";
            return true;
          case PhoneNumberCountryCode::BL:
            value = "BL";
            return true;
          case PhoneNumberCountryCode::SH:
            value = "SH";
            return true;
          case PhoneNumberCountryCode::KN:
            value = "KN";
            return true;
          case PhoneNumberCountryCode::LC:
            value = "LC";
            return true;
          case PhoneNumberCountryCode::MF:
            value = "MF";
            return true;
          case PhoneNumberCountryCode::PM:
            value = "PM";
            return true;
          case PhoneNumberCountryCode::VC:
            value = "VC";
            return true;
          case PhoneNumberCountryCode::WS:
            value = "WS";
            return true;
          case PhoneNumberCountryCode::SM:
            value = "SM";
            return true;
          case PhoneNumberCountryCode::ST:
            value = "ST";
            return true;
          case PhoneNumberCountryCode::SA:
            value = "SA";
            return true;
          case PhoneNumberCountryCode::SN:
            value = "SN";
            return true;
          case PhoneNumberCountryCode::RS:
            value = "RS";
            return true;
          case PhoneNumberCountryCode::SC:
            value = "SC";
            return true;
          case PhoneNumberCountryCode::SL:
            value = "SL";
            return true;
          case PhoneNumberCountryCode::SG:
            value = "SG";
            return true;
          case PhoneNumberCountryCode::SX:
            value = "SX";
            return true;
          case PhoneNumberCountryCode::SK:
            value = "SK";
            return true;
          case PhoneNumberCountryCode::SI:
            value = "SI";
            return true;
          case PhoneNumberCountryCode::SB:
            value = "SB";
            return true;
          case PhoneNumberCountryCode::SO:
            value = "SO";
            return true;
          case PhoneNumberCountryCode::ZA:
            value = "ZA";
            return true;
          case PhoneNumberCountryCode::KR:
            value = "KR";
            return true;
          case PhoneNumberCountryCode::ES:
            value = "ES";
            return true;
          case PhoneNumberCountryCode::LK:
            value = "LK";
            return true;
          case PhoneNumberCountryCode::SD:
            value = "SD";
            return true;
          case PhoneNumberCountryCode::SR:
            value = "SR";
            return true;
          case PhoneNumberCountryCode::SJ:
            value = "SJ";
            return true;
          case PhoneNumberCountryCode::SZ:
            value = "SZ";
            return true;
          case PhoneNumberCountryCode::SE:
            value = "SE";
            return true;
          case PhoneNumberCountryCode::CH:
            value = "CH";
            return true;
          case PhoneNumberCountryCode::SY:
            value = "SY";
            return true;
          case PhoneNumberCountryCode::TW:
            value = "TW";
            return true;
          case PhoneNumberCountryCode::TJ:
            value = "TJ";
            return true;
          case PhoneNumberCountryCode::TZ:
            value = "TZ";
            return true;
          case PhoneNumberCountryCode::TH:
            value = "TH";
            return true;
          case PhoneNumberCountryCode::TG:
            value = "TG";
            return true;
          case PhoneNumberCountryCode::TK:
            value = "TK";
            return true;
          case PhoneNumberCountryCode::TO:
            value = "TO";
            return true;
          case PhoneNumberCountryCode::TT:
            value = "TT";
            return true;
          case PhoneNumberCountryCode::TN:
            value = "TN";
            return true;
          case PhoneNumberCountryCode::TR:
            value = "TR";
            return true;
          case PhoneNumberCountryCode::TM:
            value = "TM";
            return true;
          case PhoneNumberCountryCode::TC:
            value = "TC";
            return true;
          case PhoneNumberCountryCode::TV:
            value = "TV";
            return true;
          case PhoneNumberCountryCode::VI:
            value = "VI";
            return true;
          case PhoneNumberCountryCode::UG:
            value = "UG";
            return true;
          case PhoneNumberCountryCode::UA:
            value = "UA";
            return true;
          case PhoneNumberCountryCode::AE:
            value = "AE";
            return true;
          case PhoneNumberCountryCode::GB:
            value = "GB";
            return true;
          case PhoneNumberCountryCode::US:
            value = "US";
            return true;
          case PhoneNumberCountryCode::UY:
            value = "UY";
            return true;
          case PhoneNumberCountryCode::UZ:
            value = "UZ";
            return true;
          case PhoneNumberCountryCode::VU:
            value = "VU";
            return true;
          case PhoneNumberCountryCode::VA:
            value = "VA";
            return true;
          case PhoneNumberCountryCode::VE:
            value = "VE";
            return true;
          case PhoneNumberCountryCode::VN:
            value = "VN";
            return true;
          case PhoneNumberCountryCode::WF:
            value = "WF";
            return true;
          case PhoneNumberCountryCode::EH:
            value = "EH";
            return true;
          case PhoneNumberCountryCode::YE:
            value = "YE";
            return true;
          case PhoneNumberCountryCode::ZM:
            value = "ZM";
            return true;
          case PhoneNumberCountryCode::ZW:
            value = "ZW";
            return true;
          default:
            return false;
          }
        }

        PhoneNumberCountryCode GetPhoneNumberCountryCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          PhoneNumberCountryCode enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberCountryCode>(hashCode);
          }

          return PhoneNumberCountryCode::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberCountryCode(PhoneNumberCountryCode enumValue)
        {
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace PhoneNumberCountryCodeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
