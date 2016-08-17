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
#include <aws/route53domains/model/CountryCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace CountryCodeMapper
      {

        static const int AD_HASH = HashingUtils::HashString("AD");
        static const int AE_HASH = HashingUtils::HashString("AE");
        static const int AF_HASH = HashingUtils::HashString("AF");
        static const int AG_HASH = HashingUtils::HashString("AG");
        static const int AI_HASH = HashingUtils::HashString("AI");
        static const int AL_HASH = HashingUtils::HashString("AL");
        static const int AM_HASH = HashingUtils::HashString("AM");
        static const int AN_HASH = HashingUtils::HashString("AN");
        static const int AO_HASH = HashingUtils::HashString("AO");
        static const int AQ_HASH = HashingUtils::HashString("AQ");
        static const int AR_HASH = HashingUtils::HashString("AR");
        static const int AS_HASH = HashingUtils::HashString("AS");
        static const int AT_HASH = HashingUtils::HashString("AT");
        static const int AU_HASH = HashingUtils::HashString("AU");
        static const int AW_HASH = HashingUtils::HashString("AW");
        static const int AZ_HASH = HashingUtils::HashString("AZ");
        static const int BA_HASH = HashingUtils::HashString("BA");
        static const int BB_HASH = HashingUtils::HashString("BB");
        static const int BD_HASH = HashingUtils::HashString("BD");
        static const int BE_HASH = HashingUtils::HashString("BE");
        static const int BF_HASH = HashingUtils::HashString("BF");
        static const int BG_HASH = HashingUtils::HashString("BG");
        static const int BH_HASH = HashingUtils::HashString("BH");
        static const int BI_HASH = HashingUtils::HashString("BI");
        static const int BJ_HASH = HashingUtils::HashString("BJ");
        static const int BL_HASH = HashingUtils::HashString("BL");
        static const int BM_HASH = HashingUtils::HashString("BM");
        static const int BN_HASH = HashingUtils::HashString("BN");
        static const int BO_HASH = HashingUtils::HashString("BO");
        static const int BR_HASH = HashingUtils::HashString("BR");
        static const int BS_HASH = HashingUtils::HashString("BS");
        static const int BT_HASH = HashingUtils::HashString("BT");
        static const int BW_HASH = HashingUtils::HashString("BW");
        static const int BY_HASH = HashingUtils::HashString("BY");
        static const int BZ_HASH = HashingUtils::HashString("BZ");
        static const int CA_HASH = HashingUtils::HashString("CA");
        static const int CC_HASH = HashingUtils::HashString("CC");
        static const int CD_HASH = HashingUtils::HashString("CD");
        static const int CF_HASH = HashingUtils::HashString("CF");
        static const int CG_HASH = HashingUtils::HashString("CG");
        static const int CH_HASH = HashingUtils::HashString("CH");
        static const int CI_HASH = HashingUtils::HashString("CI");
        static const int CK_HASH = HashingUtils::HashString("CK");
        static const int CL_HASH = HashingUtils::HashString("CL");
        static const int CM_HASH = HashingUtils::HashString("CM");
        static const int CN_HASH = HashingUtils::HashString("CN");
        static const int CO_HASH = HashingUtils::HashString("CO");
        static const int CR_HASH = HashingUtils::HashString("CR");
        static const int CU_HASH = HashingUtils::HashString("CU");
        static const int CV_HASH = HashingUtils::HashString("CV");
        static const int CX_HASH = HashingUtils::HashString("CX");
        static const int CY_HASH = HashingUtils::HashString("CY");
        static const int CZ_HASH = HashingUtils::HashString("CZ");
        static const int DE_HASH = HashingUtils::HashString("DE");
        static const int DJ_HASH = HashingUtils::HashString("DJ");
        static const int DK_HASH = HashingUtils::HashString("DK");
        static const int DM_HASH = HashingUtils::HashString("DM");
        static const int DO_HASH = HashingUtils::HashString("DO");
        static const int DZ_HASH = HashingUtils::HashString("DZ");
        static const int EC_HASH = HashingUtils::HashString("EC");
        static const int EE_HASH = HashingUtils::HashString("EE");
        static const int EG_HASH = HashingUtils::HashString("EG");
        static const int ER_HASH = HashingUtils::HashString("ER");
        static const int ES_HASH = HashingUtils::HashString("ES");
        static const int ET_HASH = HashingUtils::HashString("ET");
        static const int FI_HASH = HashingUtils::HashString("FI");
        static const int FJ_HASH = HashingUtils::HashString("FJ");
        static const int FK_HASH = HashingUtils::HashString("FK");
        static const int FM_HASH = HashingUtils::HashString("FM");
        static const int FO_HASH = HashingUtils::HashString("FO");
        static const int FR_HASH = HashingUtils::HashString("FR");
        static const int GA_HASH = HashingUtils::HashString("GA");
        static const int GB_HASH = HashingUtils::HashString("GB");
        static const int GD_HASH = HashingUtils::HashString("GD");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int GH_HASH = HashingUtils::HashString("GH");
        static const int GI_HASH = HashingUtils::HashString("GI");
        static const int GL_HASH = HashingUtils::HashString("GL");
        static const int GM_HASH = HashingUtils::HashString("GM");
        static const int GN_HASH = HashingUtils::HashString("GN");
        static const int GQ_HASH = HashingUtils::HashString("GQ");
        static const int GR_HASH = HashingUtils::HashString("GR");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GU_HASH = HashingUtils::HashString("GU");
        static const int GW_HASH = HashingUtils::HashString("GW");
        static const int GY_HASH = HashingUtils::HashString("GY");
        static const int HK_HASH = HashingUtils::HashString("HK");
        static const int HN_HASH = HashingUtils::HashString("HN");
        static const int HR_HASH = HashingUtils::HashString("HR");
        static const int HT_HASH = HashingUtils::HashString("HT");
        static const int HU_HASH = HashingUtils::HashString("HU");
        static const int ID_HASH = HashingUtils::HashString("ID");
        static const int IE_HASH = HashingUtils::HashString("IE");
        static const int IL_HASH = HashingUtils::HashString("IL");
        static const int IM_HASH = HashingUtils::HashString("IM");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int IQ_HASH = HashingUtils::HashString("IQ");
        static const int IR_HASH = HashingUtils::HashString("IR");
        static const int IS_HASH = HashingUtils::HashString("IS");
        static const int IT_HASH = HashingUtils::HashString("IT");
        static const int JM_HASH = HashingUtils::HashString("JM");
        static const int JO_HASH = HashingUtils::HashString("JO");
        static const int JP_HASH = HashingUtils::HashString("JP");
        static const int KE_HASH = HashingUtils::HashString("KE");
        static const int KG_HASH = HashingUtils::HashString("KG");
        static const int KH_HASH = HashingUtils::HashString("KH");
        static const int KI_HASH = HashingUtils::HashString("KI");
        static const int KM_HASH = HashingUtils::HashString("KM");
        static const int KN_HASH = HashingUtils::HashString("KN");
        static const int KP_HASH = HashingUtils::HashString("KP");
        static const int KR_HASH = HashingUtils::HashString("KR");
        static const int KW_HASH = HashingUtils::HashString("KW");
        static const int KY_HASH = HashingUtils::HashString("KY");
        static const int KZ_HASH = HashingUtils::HashString("KZ");
        static const int LA_HASH = HashingUtils::HashString("LA");
        static const int LB_HASH = HashingUtils::HashString("LB");
        static const int LC_HASH = HashingUtils::HashString("LC");
        static const int LI_HASH = HashingUtils::HashString("LI");
        static const int LK_HASH = HashingUtils::HashString("LK");
        static const int LR_HASH = HashingUtils::HashString("LR");
        static const int LS_HASH = HashingUtils::HashString("LS");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LU_HASH = HashingUtils::HashString("LU");
        static const int LV_HASH = HashingUtils::HashString("LV");
        static const int LY_HASH = HashingUtils::HashString("LY");
        static const int MA_HASH = HashingUtils::HashString("MA");
        static const int MC_HASH = HashingUtils::HashString("MC");
        static const int MD_HASH = HashingUtils::HashString("MD");
        static const int ME_HASH = HashingUtils::HashString("ME");
        static const int MF_HASH = HashingUtils::HashString("MF");
        static const int MG_HASH = HashingUtils::HashString("MG");
        static const int MH_HASH = HashingUtils::HashString("MH");
        static const int MK_HASH = HashingUtils::HashString("MK");
        static const int ML_HASH = HashingUtils::HashString("ML");
        static const int MM_HASH = HashingUtils::HashString("MM");
        static const int MN_HASH = HashingUtils::HashString("MN");
        static const int MO_HASH = HashingUtils::HashString("MO");
        static const int MP_HASH = HashingUtils::HashString("MP");
        static const int MR_HASH = HashingUtils::HashString("MR");
        static const int MS_HASH = HashingUtils::HashString("MS");
        static const int MT_HASH = HashingUtils::HashString("MT");
        static const int MU_HASH = HashingUtils::HashString("MU");
        static const int MV_HASH = HashingUtils::HashString("MV");
        static const int MW_HASH = HashingUtils::HashString("MW");
        static const int MX_HASH = HashingUtils::HashString("MX");
        static const int MY_HASH = HashingUtils::HashString("MY");
        static const int MZ_HASH = HashingUtils::HashString("MZ");
        static const int NA_HASH = HashingUtils::HashString("NA");
        static const int NC_HASH = HashingUtils::HashString("NC");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int NG_HASH = HashingUtils::HashString("NG");
        static const int NI_HASH = HashingUtils::HashString("NI");
        static const int NL_HASH = HashingUtils::HashString("NL");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int NP_HASH = HashingUtils::HashString("NP");
        static const int NR_HASH = HashingUtils::HashString("NR");
        static const int NU_HASH = HashingUtils::HashString("NU");
        static const int NZ_HASH = HashingUtils::HashString("NZ");
        static const int OM_HASH = HashingUtils::HashString("OM");
        static const int PA_HASH = HashingUtils::HashString("PA");
        static const int PE_HASH = HashingUtils::HashString("PE");
        static const int PF_HASH = HashingUtils::HashString("PF");
        static const int PG_HASH = HashingUtils::HashString("PG");
        static const int PH_HASH = HashingUtils::HashString("PH");
        static const int PK_HASH = HashingUtils::HashString("PK");
        static const int PL_HASH = HashingUtils::HashString("PL");
        static const int PM_HASH = HashingUtils::HashString("PM");
        static const int PN_HASH = HashingUtils::HashString("PN");
        static const int PR_HASH = HashingUtils::HashString("PR");
        static const int PT_HASH = HashingUtils::HashString("PT");
        static const int PW_HASH = HashingUtils::HashString("PW");
        static const int PY_HASH = HashingUtils::HashString("PY");
        static const int QA_HASH = HashingUtils::HashString("QA");
        static const int RO_HASH = HashingUtils::HashString("RO");
        static const int RS_HASH = HashingUtils::HashString("RS");
        static const int RU_HASH = HashingUtils::HashString("RU");
        static const int RW_HASH = HashingUtils::HashString("RW");
        static const int SA_HASH = HashingUtils::HashString("SA");
        static const int SB_HASH = HashingUtils::HashString("SB");
        static const int SC_HASH = HashingUtils::HashString("SC");
        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int SE_HASH = HashingUtils::HashString("SE");
        static const int SG_HASH = HashingUtils::HashString("SG");
        static const int SH_HASH = HashingUtils::HashString("SH");
        static const int SI_HASH = HashingUtils::HashString("SI");
        static const int SK_HASH = HashingUtils::HashString("SK");
        static const int SL_HASH = HashingUtils::HashString("SL");
        static const int SM_HASH = HashingUtils::HashString("SM");
        static const int SN_HASH = HashingUtils::HashString("SN");
        static const int SO_HASH = HashingUtils::HashString("SO");
        static const int SR_HASH = HashingUtils::HashString("SR");
        static const int ST_HASH = HashingUtils::HashString("ST");
        static const int SV_HASH = HashingUtils::HashString("SV");
        static const int SY_HASH = HashingUtils::HashString("SY");
        static const int SZ_HASH = HashingUtils::HashString("SZ");
        static const int TC_HASH = HashingUtils::HashString("TC");
        static const int TD_HASH = HashingUtils::HashString("TD");
        static const int TG_HASH = HashingUtils::HashString("TG");
        static const int TH_HASH = HashingUtils::HashString("TH");
        static const int TJ_HASH = HashingUtils::HashString("TJ");
        static const int TK_HASH = HashingUtils::HashString("TK");
        static const int TL_HASH = HashingUtils::HashString("TL");
        static const int TM_HASH = HashingUtils::HashString("TM");
        static const int TN_HASH = HashingUtils::HashString("TN");
        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int TR_HASH = HashingUtils::HashString("TR");
        static const int TT_HASH = HashingUtils::HashString("TT");
        static const int TV_HASH = HashingUtils::HashString("TV");
        static const int TW_HASH = HashingUtils::HashString("TW");
        static const int TZ_HASH = HashingUtils::HashString("TZ");
        static const int UA_HASH = HashingUtils::HashString("UA");
        static const int UG_HASH = HashingUtils::HashString("UG");
        static const int US_HASH = HashingUtils::HashString("US");
        static const int UY_HASH = HashingUtils::HashString("UY");
        static const int UZ_HASH = HashingUtils::HashString("UZ");
        static const int VA_HASH = HashingUtils::HashString("VA");
        static const int VC_HASH = HashingUtils::HashString("VC");
        static const int VE_HASH = HashingUtils::HashString("VE");
        static const int VG_HASH = HashingUtils::HashString("VG");
        static const int VI_HASH = HashingUtils::HashString("VI");
        static const int VN_HASH = HashingUtils::HashString("VN");
        static const int VU_HASH = HashingUtils::HashString("VU");
        static const int WF_HASH = HashingUtils::HashString("WF");
        static const int WS_HASH = HashingUtils::HashString("WS");
        static const int YE_HASH = HashingUtils::HashString("YE");
        static const int YT_HASH = HashingUtils::HashString("YT");
        static const int ZA_HASH = HashingUtils::HashString("ZA");
        static const int ZM_HASH = HashingUtils::HashString("ZM");
        static const int ZW_HASH = HashingUtils::HashString("ZW");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, CountryCode& enumValue)
        {
          if (hashCode == AD_HASH)
          {
            enumValue = CountryCode::AD;
            return true;
          }
          else if (hashCode == AE_HASH)
          {
            enumValue = CountryCode::AE;
            return true;
          }
          else if (hashCode == AF_HASH)
          {
            enumValue = CountryCode::AF;
            return true;
          }
          else if (hashCode == AG_HASH)
          {
            enumValue = CountryCode::AG;
            return true;
          }
          else if (hashCode == AI_HASH)
          {
            enumValue = CountryCode::AI;
            return true;
          }
          else if (hashCode == AL_HASH)
          {
            enumValue = CountryCode::AL;
            return true;
          }
          else if (hashCode == AM_HASH)
          {
            enumValue = CountryCode::AM;
            return true;
          }
          else if (hashCode == AN_HASH)
          {
            enumValue = CountryCode::AN;
            return true;
          }
          else if (hashCode == AO_HASH)
          {
            enumValue = CountryCode::AO;
            return true;
          }
          else if (hashCode == AQ_HASH)
          {
            enumValue = CountryCode::AQ;
            return true;
          }
          else if (hashCode == AR_HASH)
          {
            enumValue = CountryCode::AR;
            return true;
          }
          else if (hashCode == AS_HASH)
          {
            enumValue = CountryCode::AS;
            return true;
          }
          else if (hashCode == AT_HASH)
          {
            enumValue = CountryCode::AT;
            return true;
          }
          else if (hashCode == AU_HASH)
          {
            enumValue = CountryCode::AU;
            return true;
          }
          else if (hashCode == AW_HASH)
          {
            enumValue = CountryCode::AW;
            return true;
          }
          else if (hashCode == AZ_HASH)
          {
            enumValue = CountryCode::AZ;
            return true;
          }
          else if (hashCode == BA_HASH)
          {
            enumValue = CountryCode::BA;
            return true;
          }
          else if (hashCode == BB_HASH)
          {
            enumValue = CountryCode::BB;
            return true;
          }
          else if (hashCode == BD_HASH)
          {
            enumValue = CountryCode::BD;
            return true;
          }
          else if (hashCode == BE_HASH)
          {
            enumValue = CountryCode::BE;
            return true;
          }
          else if (hashCode == BF_HASH)
          {
            enumValue = CountryCode::BF;
            return true;
          }
          else if (hashCode == BG_HASH)
          {
            enumValue = CountryCode::BG;
            return true;
          }
          else if (hashCode == BH_HASH)
          {
            enumValue = CountryCode::BH;
            return true;
          }
          else if (hashCode == BI_HASH)
          {
            enumValue = CountryCode::BI;
            return true;
          }
          else if (hashCode == BJ_HASH)
          {
            enumValue = CountryCode::BJ;
            return true;
          }
          else if (hashCode == BL_HASH)
          {
            enumValue = CountryCode::BL;
            return true;
          }
          else if (hashCode == BM_HASH)
          {
            enumValue = CountryCode::BM;
            return true;
          }
          else if (hashCode == BN_HASH)
          {
            enumValue = CountryCode::BN;
            return true;
          }
          else if (hashCode == BO_HASH)
          {
            enumValue = CountryCode::BO;
            return true;
          }
          else if (hashCode == BR_HASH)
          {
            enumValue = CountryCode::BR;
            return true;
          }
          else if (hashCode == BS_HASH)
          {
            enumValue = CountryCode::BS;
            return true;
          }
          else if (hashCode == BT_HASH)
          {
            enumValue = CountryCode::BT;
            return true;
          }
          else if (hashCode == BW_HASH)
          {
            enumValue = CountryCode::BW;
            return true;
          }
          else if (hashCode == BY_HASH)
          {
            enumValue = CountryCode::BY;
            return true;
          }
          else if (hashCode == BZ_HASH)
          {
            enumValue = CountryCode::BZ;
            return true;
          }
          else if (hashCode == CA_HASH)
          {
            enumValue = CountryCode::CA;
            return true;
          }
          else if (hashCode == CC_HASH)
          {
            enumValue = CountryCode::CC;
            return true;
          }
          else if (hashCode == CD_HASH)
          {
            enumValue = CountryCode::CD;
            return true;
          }
          else if (hashCode == CF_HASH)
          {
            enumValue = CountryCode::CF;
            return true;
          }
          else if (hashCode == CG_HASH)
          {
            enumValue = CountryCode::CG;
            return true;
          }
          else if (hashCode == CH_HASH)
          {
            enumValue = CountryCode::CH;
            return true;
          }
          else if (hashCode == CI_HASH)
          {
            enumValue = CountryCode::CI;
            return true;
          }
          else if (hashCode == CK_HASH)
          {
            enumValue = CountryCode::CK;
            return true;
          }
          else if (hashCode == CL_HASH)
          {
            enumValue = CountryCode::CL;
            return true;
          }
          else if (hashCode == CM_HASH)
          {
            enumValue = CountryCode::CM;
            return true;
          }
          else if (hashCode == CN_HASH)
          {
            enumValue = CountryCode::CN;
            return true;
          }
          else if (hashCode == CO_HASH)
          {
            enumValue = CountryCode::CO;
            return true;
          }
          else if (hashCode == CR_HASH)
          {
            enumValue = CountryCode::CR;
            return true;
          }
          else if (hashCode == CU_HASH)
          {
            enumValue = CountryCode::CU;
            return true;
          }
          else if (hashCode == CV_HASH)
          {
            enumValue = CountryCode::CV;
            return true;
          }
          else if (hashCode == CX_HASH)
          {
            enumValue = CountryCode::CX;
            return true;
          }
          else if (hashCode == CY_HASH)
          {
            enumValue = CountryCode::CY;
            return true;
          }
          else if (hashCode == CZ_HASH)
          {
            enumValue = CountryCode::CZ;
            return true;
          }
          else if (hashCode == DE_HASH)
          {
            enumValue = CountryCode::DE;
            return true;
          }
          else if (hashCode == DJ_HASH)
          {
            enumValue = CountryCode::DJ;
            return true;
          }
          else if (hashCode == DK_HASH)
          {
            enumValue = CountryCode::DK;
            return true;
          }
          else if (hashCode == DM_HASH)
          {
            enumValue = CountryCode::DM;
            return true;
          }
          else if (hashCode == DO_HASH)
          {
            enumValue = CountryCode::DO;
            return true;
          }
          else if (hashCode == DZ_HASH)
          {
            enumValue = CountryCode::DZ;
            return true;
          }
          else if (hashCode == EC_HASH)
          {
            enumValue = CountryCode::EC;
            return true;
          }
          else if (hashCode == EE_HASH)
          {
            enumValue = CountryCode::EE;
            return true;
          }
          else if (hashCode == EG_HASH)
          {
            enumValue = CountryCode::EG;
            return true;
          }
          else if (hashCode == ER_HASH)
          {
            enumValue = CountryCode::ER;
            return true;
          }
          else if (hashCode == ES_HASH)
          {
            enumValue = CountryCode::ES;
            return true;
          }
          else if (hashCode == ET_HASH)
          {
            enumValue = CountryCode::ET;
            return true;
          }
          else if (hashCode == FI_HASH)
          {
            enumValue = CountryCode::FI;
            return true;
          }
          else if (hashCode == FJ_HASH)
          {
            enumValue = CountryCode::FJ;
            return true;
          }
          else if (hashCode == FK_HASH)
          {
            enumValue = CountryCode::FK;
            return true;
          }
          else if (hashCode == FM_HASH)
          {
            enumValue = CountryCode::FM;
            return true;
          }
          else if (hashCode == FO_HASH)
          {
            enumValue = CountryCode::FO;
            return true;
          }
          else if (hashCode == FR_HASH)
          {
            enumValue = CountryCode::FR;
            return true;
          }
          else if (hashCode == GA_HASH)
          {
            enumValue = CountryCode::GA;
            return true;
          }
          else if (hashCode == GB_HASH)
          {
            enumValue = CountryCode::GB;
            return true;
          }
          else if (hashCode == GD_HASH)
          {
            enumValue = CountryCode::GD;
            return true;
          }
          else if (hashCode == GE_HASH)
          {
            enumValue = CountryCode::GE;
            return true;
          }
          else if (hashCode == GH_HASH)
          {
            enumValue = CountryCode::GH;
            return true;
          }
          else if (hashCode == GI_HASH)
          {
            enumValue = CountryCode::GI;
            return true;
          }
          else if (hashCode == GL_HASH)
          {
            enumValue = CountryCode::GL;
            return true;
          }
          else if (hashCode == GM_HASH)
          {
            enumValue = CountryCode::GM;
            return true;
          }
          else if (hashCode == GN_HASH)
          {
            enumValue = CountryCode::GN;
            return true;
          }
          else if (hashCode == GQ_HASH)
          {
            enumValue = CountryCode::GQ;
            return true;
          }
          else if (hashCode == GR_HASH)
          {
            enumValue = CountryCode::GR;
            return true;
          }
          else if (hashCode == GT_HASH)
          {
            enumValue = CountryCode::GT;
            return true;
          }
          else if (hashCode == GU_HASH)
          {
            enumValue = CountryCode::GU;
            return true;
          }
          else if (hashCode == GW_HASH)
          {
            enumValue = CountryCode::GW;
            return true;
          }
          else if (hashCode == GY_HASH)
          {
            enumValue = CountryCode::GY;
            return true;
          }
          else if (hashCode == HK_HASH)
          {
            enumValue = CountryCode::HK;
            return true;
          }
          else if (hashCode == HN_HASH)
          {
            enumValue = CountryCode::HN;
            return true;
          }
          else if (hashCode == HR_HASH)
          {
            enumValue = CountryCode::HR;
            return true;
          }
          else if (hashCode == HT_HASH)
          {
            enumValue = CountryCode::HT;
            return true;
          }
          else if (hashCode == HU_HASH)
          {
            enumValue = CountryCode::HU;
            return true;
          }
          else if (hashCode == ID_HASH)
          {
            enumValue = CountryCode::ID;
            return true;
          }
          else if (hashCode == IE_HASH)
          {
            enumValue = CountryCode::IE;
            return true;
          }
          else if (hashCode == IL_HASH)
          {
            enumValue = CountryCode::IL;
            return true;
          }
          else if (hashCode == IM_HASH)
          {
            enumValue = CountryCode::IM;
            return true;
          }
          else if (hashCode == IN_HASH)
          {
            enumValue = CountryCode::IN;
            return true;
          }
          else if (hashCode == IQ_HASH)
          {
            enumValue = CountryCode::IQ;
            return true;
          }
          else if (hashCode == IR_HASH)
          {
            enumValue = CountryCode::IR;
            return true;
          }
          else if (hashCode == IS_HASH)
          {
            enumValue = CountryCode::IS;
            return true;
          }
          else if (hashCode == IT_HASH)
          {
            enumValue = CountryCode::IT;
            return true;
          }
          else if (hashCode == JM_HASH)
          {
            enumValue = CountryCode::JM;
            return true;
          }
          else if (hashCode == JO_HASH)
          {
            enumValue = CountryCode::JO;
            return true;
          }
          else if (hashCode == JP_HASH)
          {
            enumValue = CountryCode::JP;
            return true;
          }
          else if (hashCode == KE_HASH)
          {
            enumValue = CountryCode::KE;
            return true;
          }
          else if (hashCode == KG_HASH)
          {
            enumValue = CountryCode::KG;
            return true;
          }
          else if (hashCode == KH_HASH)
          {
            enumValue = CountryCode::KH;
            return true;
          }
          else if (hashCode == KI_HASH)
          {
            enumValue = CountryCode::KI;
            return true;
          }
          else if (hashCode == KM_HASH)
          {
            enumValue = CountryCode::KM;
            return true;
          }
          else if (hashCode == KN_HASH)
          {
            enumValue = CountryCode::KN;
            return true;
          }
          else if (hashCode == KP_HASH)
          {
            enumValue = CountryCode::KP;
            return true;
          }
          else if (hashCode == KR_HASH)
          {
            enumValue = CountryCode::KR;
            return true;
          }
          else if (hashCode == KW_HASH)
          {
            enumValue = CountryCode::KW;
            return true;
          }
          else if (hashCode == KY_HASH)
          {
            enumValue = CountryCode::KY;
            return true;
          }
          else if (hashCode == KZ_HASH)
          {
            enumValue = CountryCode::KZ;
            return true;
          }
          else if (hashCode == LA_HASH)
          {
            enumValue = CountryCode::LA;
            return true;
          }
          else if (hashCode == LB_HASH)
          {
            enumValue = CountryCode::LB;
            return true;
          }
          else if (hashCode == LC_HASH)
          {
            enumValue = CountryCode::LC;
            return true;
          }
          else if (hashCode == LI_HASH)
          {
            enumValue = CountryCode::LI;
            return true;
          }
          else if (hashCode == LK_HASH)
          {
            enumValue = CountryCode::LK;
            return true;
          }
          else if (hashCode == LR_HASH)
          {
            enumValue = CountryCode::LR;
            return true;
          }
          else if (hashCode == LS_HASH)
          {
            enumValue = CountryCode::LS;
            return true;
          }
          else if (hashCode == LT_HASH)
          {
            enumValue = CountryCode::LT;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, CountryCode& enumValue)
        {
          if (hashCode == LU_HASH)
          {
            enumValue = CountryCode::LU;
            return true;
          }
          else if (hashCode == LV_HASH)
          {
            enumValue = CountryCode::LV;
            return true;
          }
          else if (hashCode == LY_HASH)
          {
            enumValue = CountryCode::LY;
            return true;
          }
          else if (hashCode == MA_HASH)
          {
            enumValue = CountryCode::MA;
            return true;
          }
          else if (hashCode == MC_HASH)
          {
            enumValue = CountryCode::MC;
            return true;
          }
          else if (hashCode == MD_HASH)
          {
            enumValue = CountryCode::MD;
            return true;
          }
          else if (hashCode == ME_HASH)
          {
            enumValue = CountryCode::ME;
            return true;
          }
          else if (hashCode == MF_HASH)
          {
            enumValue = CountryCode::MF;
            return true;
          }
          else if (hashCode == MG_HASH)
          {
            enumValue = CountryCode::MG;
            return true;
          }
          else if (hashCode == MH_HASH)
          {
            enumValue = CountryCode::MH;
            return true;
          }
          else if (hashCode == MK_HASH)
          {
            enumValue = CountryCode::MK;
            return true;
          }
          else if (hashCode == ML_HASH)
          {
            enumValue = CountryCode::ML;
            return true;
          }
          else if (hashCode == MM_HASH)
          {
            enumValue = CountryCode::MM;
            return true;
          }
          else if (hashCode == MN_HASH)
          {
            enumValue = CountryCode::MN;
            return true;
          }
          else if (hashCode == MO_HASH)
          {
            enumValue = CountryCode::MO;
            return true;
          }
          else if (hashCode == MP_HASH)
          {
            enumValue = CountryCode::MP;
            return true;
          }
          else if (hashCode == MR_HASH)
          {
            enumValue = CountryCode::MR;
            return true;
          }
          else if (hashCode == MS_HASH)
          {
            enumValue = CountryCode::MS;
            return true;
          }
          else if (hashCode == MT_HASH)
          {
            enumValue = CountryCode::MT;
            return true;
          }
          else if (hashCode == MU_HASH)
          {
            enumValue = CountryCode::MU;
            return true;
          }
          else if (hashCode == MV_HASH)
          {
            enumValue = CountryCode::MV;
            return true;
          }
          else if (hashCode == MW_HASH)
          {
            enumValue = CountryCode::MW;
            return true;
          }
          else if (hashCode == MX_HASH)
          {
            enumValue = CountryCode::MX;
            return true;
          }
          else if (hashCode == MY_HASH)
          {
            enumValue = CountryCode::MY;
            return true;
          }
          else if (hashCode == MZ_HASH)
          {
            enumValue = CountryCode::MZ;
            return true;
          }
          else if (hashCode == NA_HASH)
          {
            enumValue = CountryCode::NA;
            return true;
          }
          else if (hashCode == NC_HASH)
          {
            enumValue = CountryCode::NC;
            return true;
          }
          else if (hashCode == NE_HASH)
          {
            enumValue = CountryCode::NE;
            return true;
          }
          else if (hashCode == NG_HASH)
          {
            enumValue = CountryCode::NG;
            return true;
          }
          else if (hashCode == NI_HASH)
          {
            enumValue = CountryCode::NI;
            return true;
          }
          else if (hashCode == NL_HASH)
          {
            enumValue = CountryCode::NL;
            return true;
          }
          else if (hashCode == NO_HASH)
          {
            enumValue = CountryCode::NO;
            return true;
          }
          else if (hashCode == NP_HASH)
          {
            enumValue = CountryCode::NP;
            return true;
          }
          else if (hashCode == NR_HASH)
          {
            enumValue = CountryCode::NR;
            return true;
          }
          else if (hashCode == NU_HASH)
          {
            enumValue = CountryCode::NU;
            return true;
          }
          else if (hashCode == NZ_HASH)
          {
            enumValue = CountryCode::NZ;
            return true;
          }
          else if (hashCode == OM_HASH)
          {
            enumValue = CountryCode::OM;
            return true;
          }
          else if (hashCode == PA_HASH)
          {
            enumValue = CountryCode::PA;
            return true;
          }
          else if (hashCode == PE_HASH)
          {
            enumValue = CountryCode::PE;
            return true;
          }
          else if (hashCode == PF_HASH)
          {
            enumValue = CountryCode::PF;
            return true;
          }
          else if (hashCode == PG_HASH)
          {
            enumValue = CountryCode::PG;
            return true;
          }
          else if (hashCode == PH_HASH)
          {
            enumValue = CountryCode::PH;
            return true;
          }
          else if (hashCode == PK_HASH)
          {
            enumValue = CountryCode::PK;
            return true;
          }
          else if (hashCode == PL_HASH)
          {
            enumValue = CountryCode::PL;
            return true;
          }
          else if (hashCode == PM_HASH)
          {
            enumValue = CountryCode::PM;
            return true;
          }
          else if (hashCode == PN_HASH)
          {
            enumValue = CountryCode::PN;
            return true;
          }
          else if (hashCode == PR_HASH)
          {
            enumValue = CountryCode::PR;
            return true;
          }
          else if (hashCode == PT_HASH)
          {
            enumValue = CountryCode::PT;
            return true;
          }
          else if (hashCode == PW_HASH)
          {
            enumValue = CountryCode::PW;
            return true;
          }
          else if (hashCode == PY_HASH)
          {
            enumValue = CountryCode::PY;
            return true;
          }
          else if (hashCode == QA_HASH)
          {
            enumValue = CountryCode::QA;
            return true;
          }
          else if (hashCode == RO_HASH)
          {
            enumValue = CountryCode::RO;
            return true;
          }
          else if (hashCode == RS_HASH)
          {
            enumValue = CountryCode::RS;
            return true;
          }
          else if (hashCode == RU_HASH)
          {
            enumValue = CountryCode::RU;
            return true;
          }
          else if (hashCode == RW_HASH)
          {
            enumValue = CountryCode::RW;
            return true;
          }
          else if (hashCode == SA_HASH)
          {
            enumValue = CountryCode::SA;
            return true;
          }
          else if (hashCode == SB_HASH)
          {
            enumValue = CountryCode::SB;
            return true;
          }
          else if (hashCode == SC_HASH)
          {
            enumValue = CountryCode::SC;
            return true;
          }
          else if (hashCode == SD_HASH)
          {
            enumValue = CountryCode::SD;
            return true;
          }
          else if (hashCode == SE_HASH)
          {
            enumValue = CountryCode::SE;
            return true;
          }
          else if (hashCode == SG_HASH)
          {
            enumValue = CountryCode::SG;
            return true;
          }
          else if (hashCode == SH_HASH)
          {
            enumValue = CountryCode::SH;
            return true;
          }
          else if (hashCode == SI_HASH)
          {
            enumValue = CountryCode::SI;
            return true;
          }
          else if (hashCode == SK_HASH)
          {
            enumValue = CountryCode::SK;
            return true;
          }
          else if (hashCode == SL_HASH)
          {
            enumValue = CountryCode::SL;
            return true;
          }
          else if (hashCode == SM_HASH)
          {
            enumValue = CountryCode::SM;
            return true;
          }
          else if (hashCode == SN_HASH)
          {
            enumValue = CountryCode::SN;
            return true;
          }
          else if (hashCode == SO_HASH)
          {
            enumValue = CountryCode::SO;
            return true;
          }
          else if (hashCode == SR_HASH)
          {
            enumValue = CountryCode::SR;
            return true;
          }
          else if (hashCode == ST_HASH)
          {
            enumValue = CountryCode::ST;
            return true;
          }
          else if (hashCode == SV_HASH)
          {
            enumValue = CountryCode::SV;
            return true;
          }
          else if (hashCode == SY_HASH)
          {
            enumValue = CountryCode::SY;
            return true;
          }
          else if (hashCode == SZ_HASH)
          {
            enumValue = CountryCode::SZ;
            return true;
          }
          else if (hashCode == TC_HASH)
          {
            enumValue = CountryCode::TC;
            return true;
          }
          else if (hashCode == TD_HASH)
          {
            enumValue = CountryCode::TD;
            return true;
          }
          else if (hashCode == TG_HASH)
          {
            enumValue = CountryCode::TG;
            return true;
          }
          else if (hashCode == TH_HASH)
          {
            enumValue = CountryCode::TH;
            return true;
          }
          else if (hashCode == TJ_HASH)
          {
            enumValue = CountryCode::TJ;
            return true;
          }
          else if (hashCode == TK_HASH)
          {
            enumValue = CountryCode::TK;
            return true;
          }
          else if (hashCode == TL_HASH)
          {
            enumValue = CountryCode::TL;
            return true;
          }
          else if (hashCode == TM_HASH)
          {
            enumValue = CountryCode::TM;
            return true;
          }
          else if (hashCode == TN_HASH)
          {
            enumValue = CountryCode::TN;
            return true;
          }
          else if (hashCode == TO_HASH)
          {
            enumValue = CountryCode::TO;
            return true;
          }
          else if (hashCode == TR_HASH)
          {
            enumValue = CountryCode::TR;
            return true;
          }
          else if (hashCode == TT_HASH)
          {
            enumValue = CountryCode::TT;
            return true;
          }
          else if (hashCode == TV_HASH)
          {
            enumValue = CountryCode::TV;
            return true;
          }
          else if (hashCode == TW_HASH)
          {
            enumValue = CountryCode::TW;
            return true;
          }
          else if (hashCode == TZ_HASH)
          {
            enumValue = CountryCode::TZ;
            return true;
          }
          else if (hashCode == UA_HASH)
          {
            enumValue = CountryCode::UA;
            return true;
          }
          else if (hashCode == UG_HASH)
          {
            enumValue = CountryCode::UG;
            return true;
          }
          else if (hashCode == US_HASH)
          {
            enumValue = CountryCode::US;
            return true;
          }
          else if (hashCode == UY_HASH)
          {
            enumValue = CountryCode::UY;
            return true;
          }
          else if (hashCode == UZ_HASH)
          {
            enumValue = CountryCode::UZ;
            return true;
          }
          else if (hashCode == VA_HASH)
          {
            enumValue = CountryCode::VA;
            return true;
          }
          else if (hashCode == VC_HASH)
          {
            enumValue = CountryCode::VC;
            return true;
          }
          else if (hashCode == VE_HASH)
          {
            enumValue = CountryCode::VE;
            return true;
          }
          else if (hashCode == VG_HASH)
          {
            enumValue = CountryCode::VG;
            return true;
          }
          else if (hashCode == VI_HASH)
          {
            enumValue = CountryCode::VI;
            return true;
          }
          else if (hashCode == VN_HASH)
          {
            enumValue = CountryCode::VN;
            return true;
          }
          else if (hashCode == VU_HASH)
          {
            enumValue = CountryCode::VU;
            return true;
          }
          else if (hashCode == WF_HASH)
          {
            enumValue = CountryCode::WF;
            return true;
          }
          else if (hashCode == WS_HASH)
          {
            enumValue = CountryCode::WS;
            return true;
          }
          else if (hashCode == YE_HASH)
          {
            enumValue = CountryCode::YE;
            return true;
          }
          else if (hashCode == YT_HASH)
          {
            enumValue = CountryCode::YT;
            return true;
          }
          else if (hashCode == ZA_HASH)
          {
            enumValue = CountryCode::ZA;
            return true;
          }
          else if (hashCode == ZM_HASH)
          {
            enumValue = CountryCode::ZM;
            return true;
          }
          else if (hashCode == ZW_HASH)
          {
            enumValue = CountryCode::ZW;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(CountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CountryCode::AD:
            value = "AD";
            return true;
          case CountryCode::AE:
            value = "AE";
            return true;
          case CountryCode::AF:
            value = "AF";
            return true;
          case CountryCode::AG:
            value = "AG";
            return true;
          case CountryCode::AI:
            value = "AI";
            return true;
          case CountryCode::AL:
            value = "AL";
            return true;
          case CountryCode::AM:
            value = "AM";
            return true;
          case CountryCode::AN:
            value = "AN";
            return true;
          case CountryCode::AO:
            value = "AO";
            return true;
          case CountryCode::AQ:
            value = "AQ";
            return true;
          case CountryCode::AR:
            value = "AR";
            return true;
          case CountryCode::AS:
            value = "AS";
            return true;
          case CountryCode::AT:
            value = "AT";
            return true;
          case CountryCode::AU:
            value = "AU";
            return true;
          case CountryCode::AW:
            value = "AW";
            return true;
          case CountryCode::AZ:
            value = "AZ";
            return true;
          case CountryCode::BA:
            value = "BA";
            return true;
          case CountryCode::BB:
            value = "BB";
            return true;
          case CountryCode::BD:
            value = "BD";
            return true;
          case CountryCode::BE:
            value = "BE";
            return true;
          case CountryCode::BF:
            value = "BF";
            return true;
          case CountryCode::BG:
            value = "BG";
            return true;
          case CountryCode::BH:
            value = "BH";
            return true;
          case CountryCode::BI:
            value = "BI";
            return true;
          case CountryCode::BJ:
            value = "BJ";
            return true;
          case CountryCode::BL:
            value = "BL";
            return true;
          case CountryCode::BM:
            value = "BM";
            return true;
          case CountryCode::BN:
            value = "BN";
            return true;
          case CountryCode::BO:
            value = "BO";
            return true;
          case CountryCode::BR:
            value = "BR";
            return true;
          case CountryCode::BS:
            value = "BS";
            return true;
          case CountryCode::BT:
            value = "BT";
            return true;
          case CountryCode::BW:
            value = "BW";
            return true;
          case CountryCode::BY:
            value = "BY";
            return true;
          case CountryCode::BZ:
            value = "BZ";
            return true;
          case CountryCode::CA:
            value = "CA";
            return true;
          case CountryCode::CC:
            value = "CC";
            return true;
          case CountryCode::CD:
            value = "CD";
            return true;
          case CountryCode::CF:
            value = "CF";
            return true;
          case CountryCode::CG:
            value = "CG";
            return true;
          case CountryCode::CH:
            value = "CH";
            return true;
          case CountryCode::CI:
            value = "CI";
            return true;
          case CountryCode::CK:
            value = "CK";
            return true;
          case CountryCode::CL:
            value = "CL";
            return true;
          case CountryCode::CM:
            value = "CM";
            return true;
          case CountryCode::CN:
            value = "CN";
            return true;
          case CountryCode::CO:
            value = "CO";
            return true;
          case CountryCode::CR:
            value = "CR";
            return true;
          case CountryCode::CU:
            value = "CU";
            return true;
          case CountryCode::CV:
            value = "CV";
            return true;
          case CountryCode::CX:
            value = "CX";
            return true;
          case CountryCode::CY:
            value = "CY";
            return true;
          case CountryCode::CZ:
            value = "CZ";
            return true;
          case CountryCode::DE:
            value = "DE";
            return true;
          case CountryCode::DJ:
            value = "DJ";
            return true;
          case CountryCode::DK:
            value = "DK";
            return true;
          case CountryCode::DM:
            value = "DM";
            return true;
          case CountryCode::DO:
            value = "DO";
            return true;
          case CountryCode::DZ:
            value = "DZ";
            return true;
          case CountryCode::EC:
            value = "EC";
            return true;
          case CountryCode::EE:
            value = "EE";
            return true;
          case CountryCode::EG:
            value = "EG";
            return true;
          case CountryCode::ER:
            value = "ER";
            return true;
          case CountryCode::ES:
            value = "ES";
            return true;
          case CountryCode::ET:
            value = "ET";
            return true;
          case CountryCode::FI:
            value = "FI";
            return true;
          case CountryCode::FJ:
            value = "FJ";
            return true;
          case CountryCode::FK:
            value = "FK";
            return true;
          case CountryCode::FM:
            value = "FM";
            return true;
          case CountryCode::FO:
            value = "FO";
            return true;
          case CountryCode::FR:
            value = "FR";
            return true;
          case CountryCode::GA:
            value = "GA";
            return true;
          case CountryCode::GB:
            value = "GB";
            return true;
          case CountryCode::GD:
            value = "GD";
            return true;
          case CountryCode::GE:
            value = "GE";
            return true;
          case CountryCode::GH:
            value = "GH";
            return true;
          case CountryCode::GI:
            value = "GI";
            return true;
          case CountryCode::GL:
            value = "GL";
            return true;
          case CountryCode::GM:
            value = "GM";
            return true;
          case CountryCode::GN:
            value = "GN";
            return true;
          case CountryCode::GQ:
            value = "GQ";
            return true;
          case CountryCode::GR:
            value = "GR";
            return true;
          case CountryCode::GT:
            value = "GT";
            return true;
          case CountryCode::GU:
            value = "GU";
            return true;
          case CountryCode::GW:
            value = "GW";
            return true;
          case CountryCode::GY:
            value = "GY";
            return true;
          case CountryCode::HK:
            value = "HK";
            return true;
          case CountryCode::HN:
            value = "HN";
            return true;
          case CountryCode::HR:
            value = "HR";
            return true;
          case CountryCode::HT:
            value = "HT";
            return true;
          case CountryCode::HU:
            value = "HU";
            return true;
          case CountryCode::ID:
            value = "ID";
            return true;
          case CountryCode::IE:
            value = "IE";
            return true;
          case CountryCode::IL:
            value = "IL";
            return true;
          case CountryCode::IM:
            value = "IM";
            return true;
          case CountryCode::IN:
            value = "IN";
            return true;
          case CountryCode::IQ:
            value = "IQ";
            return true;
          case CountryCode::IR:
            value = "IR";
            return true;
          case CountryCode::IS:
            value = "IS";
            return true;
          case CountryCode::IT:
            value = "IT";
            return true;
          case CountryCode::JM:
            value = "JM";
            return true;
          case CountryCode::JO:
            value = "JO";
            return true;
          case CountryCode::JP:
            value = "JP";
            return true;
          case CountryCode::KE:
            value = "KE";
            return true;
          case CountryCode::KG:
            value = "KG";
            return true;
          case CountryCode::KH:
            value = "KH";
            return true;
          case CountryCode::KI:
            value = "KI";
            return true;
          case CountryCode::KM:
            value = "KM";
            return true;
          case CountryCode::KN:
            value = "KN";
            return true;
          case CountryCode::KP:
            value = "KP";
            return true;
          case CountryCode::KR:
            value = "KR";
            return true;
          case CountryCode::KW:
            value = "KW";
            return true;
          case CountryCode::KY:
            value = "KY";
            return true;
          case CountryCode::KZ:
            value = "KZ";
            return true;
          case CountryCode::LA:
            value = "LA";
            return true;
          case CountryCode::LB:
            value = "LB";
            return true;
          case CountryCode::LC:
            value = "LC";
            return true;
          case CountryCode::LI:
            value = "LI";
            return true;
          case CountryCode::LK:
            value = "LK";
            return true;
          case CountryCode::LR:
            value = "LR";
            return true;
          case CountryCode::LS:
            value = "LS";
            return true;
          case CountryCode::LT:
            value = "LT";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(CountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CountryCode::LU:
            value = "LU";
            return true;
          case CountryCode::LV:
            value = "LV";
            return true;
          case CountryCode::LY:
            value = "LY";
            return true;
          case CountryCode::MA:
            value = "MA";
            return true;
          case CountryCode::MC:
            value = "MC";
            return true;
          case CountryCode::MD:
            value = "MD";
            return true;
          case CountryCode::ME:
            value = "ME";
            return true;
          case CountryCode::MF:
            value = "MF";
            return true;
          case CountryCode::MG:
            value = "MG";
            return true;
          case CountryCode::MH:
            value = "MH";
            return true;
          case CountryCode::MK:
            value = "MK";
            return true;
          case CountryCode::ML:
            value = "ML";
            return true;
          case CountryCode::MM:
            value = "MM";
            return true;
          case CountryCode::MN:
            value = "MN";
            return true;
          case CountryCode::MO:
            value = "MO";
            return true;
          case CountryCode::MP:
            value = "MP";
            return true;
          case CountryCode::MR:
            value = "MR";
            return true;
          case CountryCode::MS:
            value = "MS";
            return true;
          case CountryCode::MT:
            value = "MT";
            return true;
          case CountryCode::MU:
            value = "MU";
            return true;
          case CountryCode::MV:
            value = "MV";
            return true;
          case CountryCode::MW:
            value = "MW";
            return true;
          case CountryCode::MX:
            value = "MX";
            return true;
          case CountryCode::MY:
            value = "MY";
            return true;
          case CountryCode::MZ:
            value = "MZ";
            return true;
          case CountryCode::NA:
            value = "NA";
            return true;
          case CountryCode::NC:
            value = "NC";
            return true;
          case CountryCode::NE:
            value = "NE";
            return true;
          case CountryCode::NG:
            value = "NG";
            return true;
          case CountryCode::NI:
            value = "NI";
            return true;
          case CountryCode::NL:
            value = "NL";
            return true;
          case CountryCode::NO:
            value = "NO";
            return true;
          case CountryCode::NP:
            value = "NP";
            return true;
          case CountryCode::NR:
            value = "NR";
            return true;
          case CountryCode::NU:
            value = "NU";
            return true;
          case CountryCode::NZ:
            value = "NZ";
            return true;
          case CountryCode::OM:
            value = "OM";
            return true;
          case CountryCode::PA:
            value = "PA";
            return true;
          case CountryCode::PE:
            value = "PE";
            return true;
          case CountryCode::PF:
            value = "PF";
            return true;
          case CountryCode::PG:
            value = "PG";
            return true;
          case CountryCode::PH:
            value = "PH";
            return true;
          case CountryCode::PK:
            value = "PK";
            return true;
          case CountryCode::PL:
            value = "PL";
            return true;
          case CountryCode::PM:
            value = "PM";
            return true;
          case CountryCode::PN:
            value = "PN";
            return true;
          case CountryCode::PR:
            value = "PR";
            return true;
          case CountryCode::PT:
            value = "PT";
            return true;
          case CountryCode::PW:
            value = "PW";
            return true;
          case CountryCode::PY:
            value = "PY";
            return true;
          case CountryCode::QA:
            value = "QA";
            return true;
          case CountryCode::RO:
            value = "RO";
            return true;
          case CountryCode::RS:
            value = "RS";
            return true;
          case CountryCode::RU:
            value = "RU";
            return true;
          case CountryCode::RW:
            value = "RW";
            return true;
          case CountryCode::SA:
            value = "SA";
            return true;
          case CountryCode::SB:
            value = "SB";
            return true;
          case CountryCode::SC:
            value = "SC";
            return true;
          case CountryCode::SD:
            value = "SD";
            return true;
          case CountryCode::SE:
            value = "SE";
            return true;
          case CountryCode::SG:
            value = "SG";
            return true;
          case CountryCode::SH:
            value = "SH";
            return true;
          case CountryCode::SI:
            value = "SI";
            return true;
          case CountryCode::SK:
            value = "SK";
            return true;
          case CountryCode::SL:
            value = "SL";
            return true;
          case CountryCode::SM:
            value = "SM";
            return true;
          case CountryCode::SN:
            value = "SN";
            return true;
          case CountryCode::SO:
            value = "SO";
            return true;
          case CountryCode::SR:
            value = "SR";
            return true;
          case CountryCode::ST:
            value = "ST";
            return true;
          case CountryCode::SV:
            value = "SV";
            return true;
          case CountryCode::SY:
            value = "SY";
            return true;
          case CountryCode::SZ:
            value = "SZ";
            return true;
          case CountryCode::TC:
            value = "TC";
            return true;
          case CountryCode::TD:
            value = "TD";
            return true;
          case CountryCode::TG:
            value = "TG";
            return true;
          case CountryCode::TH:
            value = "TH";
            return true;
          case CountryCode::TJ:
            value = "TJ";
            return true;
          case CountryCode::TK:
            value = "TK";
            return true;
          case CountryCode::TL:
            value = "TL";
            return true;
          case CountryCode::TM:
            value = "TM";
            return true;
          case CountryCode::TN:
            value = "TN";
            return true;
          case CountryCode::TO:
            value = "TO";
            return true;
          case CountryCode::TR:
            value = "TR";
            return true;
          case CountryCode::TT:
            value = "TT";
            return true;
          case CountryCode::TV:
            value = "TV";
            return true;
          case CountryCode::TW:
            value = "TW";
            return true;
          case CountryCode::TZ:
            value = "TZ";
            return true;
          case CountryCode::UA:
            value = "UA";
            return true;
          case CountryCode::UG:
            value = "UG";
            return true;
          case CountryCode::US:
            value = "US";
            return true;
          case CountryCode::UY:
            value = "UY";
            return true;
          case CountryCode::UZ:
            value = "UZ";
            return true;
          case CountryCode::VA:
            value = "VA";
            return true;
          case CountryCode::VC:
            value = "VC";
            return true;
          case CountryCode::VE:
            value = "VE";
            return true;
          case CountryCode::VG:
            value = "VG";
            return true;
          case CountryCode::VI:
            value = "VI";
            return true;
          case CountryCode::VN:
            value = "VN";
            return true;
          case CountryCode::VU:
            value = "VU";
            return true;
          case CountryCode::WF:
            value = "WF";
            return true;
          case CountryCode::WS:
            value = "WS";
            return true;
          case CountryCode::YE:
            value = "YE";
            return true;
          case CountryCode::YT:
            value = "YT";
            return true;
          case CountryCode::ZA:
            value = "ZA";
            return true;
          case CountryCode::ZM:
            value = "ZM";
            return true;
          case CountryCode::ZW:
            value = "ZW";
            return true;
          default:
            return false;
          }
        }

        CountryCode GetCountryCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          CountryCode enumValue;
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
            return static_cast<CountryCode>(hashCode);
          }

          return CountryCode::NOT_SET;
        }

        Aws::String GetNameForCountryCode(CountryCode enumValue)
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

          return "";
        }

      } // namespace CountryCodeMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
