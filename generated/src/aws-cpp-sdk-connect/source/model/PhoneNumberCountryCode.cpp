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

        static const int AF_HASH = HashingUtils::HashString("AF");
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
        static const int BA_HASH = HashingUtils::HashString("BA");
        static const int BW_HASH = HashingUtils::HashString("BW");
        static const int BR_HASH = HashingUtils::HashString("BR");
        static const int IO_HASH = HashingUtils::HashString("IO");
        static const int VG_HASH = HashingUtils::HashString("VG");
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
        static const int CK_HASH = HashingUtils::HashString("CK");
        static const int CR_HASH = HashingUtils::HashString("CR");
        static const int HR_HASH = HashingUtils::HashString("HR");
        static const int CU_HASH = HashingUtils::HashString("CU");
        static const int CW_HASH = HashingUtils::HashString("CW");
        static const int CY_HASH = HashingUtils::HashString("CY");
        static const int CZ_HASH = HashingUtils::HashString("CZ");
        static const int CD_HASH = HashingUtils::HashString("CD");
        static const int DK_HASH = HashingUtils::HashString("DK");
        static const int DJ_HASH = HashingUtils::HashString("DJ");
        static const int DM_HASH = HashingUtils::HashString("DM");
        static const int DO_HASH = HashingUtils::HashString("DO");
        static const int TL_HASH = HashingUtils::HashString("TL");
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
        static const int PF_HASH = HashingUtils::HashString("PF");
        static const int GA_HASH = HashingUtils::HashString("GA");
        static const int GM_HASH = HashingUtils::HashString("GM");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int DE_HASH = HashingUtils::HashString("DE");
        static const int GH_HASH = HashingUtils::HashString("GH");
        static const int GI_HASH = HashingUtils::HashString("GI");
        static const int GR_HASH = HashingUtils::HashString("GR");
        static const int GL_HASH = HashingUtils::HashString("GL");
        static const int GD_HASH = HashingUtils::HashString("GD");
        static const int GU_HASH = HashingUtils::HashString("GU");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GG_HASH = HashingUtils::HashString("GG");
        static const int GN_HASH = HashingUtils::HashString("GN");
        static const int GW_HASH = HashingUtils::HashString("GW");
        static const int GY_HASH = HashingUtils::HashString("GY");
        static const int HT_HASH = HashingUtils::HashString("HT");
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
        static const int CI_HASH = HashingUtils::HashString("CI");
        static const int JM_HASH = HashingUtils::HashString("JM");
        static const int JP_HASH = HashingUtils::HashString("JP");
        static const int JE_HASH = HashingUtils::HashString("JE");
        static const int JO_HASH = HashingUtils::HashString("JO");
        static const int KZ_HASH = HashingUtils::HashString("KZ");
        static const int KE_HASH = HashingUtils::HashString("KE");
        static const int KI_HASH = HashingUtils::HashString("KI");
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
        static const int AN_HASH = HashingUtils::HashString("AN");
        static const int NC_HASH = HashingUtils::HashString("NC");
        static const int NZ_HASH = HashingUtils::HashString("NZ");
        static const int NI_HASH = HashingUtils::HashString("NI");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int NG_HASH = HashingUtils::HashString("NG");
        static const int NU_HASH = HashingUtils::HashString("NU");
        static const int KP_HASH = HashingUtils::HashString("KP");
        static const int MP_HASH = HashingUtils::HashString("MP");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int OM_HASH = HashingUtils::HashString("OM");
        static const int PK_HASH = HashingUtils::HashString("PK");
        static const int PW_HASH = HashingUtils::HashString("PW");
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
        static const int CG_HASH = HashingUtils::HashString("CG");
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
        static const int KR_HASH = HashingUtils::HashString("KR");
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
        static const int TG_HASH = HashingUtils::HashString("TG");
        static const int TK_HASH = HashingUtils::HashString("TK");
        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int TT_HASH = HashingUtils::HashString("TT");
        static const int TN_HASH = HashingUtils::HashString("TN");
        static const int TR_HASH = HashingUtils::HashString("TR");
        static const int TM_HASH = HashingUtils::HashString("TM");
        static const int TC_HASH = HashingUtils::HashString("TC");
        static const int TV_HASH = HashingUtils::HashString("TV");
        static const int VI_HASH = HashingUtils::HashString("VI");
        static const int UG_HASH = HashingUtils::HashString("UG");
        static const int UA_HASH = HashingUtils::HashString("UA");
        static const int AE_HASH = HashingUtils::HashString("AE");
        static const int GB_HASH = HashingUtils::HashString("GB");
        static const int US_HASH = HashingUtils::HashString("US");
        static const int UY_HASH = HashingUtils::HashString("UY");
        static const int UZ_HASH = HashingUtils::HashString("UZ");
        static const int VU_HASH = HashingUtils::HashString("VU");
        static const int VA_HASH = HashingUtils::HashString("VA");
        static const int VE_HASH = HashingUtils::HashString("VE");
        static const int VN_HASH = HashingUtils::HashString("VN");
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
        static bool GetEnumForNameHelper0(int hashCode, PhoneNumberCountryCode& enumValue)
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
        static bool GetEnumForNameHelper1(int hashCode, PhoneNumberCountryCode& enumValue)
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
          int hashCode = HashingUtils::HashString(name.c_str());
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
