/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GeoMatchConstraintValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace GeoMatchConstraintValueMapper
      {

        static const int AF_HASH = HashingUtils::HashString("AF");
        static const int AX_HASH = HashingUtils::HashString("AX");
        static const int AL_HASH = HashingUtils::HashString("AL");
        static const int DZ_HASH = HashingUtils::HashString("DZ");
        static const int AS_HASH = HashingUtils::HashString("AS");
        static const int AD_HASH = HashingUtils::HashString("AD");
        static const int AO_HASH = HashingUtils::HashString("AO");
        static const int AI_HASH = HashingUtils::HashString("AI");
        static const int AQ_HASH = HashingUtils::HashString("AQ");
        static const int AG_HASH = HashingUtils::HashString("AG");
        static const int AR_HASH = HashingUtils::HashString("AR");
        static const int AM_HASH = HashingUtils::HashString("AM");
        static const int AW_HASH = HashingUtils::HashString("AW");
        static const int AU_HASH = HashingUtils::HashString("AU");
        static const int AT_HASH = HashingUtils::HashString("AT");
        static const int AZ_HASH = HashingUtils::HashString("AZ");
        static const int BS_HASH = HashingUtils::HashString("BS");
        static const int BH_HASH = HashingUtils::HashString("BH");
        static const int BD_HASH = HashingUtils::HashString("BD");
        static const int BB_HASH = HashingUtils::HashString("BB");
        static const int BY_HASH = HashingUtils::HashString("BY");
        static const int BE_HASH = HashingUtils::HashString("BE");
        static const int BZ_HASH = HashingUtils::HashString("BZ");
        static const int BJ_HASH = HashingUtils::HashString("BJ");
        static const int BM_HASH = HashingUtils::HashString("BM");
        static const int BT_HASH = HashingUtils::HashString("BT");
        static const int BO_HASH = HashingUtils::HashString("BO");
        static const int BQ_HASH = HashingUtils::HashString("BQ");
        static const int BA_HASH = HashingUtils::HashString("BA");
        static const int BW_HASH = HashingUtils::HashString("BW");
        static const int BV_HASH = HashingUtils::HashString("BV");
        static const int BR_HASH = HashingUtils::HashString("BR");
        static const int IO_HASH = HashingUtils::HashString("IO");
        static const int BN_HASH = HashingUtils::HashString("BN");
        static const int BG_HASH = HashingUtils::HashString("BG");
        static const int BF_HASH = HashingUtils::HashString("BF");
        static const int BI_HASH = HashingUtils::HashString("BI");
        static const int KH_HASH = HashingUtils::HashString("KH");
        static const int CM_HASH = HashingUtils::HashString("CM");
        static const int CA_HASH = HashingUtils::HashString("CA");
        static const int CV_HASH = HashingUtils::HashString("CV");
        static const int KY_HASH = HashingUtils::HashString("KY");
        static const int CF_HASH = HashingUtils::HashString("CF");
        static const int TD_HASH = HashingUtils::HashString("TD");
        static const int CL_HASH = HashingUtils::HashString("CL");
        static const int CN_HASH = HashingUtils::HashString("CN");
        static const int CX_HASH = HashingUtils::HashString("CX");
        static const int CC_HASH = HashingUtils::HashString("CC");
        static const int CO_HASH = HashingUtils::HashString("CO");
        static const int KM_HASH = HashingUtils::HashString("KM");
        static const int CG_HASH = HashingUtils::HashString("CG");
        static const int CD_HASH = HashingUtils::HashString("CD");
        static const int CK_HASH = HashingUtils::HashString("CK");
        static const int CR_HASH = HashingUtils::HashString("CR");
        static const int CI_HASH = HashingUtils::HashString("CI");
        static const int HR_HASH = HashingUtils::HashString("HR");
        static const int CU_HASH = HashingUtils::HashString("CU");
        static const int CW_HASH = HashingUtils::HashString("CW");
        static const int CY_HASH = HashingUtils::HashString("CY");
        static const int CZ_HASH = HashingUtils::HashString("CZ");
        static const int DK_HASH = HashingUtils::HashString("DK");
        static const int DJ_HASH = HashingUtils::HashString("DJ");
        static const int DM_HASH = HashingUtils::HashString("DM");
        static const int DO_HASH = HashingUtils::HashString("DO");
        static const int EC_HASH = HashingUtils::HashString("EC");
        static const int EG_HASH = HashingUtils::HashString("EG");
        static const int SV_HASH = HashingUtils::HashString("SV");
        static const int GQ_HASH = HashingUtils::HashString("GQ");
        static const int ER_HASH = HashingUtils::HashString("ER");
        static const int EE_HASH = HashingUtils::HashString("EE");
        static const int ET_HASH = HashingUtils::HashString("ET");
        static const int FK_HASH = HashingUtils::HashString("FK");
        static const int FO_HASH = HashingUtils::HashString("FO");
        static const int FJ_HASH = HashingUtils::HashString("FJ");
        static const int FI_HASH = HashingUtils::HashString("FI");
        static const int FR_HASH = HashingUtils::HashString("FR");
        static const int GF_HASH = HashingUtils::HashString("GF");
        static const int PF_HASH = HashingUtils::HashString("PF");
        static const int TF_HASH = HashingUtils::HashString("TF");
        static const int GA_HASH = HashingUtils::HashString("GA");
        static const int GM_HASH = HashingUtils::HashString("GM");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int DE_HASH = HashingUtils::HashString("DE");
        static const int GH_HASH = HashingUtils::HashString("GH");
        static const int GI_HASH = HashingUtils::HashString("GI");
        static const int GR_HASH = HashingUtils::HashString("GR");
        static const int GL_HASH = HashingUtils::HashString("GL");
        static const int GD_HASH = HashingUtils::HashString("GD");
        static const int GP_HASH = HashingUtils::HashString("GP");
        static const int GU_HASH = HashingUtils::HashString("GU");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GG_HASH = HashingUtils::HashString("GG");
        static const int GN_HASH = HashingUtils::HashString("GN");
        static const int GW_HASH = HashingUtils::HashString("GW");
        static const int GY_HASH = HashingUtils::HashString("GY");
        static const int HT_HASH = HashingUtils::HashString("HT");
        static const int HM_HASH = HashingUtils::HashString("HM");
        static const int VA_HASH = HashingUtils::HashString("VA");
        static const int HN_HASH = HashingUtils::HashString("HN");
        static const int HK_HASH = HashingUtils::HashString("HK");
        static const int HU_HASH = HashingUtils::HashString("HU");
        static const int IS_HASH = HashingUtils::HashString("IS");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int IR_HASH = HashingUtils::HashString("IR");
        static const int IQ_HASH = HashingUtils::HashString("IQ");
        static const int IE_HASH = HashingUtils::HashString("IE");
        static const int IM_HASH = HashingUtils::HashString("IM");
        static const int IL_HASH = HashingUtils::HashString("IL");
        static const int IT_HASH = HashingUtils::HashString("IT");
        static const int JM_HASH = HashingUtils::HashString("JM");
        static const int JP_HASH = HashingUtils::HashString("JP");
        static const int JE_HASH = HashingUtils::HashString("JE");
        static const int JO_HASH = HashingUtils::HashString("JO");
        static const int KZ_HASH = HashingUtils::HashString("KZ");
        static const int KE_HASH = HashingUtils::HashString("KE");
        static const int KI_HASH = HashingUtils::HashString("KI");
        static const int KP_HASH = HashingUtils::HashString("KP");
        static const int KR_HASH = HashingUtils::HashString("KR");
        static const int KW_HASH = HashingUtils::HashString("KW");
        static const int KG_HASH = HashingUtils::HashString("KG");
        static const int LA_HASH = HashingUtils::HashString("LA");
        static const int LV_HASH = HashingUtils::HashString("LV");
        static const int LB_HASH = HashingUtils::HashString("LB");
        static const int LS_HASH = HashingUtils::HashString("LS");
        static const int LR_HASH = HashingUtils::HashString("LR");
        static const int LY_HASH = HashingUtils::HashString("LY");
        static const int LI_HASH = HashingUtils::HashString("LI");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LU_HASH = HashingUtils::HashString("LU");
        static const int MO_HASH = HashingUtils::HashString("MO");
        static const int MK_HASH = HashingUtils::HashString("MK");
        static const int MG_HASH = HashingUtils::HashString("MG");
        static const int MW_HASH = HashingUtils::HashString("MW");
        static const int MY_HASH = HashingUtils::HashString("MY");
        static const int MV_HASH = HashingUtils::HashString("MV");
        static const int ML_HASH = HashingUtils::HashString("ML");
        static const int MT_HASH = HashingUtils::HashString("MT");
        static const int MH_HASH = HashingUtils::HashString("MH");
        static const int MQ_HASH = HashingUtils::HashString("MQ");
        static const int MR_HASH = HashingUtils::HashString("MR");
        static const int MU_HASH = HashingUtils::HashString("MU");
        static const int YT_HASH = HashingUtils::HashString("YT");
        static const int MX_HASH = HashingUtils::HashString("MX");
        static const int FM_HASH = HashingUtils::HashString("FM");
        static const int MD_HASH = HashingUtils::HashString("MD");
        static const int MC_HASH = HashingUtils::HashString("MC");
        static const int MN_HASH = HashingUtils::HashString("MN");
        static const int ME_HASH = HashingUtils::HashString("ME");
        static const int MS_HASH = HashingUtils::HashString("MS");
        static const int MA_HASH = HashingUtils::HashString("MA");
        static const int MZ_HASH = HashingUtils::HashString("MZ");
        static const int MM_HASH = HashingUtils::HashString("MM");
        static const int NA_HASH = HashingUtils::HashString("NA");
        static const int NR_HASH = HashingUtils::HashString("NR");
        static const int NP_HASH = HashingUtils::HashString("NP");
        static const int NL_HASH = HashingUtils::HashString("NL");
        static const int NC_HASH = HashingUtils::HashString("NC");
        static const int NZ_HASH = HashingUtils::HashString("NZ");
        static const int NI_HASH = HashingUtils::HashString("NI");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int NG_HASH = HashingUtils::HashString("NG");
        static const int NU_HASH = HashingUtils::HashString("NU");
        static const int NF_HASH = HashingUtils::HashString("NF");
        static const int MP_HASH = HashingUtils::HashString("MP");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int OM_HASH = HashingUtils::HashString("OM");
        static const int PK_HASH = HashingUtils::HashString("PK");
        static const int PW_HASH = HashingUtils::HashString("PW");
        static const int PS_HASH = HashingUtils::HashString("PS");
        static const int PA_HASH = HashingUtils::HashString("PA");
        static const int PG_HASH = HashingUtils::HashString("PG");
        static const int PY_HASH = HashingUtils::HashString("PY");
        static const int PE_HASH = HashingUtils::HashString("PE");
        static const int PH_HASH = HashingUtils::HashString("PH");
        static const int PN_HASH = HashingUtils::HashString("PN");
        static const int PL_HASH = HashingUtils::HashString("PL");
        static const int PT_HASH = HashingUtils::HashString("PT");
        static const int PR_HASH = HashingUtils::HashString("PR");
        static const int QA_HASH = HashingUtils::HashString("QA");
        static const int RE_HASH = HashingUtils::HashString("RE");
        static const int RO_HASH = HashingUtils::HashString("RO");
        static const int RU_HASH = HashingUtils::HashString("RU");
        static const int RW_HASH = HashingUtils::HashString("RW");
        static const int BL_HASH = HashingUtils::HashString("BL");
        static const int SH_HASH = HashingUtils::HashString("SH");
        static const int KN_HASH = HashingUtils::HashString("KN");
        static const int LC_HASH = HashingUtils::HashString("LC");
        static const int MF_HASH = HashingUtils::HashString("MF");
        static const int PM_HASH = HashingUtils::HashString("PM");
        static const int VC_HASH = HashingUtils::HashString("VC");
        static const int WS_HASH = HashingUtils::HashString("WS");
        static const int SM_HASH = HashingUtils::HashString("SM");
        static const int ST_HASH = HashingUtils::HashString("ST");
        static const int SA_HASH = HashingUtils::HashString("SA");
        static const int SN_HASH = HashingUtils::HashString("SN");
        static const int RS_HASH = HashingUtils::HashString("RS");
        static const int SC_HASH = HashingUtils::HashString("SC");
        static const int SL_HASH = HashingUtils::HashString("SL");
        static const int SG_HASH = HashingUtils::HashString("SG");
        static const int SX_HASH = HashingUtils::HashString("SX");
        static const int SK_HASH = HashingUtils::HashString("SK");
        static const int SI_HASH = HashingUtils::HashString("SI");
        static const int SB_HASH = HashingUtils::HashString("SB");
        static const int SO_HASH = HashingUtils::HashString("SO");
        static const int ZA_HASH = HashingUtils::HashString("ZA");
        static const int GS_HASH = HashingUtils::HashString("GS");
        static const int SS_HASH = HashingUtils::HashString("SS");
        static const int ES_HASH = HashingUtils::HashString("ES");
        static const int LK_HASH = HashingUtils::HashString("LK");
        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int SR_HASH = HashingUtils::HashString("SR");
        static const int SJ_HASH = HashingUtils::HashString("SJ");
        static const int SZ_HASH = HashingUtils::HashString("SZ");
        static const int SE_HASH = HashingUtils::HashString("SE");
        static const int CH_HASH = HashingUtils::HashString("CH");
        static const int SY_HASH = HashingUtils::HashString("SY");
        static const int TW_HASH = HashingUtils::HashString("TW");
        static const int TJ_HASH = HashingUtils::HashString("TJ");
        static const int TZ_HASH = HashingUtils::HashString("TZ");
        static const int TH_HASH = HashingUtils::HashString("TH");
        static const int TL_HASH = HashingUtils::HashString("TL");
        static const int TG_HASH = HashingUtils::HashString("TG");
        static const int TK_HASH = HashingUtils::HashString("TK");
        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int TT_HASH = HashingUtils::HashString("TT");
        static const int TN_HASH = HashingUtils::HashString("TN");
        static const int TR_HASH = HashingUtils::HashString("TR");
        static const int TM_HASH = HashingUtils::HashString("TM");
        static const int TC_HASH = HashingUtils::HashString("TC");
        static const int TV_HASH = HashingUtils::HashString("TV");
        static const int UG_HASH = HashingUtils::HashString("UG");
        static const int UA_HASH = HashingUtils::HashString("UA");
        static const int AE_HASH = HashingUtils::HashString("AE");
        static const int GB_HASH = HashingUtils::HashString("GB");
        static const int US_HASH = HashingUtils::HashString("US");
        static const int UM_HASH = HashingUtils::HashString("UM");
        static const int UY_HASH = HashingUtils::HashString("UY");
        static const int UZ_HASH = HashingUtils::HashString("UZ");
        static const int VU_HASH = HashingUtils::HashString("VU");
        static const int VE_HASH = HashingUtils::HashString("VE");
        static const int VN_HASH = HashingUtils::HashString("VN");
        static const int VG_HASH = HashingUtils::HashString("VG");
        static const int VI_HASH = HashingUtils::HashString("VI");
        static const int WF_HASH = HashingUtils::HashString("WF");
        static const int EH_HASH = HashingUtils::HashString("EH");
        static const int YE_HASH = HashingUtils::HashString("YE");
        static const int ZM_HASH = HashingUtils::HashString("ZM");
        static const int ZW_HASH = HashingUtils::HashString("ZW");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == AF_HASH)
          {
            enumValue = GeoMatchConstraintValue::AF;
            return true;
          }
          else if (hashCode == AX_HASH)
          {
            enumValue = GeoMatchConstraintValue::AX;
            return true;
          }
          else if (hashCode == AL_HASH)
          {
            enumValue = GeoMatchConstraintValue::AL;
            return true;
          }
          else if (hashCode == DZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::DZ;
            return true;
          }
          else if (hashCode == AS_HASH)
          {
            enumValue = GeoMatchConstraintValue::AS;
            return true;
          }
          else if (hashCode == AD_HASH)
          {
            enumValue = GeoMatchConstraintValue::AD;
            return true;
          }
          else if (hashCode == AO_HASH)
          {
            enumValue = GeoMatchConstraintValue::AO;
            return true;
          }
          else if (hashCode == AI_HASH)
          {
            enumValue = GeoMatchConstraintValue::AI;
            return true;
          }
          else if (hashCode == AQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::AQ;
            return true;
          }
          else if (hashCode == AG_HASH)
          {
            enumValue = GeoMatchConstraintValue::AG;
            return true;
          }
          else if (hashCode == AR_HASH)
          {
            enumValue = GeoMatchConstraintValue::AR;
            return true;
          }
          else if (hashCode == AM_HASH)
          {
            enumValue = GeoMatchConstraintValue::AM;
            return true;
          }
          else if (hashCode == AW_HASH)
          {
            enumValue = GeoMatchConstraintValue::AW;
            return true;
          }
          else if (hashCode == AU_HASH)
          {
            enumValue = GeoMatchConstraintValue::AU;
            return true;
          }
          else if (hashCode == AT_HASH)
          {
            enumValue = GeoMatchConstraintValue::AT;
            return true;
          }
          else if (hashCode == AZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::AZ;
            return true;
          }
          else if (hashCode == BS_HASH)
          {
            enumValue = GeoMatchConstraintValue::BS;
            return true;
          }
          else if (hashCode == BH_HASH)
          {
            enumValue = GeoMatchConstraintValue::BH;
            return true;
          }
          else if (hashCode == BD_HASH)
          {
            enumValue = GeoMatchConstraintValue::BD;
            return true;
          }
          else if (hashCode == BB_HASH)
          {
            enumValue = GeoMatchConstraintValue::BB;
            return true;
          }
          else if (hashCode == BY_HASH)
          {
            enumValue = GeoMatchConstraintValue::BY;
            return true;
          }
          else if (hashCode == BE_HASH)
          {
            enumValue = GeoMatchConstraintValue::BE;
            return true;
          }
          else if (hashCode == BZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BZ;
            return true;
          }
          else if (hashCode == BJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BJ;
            return true;
          }
          else if (hashCode == BM_HASH)
          {
            enumValue = GeoMatchConstraintValue::BM;
            return true;
          }
          else if (hashCode == BT_HASH)
          {
            enumValue = GeoMatchConstraintValue::BT;
            return true;
          }
          else if (hashCode == BO_HASH)
          {
            enumValue = GeoMatchConstraintValue::BO;
            return true;
          }
          else if (hashCode == BQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BQ;
            return true;
          }
          else if (hashCode == BA_HASH)
          {
            enumValue = GeoMatchConstraintValue::BA;
            return true;
          }
          else if (hashCode == BW_HASH)
          {
            enumValue = GeoMatchConstraintValue::BW;
            return true;
          }
          else if (hashCode == BV_HASH)
          {
            enumValue = GeoMatchConstraintValue::BV;
            return true;
          }
          else if (hashCode == BR_HASH)
          {
            enumValue = GeoMatchConstraintValue::BR;
            return true;
          }
          else if (hashCode == IO_HASH)
          {
            enumValue = GeoMatchConstraintValue::IO;
            return true;
          }
          else if (hashCode == BN_HASH)
          {
            enumValue = GeoMatchConstraintValue::BN;
            return true;
          }
          else if (hashCode == BG_HASH)
          {
            enumValue = GeoMatchConstraintValue::BG;
            return true;
          }
          else if (hashCode == BF_HASH)
          {
            enumValue = GeoMatchConstraintValue::BF;
            return true;
          }
          else if (hashCode == BI_HASH)
          {
            enumValue = GeoMatchConstraintValue::BI;
            return true;
          }
          else if (hashCode == KH_HASH)
          {
            enumValue = GeoMatchConstraintValue::KH;
            return true;
          }
          else if (hashCode == CM_HASH)
          {
            enumValue = GeoMatchConstraintValue::CM;
            return true;
          }
          else if (hashCode == CA_HASH)
          {
            enumValue = GeoMatchConstraintValue::CA;
            return true;
          }
          else if (hashCode == CV_HASH)
          {
            enumValue = GeoMatchConstraintValue::CV;
            return true;
          }
          else if (hashCode == KY_HASH)
          {
            enumValue = GeoMatchConstraintValue::KY;
            return true;
          }
          else if (hashCode == CF_HASH)
          {
            enumValue = GeoMatchConstraintValue::CF;
            return true;
          }
          else if (hashCode == TD_HASH)
          {
            enumValue = GeoMatchConstraintValue::TD;
            return true;
          }
          else if (hashCode == CL_HASH)
          {
            enumValue = GeoMatchConstraintValue::CL;
            return true;
          }
          else if (hashCode == CN_HASH)
          {
            enumValue = GeoMatchConstraintValue::CN;
            return true;
          }
          else if (hashCode == CX_HASH)
          {
            enumValue = GeoMatchConstraintValue::CX;
            return true;
          }
          else if (hashCode == CC_HASH)
          {
            enumValue = GeoMatchConstraintValue::CC;
            return true;
          }
          else if (hashCode == CO_HASH)
          {
            enumValue = GeoMatchConstraintValue::CO;
            return true;
          }
          else if (hashCode == KM_HASH)
          {
            enumValue = GeoMatchConstraintValue::KM;
            return true;
          }
          else if (hashCode == CG_HASH)
          {
            enumValue = GeoMatchConstraintValue::CG;
            return true;
          }
          else if (hashCode == CD_HASH)
          {
            enumValue = GeoMatchConstraintValue::CD;
            return true;
          }
          else if (hashCode == CK_HASH)
          {
            enumValue = GeoMatchConstraintValue::CK;
            return true;
          }
          else if (hashCode == CR_HASH)
          {
            enumValue = GeoMatchConstraintValue::CR;
            return true;
          }
          else if (hashCode == CI_HASH)
          {
            enumValue = GeoMatchConstraintValue::CI;
            return true;
          }
          else if (hashCode == HR_HASH)
          {
            enumValue = GeoMatchConstraintValue::HR;
            return true;
          }
          else if (hashCode == CU_HASH)
          {
            enumValue = GeoMatchConstraintValue::CU;
            return true;
          }
          else if (hashCode == CW_HASH)
          {
            enumValue = GeoMatchConstraintValue::CW;
            return true;
          }
          else if (hashCode == CY_HASH)
          {
            enumValue = GeoMatchConstraintValue::CY;
            return true;
          }
          else if (hashCode == CZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::CZ;
            return true;
          }
          else if (hashCode == DK_HASH)
          {
            enumValue = GeoMatchConstraintValue::DK;
            return true;
          }
          else if (hashCode == DJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::DJ;
            return true;
          }
          else if (hashCode == DM_HASH)
          {
            enumValue = GeoMatchConstraintValue::DM;
            return true;
          }
          else if (hashCode == DO_HASH)
          {
            enumValue = GeoMatchConstraintValue::DO;
            return true;
          }
          else if (hashCode == EC_HASH)
          {
            enumValue = GeoMatchConstraintValue::EC;
            return true;
          }
          else if (hashCode == EG_HASH)
          {
            enumValue = GeoMatchConstraintValue::EG;
            return true;
          }
          else if (hashCode == SV_HASH)
          {
            enumValue = GeoMatchConstraintValue::SV;
            return true;
          }
          else if (hashCode == GQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::GQ;
            return true;
          }
          else if (hashCode == ER_HASH)
          {
            enumValue = GeoMatchConstraintValue::ER;
            return true;
          }
          else if (hashCode == EE_HASH)
          {
            enumValue = GeoMatchConstraintValue::EE;
            return true;
          }
          else if (hashCode == ET_HASH)
          {
            enumValue = GeoMatchConstraintValue::ET;
            return true;
          }
          else if (hashCode == FK_HASH)
          {
            enumValue = GeoMatchConstraintValue::FK;
            return true;
          }
          else if (hashCode == FO_HASH)
          {
            enumValue = GeoMatchConstraintValue::FO;
            return true;
          }
          else if (hashCode == FJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::FJ;
            return true;
          }
          else if (hashCode == FI_HASH)
          {
            enumValue = GeoMatchConstraintValue::FI;
            return true;
          }
          else if (hashCode == FR_HASH)
          {
            enumValue = GeoMatchConstraintValue::FR;
            return true;
          }
          else if (hashCode == GF_HASH)
          {
            enumValue = GeoMatchConstraintValue::GF;
            return true;
          }
          else if (hashCode == PF_HASH)
          {
            enumValue = GeoMatchConstraintValue::PF;
            return true;
          }
          else if (hashCode == TF_HASH)
          {
            enumValue = GeoMatchConstraintValue::TF;
            return true;
          }
          else if (hashCode == GA_HASH)
          {
            enumValue = GeoMatchConstraintValue::GA;
            return true;
          }
          else if (hashCode == GM_HASH)
          {
            enumValue = GeoMatchConstraintValue::GM;
            return true;
          }
          else if (hashCode == GE_HASH)
          {
            enumValue = GeoMatchConstraintValue::GE;
            return true;
          }
          else if (hashCode == DE_HASH)
          {
            enumValue = GeoMatchConstraintValue::DE;
            return true;
          }
          else if (hashCode == GH_HASH)
          {
            enumValue = GeoMatchConstraintValue::GH;
            return true;
          }
          else if (hashCode == GI_HASH)
          {
            enumValue = GeoMatchConstraintValue::GI;
            return true;
          }
          else if (hashCode == GR_HASH)
          {
            enumValue = GeoMatchConstraintValue::GR;
            return true;
          }
          else if (hashCode == GL_HASH)
          {
            enumValue = GeoMatchConstraintValue::GL;
            return true;
          }
          else if (hashCode == GD_HASH)
          {
            enumValue = GeoMatchConstraintValue::GD;
            return true;
          }
          else if (hashCode == GP_HASH)
          {
            enumValue = GeoMatchConstraintValue::GP;
            return true;
          }
          else if (hashCode == GU_HASH)
          {
            enumValue = GeoMatchConstraintValue::GU;
            return true;
          }
          else if (hashCode == GT_HASH)
          {
            enumValue = GeoMatchConstraintValue::GT;
            return true;
          }
          else if (hashCode == GG_HASH)
          {
            enumValue = GeoMatchConstraintValue::GG;
            return true;
          }
          else if (hashCode == GN_HASH)
          {
            enumValue = GeoMatchConstraintValue::GN;
            return true;
          }
          else if (hashCode == GW_HASH)
          {
            enumValue = GeoMatchConstraintValue::GW;
            return true;
          }
          else if (hashCode == GY_HASH)
          {
            enumValue = GeoMatchConstraintValue::GY;
            return true;
          }
          else if (hashCode == HT_HASH)
          {
            enumValue = GeoMatchConstraintValue::HT;
            return true;
          }
          else if (hashCode == HM_HASH)
          {
            enumValue = GeoMatchConstraintValue::HM;
            return true;
          }
          else if (hashCode == VA_HASH)
          {
            enumValue = GeoMatchConstraintValue::VA;
            return true;
          }
          else if (hashCode == HN_HASH)
          {
            enumValue = GeoMatchConstraintValue::HN;
            return true;
          }
          else if (hashCode == HK_HASH)
          {
            enumValue = GeoMatchConstraintValue::HK;
            return true;
          }
          else if (hashCode == HU_HASH)
          {
            enumValue = GeoMatchConstraintValue::HU;
            return true;
          }
          else if (hashCode == IS_HASH)
          {
            enumValue = GeoMatchConstraintValue::IS;
            return true;
          }
          else if (hashCode == IN_HASH)
          {
            enumValue = GeoMatchConstraintValue::IN;
            return true;
          }
          else if (hashCode == ID_HASH)
          {
            enumValue = GeoMatchConstraintValue::ID;
            return true;
          }
          else if (hashCode == IR_HASH)
          {
            enumValue = GeoMatchConstraintValue::IR;
            return true;
          }
          else if (hashCode == IQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::IQ;
            return true;
          }
          else if (hashCode == IE_HASH)
          {
            enumValue = GeoMatchConstraintValue::IE;
            return true;
          }
          else if (hashCode == IM_HASH)
          {
            enumValue = GeoMatchConstraintValue::IM;
            return true;
          }
          else if (hashCode == IL_HASH)
          {
            enumValue = GeoMatchConstraintValue::IL;
            return true;
          }
          else if (hashCode == IT_HASH)
          {
            enumValue = GeoMatchConstraintValue::IT;
            return true;
          }
          else if (hashCode == JM_HASH)
          {
            enumValue = GeoMatchConstraintValue::JM;
            return true;
          }
          else if (hashCode == JP_HASH)
          {
            enumValue = GeoMatchConstraintValue::JP;
            return true;
          }
          else if (hashCode == JE_HASH)
          {
            enumValue = GeoMatchConstraintValue::JE;
            return true;
          }
          else if (hashCode == JO_HASH)
          {
            enumValue = GeoMatchConstraintValue::JO;
            return true;
          }
          else if (hashCode == KZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::KZ;
            return true;
          }
          else if (hashCode == KE_HASH)
          {
            enumValue = GeoMatchConstraintValue::KE;
            return true;
          }
          else if (hashCode == KI_HASH)
          {
            enumValue = GeoMatchConstraintValue::KI;
            return true;
          }
          else if (hashCode == KP_HASH)
          {
            enumValue = GeoMatchConstraintValue::KP;
            return true;
          }
          else if (hashCode == KR_HASH)
          {
            enumValue = GeoMatchConstraintValue::KR;
            return true;
          }
          else if (hashCode == KW_HASH)
          {
            enumValue = GeoMatchConstraintValue::KW;
            return true;
          }
          else if (hashCode == KG_HASH)
          {
            enumValue = GeoMatchConstraintValue::KG;
            return true;
          }
          else if (hashCode == LA_HASH)
          {
            enumValue = GeoMatchConstraintValue::LA;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == LV_HASH)
          {
            enumValue = GeoMatchConstraintValue::LV;
            return true;
          }
          else if (hashCode == LB_HASH)
          {
            enumValue = GeoMatchConstraintValue::LB;
            return true;
          }
          else if (hashCode == LS_HASH)
          {
            enumValue = GeoMatchConstraintValue::LS;
            return true;
          }
          else if (hashCode == LR_HASH)
          {
            enumValue = GeoMatchConstraintValue::LR;
            return true;
          }
          else if (hashCode == LY_HASH)
          {
            enumValue = GeoMatchConstraintValue::LY;
            return true;
          }
          else if (hashCode == LI_HASH)
          {
            enumValue = GeoMatchConstraintValue::LI;
            return true;
          }
          else if (hashCode == LT_HASH)
          {
            enumValue = GeoMatchConstraintValue::LT;
            return true;
          }
          else if (hashCode == LU_HASH)
          {
            enumValue = GeoMatchConstraintValue::LU;
            return true;
          }
          else if (hashCode == MO_HASH)
          {
            enumValue = GeoMatchConstraintValue::MO;
            return true;
          }
          else if (hashCode == MK_HASH)
          {
            enumValue = GeoMatchConstraintValue::MK;
            return true;
          }
          else if (hashCode == MG_HASH)
          {
            enumValue = GeoMatchConstraintValue::MG;
            return true;
          }
          else if (hashCode == MW_HASH)
          {
            enumValue = GeoMatchConstraintValue::MW;
            return true;
          }
          else if (hashCode == MY_HASH)
          {
            enumValue = GeoMatchConstraintValue::MY;
            return true;
          }
          else if (hashCode == MV_HASH)
          {
            enumValue = GeoMatchConstraintValue::MV;
            return true;
          }
          else if (hashCode == ML_HASH)
          {
            enumValue = GeoMatchConstraintValue::ML;
            return true;
          }
          else if (hashCode == MT_HASH)
          {
            enumValue = GeoMatchConstraintValue::MT;
            return true;
          }
          else if (hashCode == MH_HASH)
          {
            enumValue = GeoMatchConstraintValue::MH;
            return true;
          }
          else if (hashCode == MQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::MQ;
            return true;
          }
          else if (hashCode == MR_HASH)
          {
            enumValue = GeoMatchConstraintValue::MR;
            return true;
          }
          else if (hashCode == MU_HASH)
          {
            enumValue = GeoMatchConstraintValue::MU;
            return true;
          }
          else if (hashCode == YT_HASH)
          {
            enumValue = GeoMatchConstraintValue::YT;
            return true;
          }
          else if (hashCode == MX_HASH)
          {
            enumValue = GeoMatchConstraintValue::MX;
            return true;
          }
          else if (hashCode == FM_HASH)
          {
            enumValue = GeoMatchConstraintValue::FM;
            return true;
          }
          else if (hashCode == MD_HASH)
          {
            enumValue = GeoMatchConstraintValue::MD;
            return true;
          }
          else if (hashCode == MC_HASH)
          {
            enumValue = GeoMatchConstraintValue::MC;
            return true;
          }
          else if (hashCode == MN_HASH)
          {
            enumValue = GeoMatchConstraintValue::MN;
            return true;
          }
          else if (hashCode == ME_HASH)
          {
            enumValue = GeoMatchConstraintValue::ME;
            return true;
          }
          else if (hashCode == MS_HASH)
          {
            enumValue = GeoMatchConstraintValue::MS;
            return true;
          }
          else if (hashCode == MA_HASH)
          {
            enumValue = GeoMatchConstraintValue::MA;
            return true;
          }
          else if (hashCode == MZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::MZ;
            return true;
          }
          else if (hashCode == MM_HASH)
          {
            enumValue = GeoMatchConstraintValue::MM;
            return true;
          }
          else if (hashCode == NA_HASH)
          {
            enumValue = GeoMatchConstraintValue::NA;
            return true;
          }
          else if (hashCode == NR_HASH)
          {
            enumValue = GeoMatchConstraintValue::NR;
            return true;
          }
          else if (hashCode == NP_HASH)
          {
            enumValue = GeoMatchConstraintValue::NP;
            return true;
          }
          else if (hashCode == NL_HASH)
          {
            enumValue = GeoMatchConstraintValue::NL;
            return true;
          }
          else if (hashCode == NC_HASH)
          {
            enumValue = GeoMatchConstraintValue::NC;
            return true;
          }
          else if (hashCode == NZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::NZ;
            return true;
          }
          else if (hashCode == NI_HASH)
          {
            enumValue = GeoMatchConstraintValue::NI;
            return true;
          }
          else if (hashCode == NE_HASH)
          {
            enumValue = GeoMatchConstraintValue::NE;
            return true;
          }
          else if (hashCode == NG_HASH)
          {
            enumValue = GeoMatchConstraintValue::NG;
            return true;
          }
          else if (hashCode == NU_HASH)
          {
            enumValue = GeoMatchConstraintValue::NU;
            return true;
          }
          else if (hashCode == NF_HASH)
          {
            enumValue = GeoMatchConstraintValue::NF;
            return true;
          }
          else if (hashCode == MP_HASH)
          {
            enumValue = GeoMatchConstraintValue::MP;
            return true;
          }
          else if (hashCode == NO_HASH)
          {
            enumValue = GeoMatchConstraintValue::NO;
            return true;
          }
          else if (hashCode == OM_HASH)
          {
            enumValue = GeoMatchConstraintValue::OM;
            return true;
          }
          else if (hashCode == PK_HASH)
          {
            enumValue = GeoMatchConstraintValue::PK;
            return true;
          }
          else if (hashCode == PW_HASH)
          {
            enumValue = GeoMatchConstraintValue::PW;
            return true;
          }
          else if (hashCode == PS_HASH)
          {
            enumValue = GeoMatchConstraintValue::PS;
            return true;
          }
          else if (hashCode == PA_HASH)
          {
            enumValue = GeoMatchConstraintValue::PA;
            return true;
          }
          else if (hashCode == PG_HASH)
          {
            enumValue = GeoMatchConstraintValue::PG;
            return true;
          }
          else if (hashCode == PY_HASH)
          {
            enumValue = GeoMatchConstraintValue::PY;
            return true;
          }
          else if (hashCode == PE_HASH)
          {
            enumValue = GeoMatchConstraintValue::PE;
            return true;
          }
          else if (hashCode == PH_HASH)
          {
            enumValue = GeoMatchConstraintValue::PH;
            return true;
          }
          else if (hashCode == PN_HASH)
          {
            enumValue = GeoMatchConstraintValue::PN;
            return true;
          }
          else if (hashCode == PL_HASH)
          {
            enumValue = GeoMatchConstraintValue::PL;
            return true;
          }
          else if (hashCode == PT_HASH)
          {
            enumValue = GeoMatchConstraintValue::PT;
            return true;
          }
          else if (hashCode == PR_HASH)
          {
            enumValue = GeoMatchConstraintValue::PR;
            return true;
          }
          else if (hashCode == QA_HASH)
          {
            enumValue = GeoMatchConstraintValue::QA;
            return true;
          }
          else if (hashCode == RE_HASH)
          {
            enumValue = GeoMatchConstraintValue::RE;
            return true;
          }
          else if (hashCode == RO_HASH)
          {
            enumValue = GeoMatchConstraintValue::RO;
            return true;
          }
          else if (hashCode == RU_HASH)
          {
            enumValue = GeoMatchConstraintValue::RU;
            return true;
          }
          else if (hashCode == RW_HASH)
          {
            enumValue = GeoMatchConstraintValue::RW;
            return true;
          }
          else if (hashCode == BL_HASH)
          {
            enumValue = GeoMatchConstraintValue::BL;
            return true;
          }
          else if (hashCode == SH_HASH)
          {
            enumValue = GeoMatchConstraintValue::SH;
            return true;
          }
          else if (hashCode == KN_HASH)
          {
            enumValue = GeoMatchConstraintValue::KN;
            return true;
          }
          else if (hashCode == LC_HASH)
          {
            enumValue = GeoMatchConstraintValue::LC;
            return true;
          }
          else if (hashCode == MF_HASH)
          {
            enumValue = GeoMatchConstraintValue::MF;
            return true;
          }
          else if (hashCode == PM_HASH)
          {
            enumValue = GeoMatchConstraintValue::PM;
            return true;
          }
          else if (hashCode == VC_HASH)
          {
            enumValue = GeoMatchConstraintValue::VC;
            return true;
          }
          else if (hashCode == WS_HASH)
          {
            enumValue = GeoMatchConstraintValue::WS;
            return true;
          }
          else if (hashCode == SM_HASH)
          {
            enumValue = GeoMatchConstraintValue::SM;
            return true;
          }
          else if (hashCode == ST_HASH)
          {
            enumValue = GeoMatchConstraintValue::ST;
            return true;
          }
          else if (hashCode == SA_HASH)
          {
            enumValue = GeoMatchConstraintValue::SA;
            return true;
          }
          else if (hashCode == SN_HASH)
          {
            enumValue = GeoMatchConstraintValue::SN;
            return true;
          }
          else if (hashCode == RS_HASH)
          {
            enumValue = GeoMatchConstraintValue::RS;
            return true;
          }
          else if (hashCode == SC_HASH)
          {
            enumValue = GeoMatchConstraintValue::SC;
            return true;
          }
          else if (hashCode == SL_HASH)
          {
            enumValue = GeoMatchConstraintValue::SL;
            return true;
          }
          else if (hashCode == SG_HASH)
          {
            enumValue = GeoMatchConstraintValue::SG;
            return true;
          }
          else if (hashCode == SX_HASH)
          {
            enumValue = GeoMatchConstraintValue::SX;
            return true;
          }
          else if (hashCode == SK_HASH)
          {
            enumValue = GeoMatchConstraintValue::SK;
            return true;
          }
          else if (hashCode == SI_HASH)
          {
            enumValue = GeoMatchConstraintValue::SI;
            return true;
          }
          else if (hashCode == SB_HASH)
          {
            enumValue = GeoMatchConstraintValue::SB;
            return true;
          }
          else if (hashCode == SO_HASH)
          {
            enumValue = GeoMatchConstraintValue::SO;
            return true;
          }
          else if (hashCode == ZA_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZA;
            return true;
          }
          else if (hashCode == GS_HASH)
          {
            enumValue = GeoMatchConstraintValue::GS;
            return true;
          }
          else if (hashCode == SS_HASH)
          {
            enumValue = GeoMatchConstraintValue::SS;
            return true;
          }
          else if (hashCode == ES_HASH)
          {
            enumValue = GeoMatchConstraintValue::ES;
            return true;
          }
          else if (hashCode == LK_HASH)
          {
            enumValue = GeoMatchConstraintValue::LK;
            return true;
          }
          else if (hashCode == SD_HASH)
          {
            enumValue = GeoMatchConstraintValue::SD;
            return true;
          }
          else if (hashCode == SR_HASH)
          {
            enumValue = GeoMatchConstraintValue::SR;
            return true;
          }
          else if (hashCode == SJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::SJ;
            return true;
          }
          else if (hashCode == SZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::SZ;
            return true;
          }
          else if (hashCode == SE_HASH)
          {
            enumValue = GeoMatchConstraintValue::SE;
            return true;
          }
          else if (hashCode == CH_HASH)
          {
            enumValue = GeoMatchConstraintValue::CH;
            return true;
          }
          else if (hashCode == SY_HASH)
          {
            enumValue = GeoMatchConstraintValue::SY;
            return true;
          }
          else if (hashCode == TW_HASH)
          {
            enumValue = GeoMatchConstraintValue::TW;
            return true;
          }
          else if (hashCode == TJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::TJ;
            return true;
          }
          else if (hashCode == TZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::TZ;
            return true;
          }
          else if (hashCode == TH_HASH)
          {
            enumValue = GeoMatchConstraintValue::TH;
            return true;
          }
          else if (hashCode == TL_HASH)
          {
            enumValue = GeoMatchConstraintValue::TL;
            return true;
          }
          else if (hashCode == TG_HASH)
          {
            enumValue = GeoMatchConstraintValue::TG;
            return true;
          }
          else if (hashCode == TK_HASH)
          {
            enumValue = GeoMatchConstraintValue::TK;
            return true;
          }
          else if (hashCode == TO_HASH)
          {
            enumValue = GeoMatchConstraintValue::TO;
            return true;
          }
          else if (hashCode == TT_HASH)
          {
            enumValue = GeoMatchConstraintValue::TT;
            return true;
          }
          else if (hashCode == TN_HASH)
          {
            enumValue = GeoMatchConstraintValue::TN;
            return true;
          }
          else if (hashCode == TR_HASH)
          {
            enumValue = GeoMatchConstraintValue::TR;
            return true;
          }
          else if (hashCode == TM_HASH)
          {
            enumValue = GeoMatchConstraintValue::TM;
            return true;
          }
          else if (hashCode == TC_HASH)
          {
            enumValue = GeoMatchConstraintValue::TC;
            return true;
          }
          else if (hashCode == TV_HASH)
          {
            enumValue = GeoMatchConstraintValue::TV;
            return true;
          }
          else if (hashCode == UG_HASH)
          {
            enumValue = GeoMatchConstraintValue::UG;
            return true;
          }
          else if (hashCode == UA_HASH)
          {
            enumValue = GeoMatchConstraintValue::UA;
            return true;
          }
          else if (hashCode == AE_HASH)
          {
            enumValue = GeoMatchConstraintValue::AE;
            return true;
          }
          else if (hashCode == GB_HASH)
          {
            enumValue = GeoMatchConstraintValue::GB;
            return true;
          }
          else if (hashCode == US_HASH)
          {
            enumValue = GeoMatchConstraintValue::US;
            return true;
          }
          else if (hashCode == UM_HASH)
          {
            enumValue = GeoMatchConstraintValue::UM;
            return true;
          }
          else if (hashCode == UY_HASH)
          {
            enumValue = GeoMatchConstraintValue::UY;
            return true;
          }
          else if (hashCode == UZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::UZ;
            return true;
          }
          else if (hashCode == VU_HASH)
          {
            enumValue = GeoMatchConstraintValue::VU;
            return true;
          }
          else if (hashCode == VE_HASH)
          {
            enumValue = GeoMatchConstraintValue::VE;
            return true;
          }
          else if (hashCode == VN_HASH)
          {
            enumValue = GeoMatchConstraintValue::VN;
            return true;
          }
          else if (hashCode == VG_HASH)
          {
            enumValue = GeoMatchConstraintValue::VG;
            return true;
          }
          else if (hashCode == VI_HASH)
          {
            enumValue = GeoMatchConstraintValue::VI;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(int hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == WF_HASH)
          {
            enumValue = GeoMatchConstraintValue::WF;
            return true;
          }
          else if (hashCode == EH_HASH)
          {
            enumValue = GeoMatchConstraintValue::EH;
            return true;
          }
          else if (hashCode == YE_HASH)
          {
            enumValue = GeoMatchConstraintValue::YE;
            return true;
          }
          else if (hashCode == ZM_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZM;
            return true;
          }
          else if (hashCode == ZW_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZW;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::AF:
            value = "AF";
            return true;
          case GeoMatchConstraintValue::AX:
            value = "AX";
            return true;
          case GeoMatchConstraintValue::AL:
            value = "AL";
            return true;
          case GeoMatchConstraintValue::DZ:
            value = "DZ";
            return true;
          case GeoMatchConstraintValue::AS:
            value = "AS";
            return true;
          case GeoMatchConstraintValue::AD:
            value = "AD";
            return true;
          case GeoMatchConstraintValue::AO:
            value = "AO";
            return true;
          case GeoMatchConstraintValue::AI:
            value = "AI";
            return true;
          case GeoMatchConstraintValue::AQ:
            value = "AQ";
            return true;
          case GeoMatchConstraintValue::AG:
            value = "AG";
            return true;
          case GeoMatchConstraintValue::AR:
            value = "AR";
            return true;
          case GeoMatchConstraintValue::AM:
            value = "AM";
            return true;
          case GeoMatchConstraintValue::AW:
            value = "AW";
            return true;
          case GeoMatchConstraintValue::AU:
            value = "AU";
            return true;
          case GeoMatchConstraintValue::AT:
            value = "AT";
            return true;
          case GeoMatchConstraintValue::AZ:
            value = "AZ";
            return true;
          case GeoMatchConstraintValue::BS:
            value = "BS";
            return true;
          case GeoMatchConstraintValue::BH:
            value = "BH";
            return true;
          case GeoMatchConstraintValue::BD:
            value = "BD";
            return true;
          case GeoMatchConstraintValue::BB:
            value = "BB";
            return true;
          case GeoMatchConstraintValue::BY:
            value = "BY";
            return true;
          case GeoMatchConstraintValue::BE:
            value = "BE";
            return true;
          case GeoMatchConstraintValue::BZ:
            value = "BZ";
            return true;
          case GeoMatchConstraintValue::BJ:
            value = "BJ";
            return true;
          case GeoMatchConstraintValue::BM:
            value = "BM";
            return true;
          case GeoMatchConstraintValue::BT:
            value = "BT";
            return true;
          case GeoMatchConstraintValue::BO:
            value = "BO";
            return true;
          case GeoMatchConstraintValue::BQ:
            value = "BQ";
            return true;
          case GeoMatchConstraintValue::BA:
            value = "BA";
            return true;
          case GeoMatchConstraintValue::BW:
            value = "BW";
            return true;
          case GeoMatchConstraintValue::BV:
            value = "BV";
            return true;
          case GeoMatchConstraintValue::BR:
            value = "BR";
            return true;
          case GeoMatchConstraintValue::IO:
            value = "IO";
            return true;
          case GeoMatchConstraintValue::BN:
            value = "BN";
            return true;
          case GeoMatchConstraintValue::BG:
            value = "BG";
            return true;
          case GeoMatchConstraintValue::BF:
            value = "BF";
            return true;
          case GeoMatchConstraintValue::BI:
            value = "BI";
            return true;
          case GeoMatchConstraintValue::KH:
            value = "KH";
            return true;
          case GeoMatchConstraintValue::CM:
            value = "CM";
            return true;
          case GeoMatchConstraintValue::CA:
            value = "CA";
            return true;
          case GeoMatchConstraintValue::CV:
            value = "CV";
            return true;
          case GeoMatchConstraintValue::KY:
            value = "KY";
            return true;
          case GeoMatchConstraintValue::CF:
            value = "CF";
            return true;
          case GeoMatchConstraintValue::TD:
            value = "TD";
            return true;
          case GeoMatchConstraintValue::CL:
            value = "CL";
            return true;
          case GeoMatchConstraintValue::CN:
            value = "CN";
            return true;
          case GeoMatchConstraintValue::CX:
            value = "CX";
            return true;
          case GeoMatchConstraintValue::CC:
            value = "CC";
            return true;
          case GeoMatchConstraintValue::CO:
            value = "CO";
            return true;
          case GeoMatchConstraintValue::KM:
            value = "KM";
            return true;
          case GeoMatchConstraintValue::CG:
            value = "CG";
            return true;
          case GeoMatchConstraintValue::CD:
            value = "CD";
            return true;
          case GeoMatchConstraintValue::CK:
            value = "CK";
            return true;
          case GeoMatchConstraintValue::CR:
            value = "CR";
            return true;
          case GeoMatchConstraintValue::CI:
            value = "CI";
            return true;
          case GeoMatchConstraintValue::HR:
            value = "HR";
            return true;
          case GeoMatchConstraintValue::CU:
            value = "CU";
            return true;
          case GeoMatchConstraintValue::CW:
            value = "CW";
            return true;
          case GeoMatchConstraintValue::CY:
            value = "CY";
            return true;
          case GeoMatchConstraintValue::CZ:
            value = "CZ";
            return true;
          case GeoMatchConstraintValue::DK:
            value = "DK";
            return true;
          case GeoMatchConstraintValue::DJ:
            value = "DJ";
            return true;
          case GeoMatchConstraintValue::DM:
            value = "DM";
            return true;
          case GeoMatchConstraintValue::DO:
            value = "DO";
            return true;
          case GeoMatchConstraintValue::EC:
            value = "EC";
            return true;
          case GeoMatchConstraintValue::EG:
            value = "EG";
            return true;
          case GeoMatchConstraintValue::SV:
            value = "SV";
            return true;
          case GeoMatchConstraintValue::GQ:
            value = "GQ";
            return true;
          case GeoMatchConstraintValue::ER:
            value = "ER";
            return true;
          case GeoMatchConstraintValue::EE:
            value = "EE";
            return true;
          case GeoMatchConstraintValue::ET:
            value = "ET";
            return true;
          case GeoMatchConstraintValue::FK:
            value = "FK";
            return true;
          case GeoMatchConstraintValue::FO:
            value = "FO";
            return true;
          case GeoMatchConstraintValue::FJ:
            value = "FJ";
            return true;
          case GeoMatchConstraintValue::FI:
            value = "FI";
            return true;
          case GeoMatchConstraintValue::FR:
            value = "FR";
            return true;
          case GeoMatchConstraintValue::GF:
            value = "GF";
            return true;
          case GeoMatchConstraintValue::PF:
            value = "PF";
            return true;
          case GeoMatchConstraintValue::TF:
            value = "TF";
            return true;
          case GeoMatchConstraintValue::GA:
            value = "GA";
            return true;
          case GeoMatchConstraintValue::GM:
            value = "GM";
            return true;
          case GeoMatchConstraintValue::GE:
            value = "GE";
            return true;
          case GeoMatchConstraintValue::DE:
            value = "DE";
            return true;
          case GeoMatchConstraintValue::GH:
            value = "GH";
            return true;
          case GeoMatchConstraintValue::GI:
            value = "GI";
            return true;
          case GeoMatchConstraintValue::GR:
            value = "GR";
            return true;
          case GeoMatchConstraintValue::GL:
            value = "GL";
            return true;
          case GeoMatchConstraintValue::GD:
            value = "GD";
            return true;
          case GeoMatchConstraintValue::GP:
            value = "GP";
            return true;
          case GeoMatchConstraintValue::GU:
            value = "GU";
            return true;
          case GeoMatchConstraintValue::GT:
            value = "GT";
            return true;
          case GeoMatchConstraintValue::GG:
            value = "GG";
            return true;
          case GeoMatchConstraintValue::GN:
            value = "GN";
            return true;
          case GeoMatchConstraintValue::GW:
            value = "GW";
            return true;
          case GeoMatchConstraintValue::GY:
            value = "GY";
            return true;
          case GeoMatchConstraintValue::HT:
            value = "HT";
            return true;
          case GeoMatchConstraintValue::HM:
            value = "HM";
            return true;
          case GeoMatchConstraintValue::VA:
            value = "VA";
            return true;
          case GeoMatchConstraintValue::HN:
            value = "HN";
            return true;
          case GeoMatchConstraintValue::HK:
            value = "HK";
            return true;
          case GeoMatchConstraintValue::HU:
            value = "HU";
            return true;
          case GeoMatchConstraintValue::IS:
            value = "IS";
            return true;
          case GeoMatchConstraintValue::IN:
            value = "IN";
            return true;
          case GeoMatchConstraintValue::ID:
            value = "ID";
            return true;
          case GeoMatchConstraintValue::IR:
            value = "IR";
            return true;
          case GeoMatchConstraintValue::IQ:
            value = "IQ";
            return true;
          case GeoMatchConstraintValue::IE:
            value = "IE";
            return true;
          case GeoMatchConstraintValue::IM:
            value = "IM";
            return true;
          case GeoMatchConstraintValue::IL:
            value = "IL";
            return true;
          case GeoMatchConstraintValue::IT:
            value = "IT";
            return true;
          case GeoMatchConstraintValue::JM:
            value = "JM";
            return true;
          case GeoMatchConstraintValue::JP:
            value = "JP";
            return true;
          case GeoMatchConstraintValue::JE:
            value = "JE";
            return true;
          case GeoMatchConstraintValue::JO:
            value = "JO";
            return true;
          case GeoMatchConstraintValue::KZ:
            value = "KZ";
            return true;
          case GeoMatchConstraintValue::KE:
            value = "KE";
            return true;
          case GeoMatchConstraintValue::KI:
            value = "KI";
            return true;
          case GeoMatchConstraintValue::KP:
            value = "KP";
            return true;
          case GeoMatchConstraintValue::KR:
            value = "KR";
            return true;
          case GeoMatchConstraintValue::KW:
            value = "KW";
            return true;
          case GeoMatchConstraintValue::KG:
            value = "KG";
            return true;
          case GeoMatchConstraintValue::LA:
            value = "LA";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::LV:
            value = "LV";
            return true;
          case GeoMatchConstraintValue::LB:
            value = "LB";
            return true;
          case GeoMatchConstraintValue::LS:
            value = "LS";
            return true;
          case GeoMatchConstraintValue::LR:
            value = "LR";
            return true;
          case GeoMatchConstraintValue::LY:
            value = "LY";
            return true;
          case GeoMatchConstraintValue::LI:
            value = "LI";
            return true;
          case GeoMatchConstraintValue::LT:
            value = "LT";
            return true;
          case GeoMatchConstraintValue::LU:
            value = "LU";
            return true;
          case GeoMatchConstraintValue::MO:
            value = "MO";
            return true;
          case GeoMatchConstraintValue::MK:
            value = "MK";
            return true;
          case GeoMatchConstraintValue::MG:
            value = "MG";
            return true;
          case GeoMatchConstraintValue::MW:
            value = "MW";
            return true;
          case GeoMatchConstraintValue::MY:
            value = "MY";
            return true;
          case GeoMatchConstraintValue::MV:
            value = "MV";
            return true;
          case GeoMatchConstraintValue::ML:
            value = "ML";
            return true;
          case GeoMatchConstraintValue::MT:
            value = "MT";
            return true;
          case GeoMatchConstraintValue::MH:
            value = "MH";
            return true;
          case GeoMatchConstraintValue::MQ:
            value = "MQ";
            return true;
          case GeoMatchConstraintValue::MR:
            value = "MR";
            return true;
          case GeoMatchConstraintValue::MU:
            value = "MU";
            return true;
          case GeoMatchConstraintValue::YT:
            value = "YT";
            return true;
          case GeoMatchConstraintValue::MX:
            value = "MX";
            return true;
          case GeoMatchConstraintValue::FM:
            value = "FM";
            return true;
          case GeoMatchConstraintValue::MD:
            value = "MD";
            return true;
          case GeoMatchConstraintValue::MC:
            value = "MC";
            return true;
          case GeoMatchConstraintValue::MN:
            value = "MN";
            return true;
          case GeoMatchConstraintValue::ME:
            value = "ME";
            return true;
          case GeoMatchConstraintValue::MS:
            value = "MS";
            return true;
          case GeoMatchConstraintValue::MA:
            value = "MA";
            return true;
          case GeoMatchConstraintValue::MZ:
            value = "MZ";
            return true;
          case GeoMatchConstraintValue::MM:
            value = "MM";
            return true;
          case GeoMatchConstraintValue::NA:
            value = "NA";
            return true;
          case GeoMatchConstraintValue::NR:
            value = "NR";
            return true;
          case GeoMatchConstraintValue::NP:
            value = "NP";
            return true;
          case GeoMatchConstraintValue::NL:
            value = "NL";
            return true;
          case GeoMatchConstraintValue::NC:
            value = "NC";
            return true;
          case GeoMatchConstraintValue::NZ:
            value = "NZ";
            return true;
          case GeoMatchConstraintValue::NI:
            value = "NI";
            return true;
          case GeoMatchConstraintValue::NE:
            value = "NE";
            return true;
          case GeoMatchConstraintValue::NG:
            value = "NG";
            return true;
          case GeoMatchConstraintValue::NU:
            value = "NU";
            return true;
          case GeoMatchConstraintValue::NF:
            value = "NF";
            return true;
          case GeoMatchConstraintValue::MP:
            value = "MP";
            return true;
          case GeoMatchConstraintValue::NO:
            value = "NO";
            return true;
          case GeoMatchConstraintValue::OM:
            value = "OM";
            return true;
          case GeoMatchConstraintValue::PK:
            value = "PK";
            return true;
          case GeoMatchConstraintValue::PW:
            value = "PW";
            return true;
          case GeoMatchConstraintValue::PS:
            value = "PS";
            return true;
          case GeoMatchConstraintValue::PA:
            value = "PA";
            return true;
          case GeoMatchConstraintValue::PG:
            value = "PG";
            return true;
          case GeoMatchConstraintValue::PY:
            value = "PY";
            return true;
          case GeoMatchConstraintValue::PE:
            value = "PE";
            return true;
          case GeoMatchConstraintValue::PH:
            value = "PH";
            return true;
          case GeoMatchConstraintValue::PN:
            value = "PN";
            return true;
          case GeoMatchConstraintValue::PL:
            value = "PL";
            return true;
          case GeoMatchConstraintValue::PT:
            value = "PT";
            return true;
          case GeoMatchConstraintValue::PR:
            value = "PR";
            return true;
          case GeoMatchConstraintValue::QA:
            value = "QA";
            return true;
          case GeoMatchConstraintValue::RE:
            value = "RE";
            return true;
          case GeoMatchConstraintValue::RO:
            value = "RO";
            return true;
          case GeoMatchConstraintValue::RU:
            value = "RU";
            return true;
          case GeoMatchConstraintValue::RW:
            value = "RW";
            return true;
          case GeoMatchConstraintValue::BL:
            value = "BL";
            return true;
          case GeoMatchConstraintValue::SH:
            value = "SH";
            return true;
          case GeoMatchConstraintValue::KN:
            value = "KN";
            return true;
          case GeoMatchConstraintValue::LC:
            value = "LC";
            return true;
          case GeoMatchConstraintValue::MF:
            value = "MF";
            return true;
          case GeoMatchConstraintValue::PM:
            value = "PM";
            return true;
          case GeoMatchConstraintValue::VC:
            value = "VC";
            return true;
          case GeoMatchConstraintValue::WS:
            value = "WS";
            return true;
          case GeoMatchConstraintValue::SM:
            value = "SM";
            return true;
          case GeoMatchConstraintValue::ST:
            value = "ST";
            return true;
          case GeoMatchConstraintValue::SA:
            value = "SA";
            return true;
          case GeoMatchConstraintValue::SN:
            value = "SN";
            return true;
          case GeoMatchConstraintValue::RS:
            value = "RS";
            return true;
          case GeoMatchConstraintValue::SC:
            value = "SC";
            return true;
          case GeoMatchConstraintValue::SL:
            value = "SL";
            return true;
          case GeoMatchConstraintValue::SG:
            value = "SG";
            return true;
          case GeoMatchConstraintValue::SX:
            value = "SX";
            return true;
          case GeoMatchConstraintValue::SK:
            value = "SK";
            return true;
          case GeoMatchConstraintValue::SI:
            value = "SI";
            return true;
          case GeoMatchConstraintValue::SB:
            value = "SB";
            return true;
          case GeoMatchConstraintValue::SO:
            value = "SO";
            return true;
          case GeoMatchConstraintValue::ZA:
            value = "ZA";
            return true;
          case GeoMatchConstraintValue::GS:
            value = "GS";
            return true;
          case GeoMatchConstraintValue::SS:
            value = "SS";
            return true;
          case GeoMatchConstraintValue::ES:
            value = "ES";
            return true;
          case GeoMatchConstraintValue::LK:
            value = "LK";
            return true;
          case GeoMatchConstraintValue::SD:
            value = "SD";
            return true;
          case GeoMatchConstraintValue::SR:
            value = "SR";
            return true;
          case GeoMatchConstraintValue::SJ:
            value = "SJ";
            return true;
          case GeoMatchConstraintValue::SZ:
            value = "SZ";
            return true;
          case GeoMatchConstraintValue::SE:
            value = "SE";
            return true;
          case GeoMatchConstraintValue::CH:
            value = "CH";
            return true;
          case GeoMatchConstraintValue::SY:
            value = "SY";
            return true;
          case GeoMatchConstraintValue::TW:
            value = "TW";
            return true;
          case GeoMatchConstraintValue::TJ:
            value = "TJ";
            return true;
          case GeoMatchConstraintValue::TZ:
            value = "TZ";
            return true;
          case GeoMatchConstraintValue::TH:
            value = "TH";
            return true;
          case GeoMatchConstraintValue::TL:
            value = "TL";
            return true;
          case GeoMatchConstraintValue::TG:
            value = "TG";
            return true;
          case GeoMatchConstraintValue::TK:
            value = "TK";
            return true;
          case GeoMatchConstraintValue::TO:
            value = "TO";
            return true;
          case GeoMatchConstraintValue::TT:
            value = "TT";
            return true;
          case GeoMatchConstraintValue::TN:
            value = "TN";
            return true;
          case GeoMatchConstraintValue::TR:
            value = "TR";
            return true;
          case GeoMatchConstraintValue::TM:
            value = "TM";
            return true;
          case GeoMatchConstraintValue::TC:
            value = "TC";
            return true;
          case GeoMatchConstraintValue::TV:
            value = "TV";
            return true;
          case GeoMatchConstraintValue::UG:
            value = "UG";
            return true;
          case GeoMatchConstraintValue::UA:
            value = "UA";
            return true;
          case GeoMatchConstraintValue::AE:
            value = "AE";
            return true;
          case GeoMatchConstraintValue::GB:
            value = "GB";
            return true;
          case GeoMatchConstraintValue::US:
            value = "US";
            return true;
          case GeoMatchConstraintValue::UM:
            value = "UM";
            return true;
          case GeoMatchConstraintValue::UY:
            value = "UY";
            return true;
          case GeoMatchConstraintValue::UZ:
            value = "UZ";
            return true;
          case GeoMatchConstraintValue::VU:
            value = "VU";
            return true;
          case GeoMatchConstraintValue::VE:
            value = "VE";
            return true;
          case GeoMatchConstraintValue::VN:
            value = "VN";
            return true;
          case GeoMatchConstraintValue::VG:
            value = "VG";
            return true;
          case GeoMatchConstraintValue::VI:
            value = "VI";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::WF:
            value = "WF";
            return true;
          case GeoMatchConstraintValue::EH:
            value = "EH";
            return true;
          case GeoMatchConstraintValue::YE:
            value = "YE";
            return true;
          case GeoMatchConstraintValue::ZM:
            value = "ZM";
            return true;
          case GeoMatchConstraintValue::ZW:
            value = "ZW";
            return true;
          default:
            return false;
          }
        }

        GeoMatchConstraintValue GetGeoMatchConstraintValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          GeoMatchConstraintValue enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoMatchConstraintValue>(hashCode);
          }

          return GeoMatchConstraintValue::NOT_SET;
        }

        Aws::String GetNameForGeoMatchConstraintValue(GeoMatchConstraintValue enumValue)
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
          else if (GetNameForEnumHelper2(enumValue, value))
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

      } // namespace GeoMatchConstraintValueMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
