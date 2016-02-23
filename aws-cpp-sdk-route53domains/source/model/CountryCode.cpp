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

using namespace Aws::Utils;

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

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
namespace CountryCodeMapper
{
CountryCode GetCountryCodeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == AD_HASH)
  {
    return CountryCode::AD;
  }
  else if (hashCode == AE_HASH)
  {
    return CountryCode::AE;
  }
  else if (hashCode == AF_HASH)
  {
    return CountryCode::AF;
  }
  else if (hashCode == AG_HASH)
  {
    return CountryCode::AG;
  }
  else if (hashCode == AI_HASH)
  {
    return CountryCode::AI;
  }
  else if (hashCode == AL_HASH)
  {
    return CountryCode::AL;
  }
  else if (hashCode == AM_HASH)
  {
    return CountryCode::AM;
  }
  else if (hashCode == AN_HASH)
  {
    return CountryCode::AN;
  }
  else if (hashCode == AO_HASH)
  {
    return CountryCode::AO;
  }
  else if (hashCode == AQ_HASH)
  {
    return CountryCode::AQ;
  }
  else if (hashCode == AR_HASH)
  {
    return CountryCode::AR;
  }
  else if (hashCode == AS_HASH)
  {
    return CountryCode::AS;
  }
  else if (hashCode == AT_HASH)
  {
    return CountryCode::AT;
  }
  else if (hashCode == AU_HASH)
  {
    return CountryCode::AU;
  }
  else if (hashCode == AW_HASH)
  {
    return CountryCode::AW;
  }
  else if (hashCode == AZ_HASH)
  {
    return CountryCode::AZ;
  }
  else if (hashCode == BA_HASH)
  {
    return CountryCode::BA;
  }
  else if (hashCode == BB_HASH)
  {
    return CountryCode::BB;
  }
  else if (hashCode == BD_HASH)
  {
    return CountryCode::BD;
  }
  else if (hashCode == BE_HASH)
  {
    return CountryCode::BE;
  }
  else if (hashCode == BF_HASH)
  {
    return CountryCode::BF;
  }
  else if (hashCode == BG_HASH)
  {
    return CountryCode::BG;
  }
  else if (hashCode == BH_HASH)
  {
    return CountryCode::BH;
  }
  else if (hashCode == BI_HASH)
  {
    return CountryCode::BI;
  }
  else if (hashCode == BJ_HASH)
  {
    return CountryCode::BJ;
  }
  else if (hashCode == BL_HASH)
  {
    return CountryCode::BL;
  }
  else if (hashCode == BM_HASH)
  {
    return CountryCode::BM;
  }
  else if (hashCode == BN_HASH)
  {
    return CountryCode::BN;
  }
  else if (hashCode == BO_HASH)
  {
    return CountryCode::BO;
  }
  else if (hashCode == BR_HASH)
  {
    return CountryCode::BR;
  }
  else if (hashCode == BS_HASH)
  {
    return CountryCode::BS;
  }
  else if (hashCode == BT_HASH)
  {
    return CountryCode::BT;
  }
  else if (hashCode == BW_HASH)
  {
    return CountryCode::BW;
  }
  else if (hashCode == BY_HASH)
  {
    return CountryCode::BY;
  }
  else if (hashCode == BZ_HASH)
  {
    return CountryCode::BZ;
  }
  else if (hashCode == CA_HASH)
  {
    return CountryCode::CA;
  }
  else if (hashCode == CC_HASH)
  {
    return CountryCode::CC;
  }
  else if (hashCode == CD_HASH)
  {
    return CountryCode::CD;
  }
  else if (hashCode == CF_HASH)
  {
    return CountryCode::CF;
  }
  else if (hashCode == CG_HASH)
  {
    return CountryCode::CG;
  }
  else if (hashCode == CH_HASH)
  {
    return CountryCode::CH;
  }
  else if (hashCode == CI_HASH)
  {
    return CountryCode::CI;
  }
  else if (hashCode == CK_HASH)
  {
    return CountryCode::CK;
  }
  else if (hashCode == CL_HASH)
  {
    return CountryCode::CL;
  }
  else if (hashCode == CM_HASH)
  {
    return CountryCode::CM;
  }
  else if (hashCode == CN_HASH)
  {
    return CountryCode::CN;
  }
  else if (hashCode == CO_HASH)
  {
    return CountryCode::CO;
  }
  else if (hashCode == CR_HASH)
  {
    return CountryCode::CR;
  }
  else if (hashCode == CU_HASH)
  {
    return CountryCode::CU;
  }
  else if (hashCode == CV_HASH)
  {
    return CountryCode::CV;
  }
  else if (hashCode == CX_HASH)
  {
    return CountryCode::CX;
  }
  else if (hashCode == CY_HASH)
  {
    return CountryCode::CY;
  }
  else if (hashCode == CZ_HASH)
  {
    return CountryCode::CZ;
  }
  else if (hashCode == DE_HASH)
  {
    return CountryCode::DE;
  }
  else if (hashCode == DJ_HASH)
  {
    return CountryCode::DJ;
  }
  else if (hashCode == DK_HASH)
  {
    return CountryCode::DK;
  }
  else if (hashCode == DM_HASH)
  {
    return CountryCode::DM;
  }
  else if (hashCode == DO_HASH)
  {
    return CountryCode::DO;
  }
  else if (hashCode == DZ_HASH)
  {
    return CountryCode::DZ;
  }
  else if (hashCode == EC_HASH)
  {
    return CountryCode::EC;
  }
  else if (hashCode == EE_HASH)
  {
    return CountryCode::EE;
  }
  else if (hashCode == EG_HASH)
  {
    return CountryCode::EG;
  }
  else if (hashCode == ER_HASH)
  {
    return CountryCode::ER;
  }
  else if (hashCode == ES_HASH)
  {
    return CountryCode::ES;
  }
  else if (hashCode == ET_HASH)
  {
    return CountryCode::ET;
  }
  else if (hashCode == FI_HASH)
  {
    return CountryCode::FI;
  }
  else if (hashCode == FJ_HASH)
  {
    return CountryCode::FJ;
  }
  else if (hashCode == FK_HASH)
  {
    return CountryCode::FK;
  }
  else if (hashCode == FM_HASH)
  {
    return CountryCode::FM;
  }
  else if (hashCode == FO_HASH)
  {
    return CountryCode::FO;
  }
  else if (hashCode == FR_HASH)
  {
    return CountryCode::FR;
  }
  else if (hashCode == GA_HASH)
  {
    return CountryCode::GA;
  }
  else if (hashCode == GB_HASH)
  {
    return CountryCode::GB;
  }
  else if (hashCode == GD_HASH)
  {
    return CountryCode::GD;
  }
  else if (hashCode == GE_HASH)
  {
    return CountryCode::GE;
  }
  else if (hashCode == GH_HASH)
  {
    return CountryCode::GH;
  }
  else if (hashCode == GI_HASH)
  {
    return CountryCode::GI;
  }
  else if (hashCode == GL_HASH)
  {
    return CountryCode::GL;
  }
  else if (hashCode == GM_HASH)
  {
    return CountryCode::GM;
  }
  else if (hashCode == GN_HASH)
  {
    return CountryCode::GN;
  }
  else if (hashCode == GQ_HASH)
  {
    return CountryCode::GQ;
  }
  else if (hashCode == GR_HASH)
  {
    return CountryCode::GR;
  }
  else if (hashCode == GT_HASH)
  {
    return CountryCode::GT;
  }
  else if (hashCode == GU_HASH)
  {
    return CountryCode::GU;
  }
  else if (hashCode == GW_HASH)
  {
    return CountryCode::GW;
  }
  else if (hashCode == GY_HASH)
  {
    return CountryCode::GY;
  }
  else if (hashCode == HK_HASH)
  {
    return CountryCode::HK;
  }
  else if (hashCode == HN_HASH)
  {
    return CountryCode::HN;
  }
  else if (hashCode == HR_HASH)
  {
    return CountryCode::HR;
  }
  else if (hashCode == HT_HASH)
  {
    return CountryCode::HT;
  }
  else if (hashCode == HU_HASH)
  {
    return CountryCode::HU;
  }
  else if (hashCode == ID_HASH)
  {
    return CountryCode::ID;
  }
  else if (hashCode == IE_HASH)
  {
    return CountryCode::IE;
  }
  else if (hashCode == IL_HASH)
  {
    return CountryCode::IL;
  }
  else if (hashCode == IM_HASH)
  {
    return CountryCode::IM;
  }
  else if (hashCode == IN_HASH)
  {
    return CountryCode::IN;
  }
  else if (hashCode == IQ_HASH)
  {
    return CountryCode::IQ;
  }
  else if (hashCode == IR_HASH)
  {
    return CountryCode::IR;
  }
  else if (hashCode == IS_HASH)
  {
    return CountryCode::IS;
  }
  else if (hashCode == IT_HASH)
  {
    return CountryCode::IT;
  }
  else if (hashCode == JM_HASH)
  {
    return CountryCode::JM;
  }
  else if (hashCode == JO_HASH)
  {
    return CountryCode::JO;
  }
  else if (hashCode == JP_HASH)
  {
    return CountryCode::JP;
  }
  else if (hashCode == KE_HASH)
  {
    return CountryCode::KE;
  }
  else if (hashCode == KG_HASH)
  {
    return CountryCode::KG;
  }
  else if (hashCode == KH_HASH)
  {
    return CountryCode::KH;
  }
  else if (hashCode == KI_HASH)
  {
    return CountryCode::KI;
  }
  else if (hashCode == KM_HASH)
  {
    return CountryCode::KM;
  }
  else if (hashCode == KN_HASH)
  {
    return CountryCode::KN;
  }
  else if (hashCode == KP_HASH)
  {
    return CountryCode::KP;
  }
  else if (hashCode == KR_HASH)
  {
    return CountryCode::KR;
  }
  else if (hashCode == KW_HASH)
  {
    return CountryCode::KW;
  }
  else if (hashCode == KY_HASH)
  {
    return CountryCode::KY;
  }
  else if (hashCode == KZ_HASH)
  {
    return CountryCode::KZ;
  }
  else if (hashCode == LA_HASH)
  {
    return CountryCode::LA;
  }
  else if (hashCode == LB_HASH)
  {
    return CountryCode::LB;
  }
  else if (hashCode == LC_HASH)
  {
    return CountryCode::LC;
  }
  else if (hashCode == LI_HASH)
  {
    return CountryCode::LI;
  }
  else if (hashCode == LK_HASH)
  {
    return CountryCode::LK;
  }
  else if (hashCode == LR_HASH)
  {
    return CountryCode::LR;
  }
  else if (hashCode == LS_HASH)
  {
    return CountryCode::LS;
  }
  else if (hashCode == LT_HASH)
  {
    return CountryCode::LT;
  }
  else if (hashCode == LU_HASH)
  {
    return CountryCode::LU;
  }
  else if (hashCode == LV_HASH)
  {
    return CountryCode::LV;
  }
  else if (hashCode == LY_HASH)
  {
    return CountryCode::LY;
  }
  else if (hashCode == MA_HASH)
  {
    return CountryCode::MA;
  }
  else if (hashCode == MC_HASH)
  {
    return CountryCode::MC;
  }
  else if (hashCode == MD_HASH)
  {
    return CountryCode::MD;
  }
  else if (hashCode == ME_HASH)
  {
    return CountryCode::ME;
  }
  else if (hashCode == MF_HASH)
  {
    return CountryCode::MF;
  }
  else if (hashCode == MG_HASH)
  {
    return CountryCode::MG;
  }
  else if (hashCode == MH_HASH)
  {
    return CountryCode::MH;
  }
  else if (hashCode == MK_HASH)
  {
    return CountryCode::MK;
  }
  else if (hashCode == ML_HASH)
  {
    return CountryCode::ML;
  }
  else if (hashCode == MM_HASH)
  {
    return CountryCode::MM;
  }
  else if (hashCode == MN_HASH)
  {
    return CountryCode::MN;
  }
  else if (hashCode == MO_HASH)
  {
    return CountryCode::MO;
  }
  else if (hashCode == MP_HASH)
  {
    return CountryCode::MP;
  }
  else if (hashCode == MR_HASH)
  {
    return CountryCode::MR;
  }
  else if (hashCode == MS_HASH)
  {
    return CountryCode::MS;
  }
  else if (hashCode == MT_HASH)
  {
    return CountryCode::MT;
  }
  else if (hashCode == MU_HASH)
  {
    return CountryCode::MU;
  }
  else if (hashCode == MV_HASH)
  {
    return CountryCode::MV;
  }
  else if (hashCode == MW_HASH)
  {
    return CountryCode::MW;
  }
  else if (hashCode == MX_HASH)
  {
    return CountryCode::MX;
  }
  else if (hashCode == MY_HASH)
  {
    return CountryCode::MY;
  }
  else if (hashCode == MZ_HASH)
  {
    return CountryCode::MZ;
  }
  else if (hashCode == NA_HASH)
  {
    return CountryCode::NA;
  }
  else if (hashCode == NC_HASH)
  {
    return CountryCode::NC;
  }
  else if (hashCode == NE_HASH)
  {
    return CountryCode::NE;
  }
  else if (hashCode == NG_HASH)
  {
    return CountryCode::NG;
  }
  else if (hashCode == NI_HASH)
  {
    return CountryCode::NI;
  }
  else if (hashCode == NL_HASH)
  {
    return CountryCode::NL;
  }
  else if (hashCode == NO_HASH)
  {
    return CountryCode::NO;
  }
  else if (hashCode == NP_HASH)
  {
    return CountryCode::NP;
  }
  else if (hashCode == NR_HASH)
  {
    return CountryCode::NR;
  }
  else if (hashCode == NU_HASH)
  {
    return CountryCode::NU;
  }
  else if (hashCode == NZ_HASH)
  {
    return CountryCode::NZ;
  }
  else if (hashCode == OM_HASH)
  {
    return CountryCode::OM;
  }
  else if (hashCode == PA_HASH)
  {
    return CountryCode::PA;
  }
  else if (hashCode == PE_HASH)
  {
    return CountryCode::PE;
  }
  else if (hashCode == PF_HASH)
  {
    return CountryCode::PF;
  }
  else if (hashCode == PG_HASH)
  {
    return CountryCode::PG;
  }
  else if (hashCode == PH_HASH)
  {
    return CountryCode::PH;
  }
  else if (hashCode == PK_HASH)
  {
    return CountryCode::PK;
  }
  else if (hashCode == PL_HASH)
  {
    return CountryCode::PL;
  }
  else if (hashCode == PM_HASH)
  {
    return CountryCode::PM;
  }
  else if (hashCode == PN_HASH)
  {
    return CountryCode::PN;
  }
  else if (hashCode == PR_HASH)
  {
    return CountryCode::PR;
  }
  else if (hashCode == PT_HASH)
  {
    return CountryCode::PT;
  }
  else if (hashCode == PW_HASH)
  {
    return CountryCode::PW;
  }
  else if (hashCode == PY_HASH)
  {
    return CountryCode::PY;
  }
  else if (hashCode == QA_HASH)
  {
    return CountryCode::QA;
  }
  else if (hashCode == RO_HASH)
  {
    return CountryCode::RO;
  }
  else if (hashCode == RS_HASH)
  {
    return CountryCode::RS;
  }
  else if (hashCode == RU_HASH)
  {
    return CountryCode::RU;
  }
  else if (hashCode == RW_HASH)
  {
    return CountryCode::RW;
  }
  else if (hashCode == SA_HASH)
  {
    return CountryCode::SA;
  }
  else if (hashCode == SB_HASH)
  {
    return CountryCode::SB;
  }
  else if (hashCode == SC_HASH)
  {
    return CountryCode::SC;
  }
  else if (hashCode == SD_HASH)
  {
    return CountryCode::SD;
  }
  else if (hashCode == SE_HASH)
  {
    return CountryCode::SE;
  }
  else if (hashCode == SG_HASH)
  {
    return CountryCode::SG;
  }
  else if (hashCode == SH_HASH)
  {
    return CountryCode::SH;
  }
  else if (hashCode == SI_HASH)
  {
    return CountryCode::SI;
  }
  else if (hashCode == SK_HASH)
  {
    return CountryCode::SK;
  }
  else if (hashCode == SL_HASH)
  {
    return CountryCode::SL;
  }
  else if (hashCode == SM_HASH)
  {
    return CountryCode::SM;
  }
  else if (hashCode == SN_HASH)
  {
    return CountryCode::SN;
  }
  else if (hashCode == SO_HASH)
  {
    return CountryCode::SO;
  }
  else if (hashCode == SR_HASH)
  {
    return CountryCode::SR;
  }
  else if (hashCode == ST_HASH)
  {
    return CountryCode::ST;
  }
  else if (hashCode == SV_HASH)
  {
    return CountryCode::SV;
  }
  else if (hashCode == SY_HASH)
  {
    return CountryCode::SY;
  }
  else if (hashCode == SZ_HASH)
  {
    return CountryCode::SZ;
  }
  else if (hashCode == TC_HASH)
  {
    return CountryCode::TC;
  }
  else if (hashCode == TD_HASH)
  {
    return CountryCode::TD;
  }
  else if (hashCode == TG_HASH)
  {
    return CountryCode::TG;
  }
  else if (hashCode == TH_HASH)
  {
    return CountryCode::TH;
  }
  else if (hashCode == TJ_HASH)
  {
    return CountryCode::TJ;
  }
  else if (hashCode == TK_HASH)
  {
    return CountryCode::TK;
  }
  else if (hashCode == TL_HASH)
  {
    return CountryCode::TL;
  }
  else if (hashCode == TM_HASH)
  {
    return CountryCode::TM;
  }
  else if (hashCode == TN_HASH)
  {
    return CountryCode::TN;
  }
  else if (hashCode == TO_HASH)
  {
    return CountryCode::TO;
  }
  else if (hashCode == TR_HASH)
  {
    return CountryCode::TR;
  }
  else if (hashCode == TT_HASH)
  {
    return CountryCode::TT;
  }
  else if (hashCode == TV_HASH)
  {
    return CountryCode::TV;
  }
  else if (hashCode == TW_HASH)
  {
    return CountryCode::TW;
  }
  else if (hashCode == TZ_HASH)
  {
    return CountryCode::TZ;
  }
  else if (hashCode == UA_HASH)
  {
    return CountryCode::UA;
  }
  else if (hashCode == UG_HASH)
  {
    return CountryCode::UG;
  }
  else if (hashCode == US_HASH)
  {
    return CountryCode::US;
  }
  else if (hashCode == UY_HASH)
  {
    return CountryCode::UY;
  }
  else if (hashCode == UZ_HASH)
  {
    return CountryCode::UZ;
  }
  else if (hashCode == VA_HASH)
  {
    return CountryCode::VA;
  }
  else if (hashCode == VC_HASH)
  {
    return CountryCode::VC;
  }
  else if (hashCode == VE_HASH)
  {
    return CountryCode::VE;
  }
  else if (hashCode == VG_HASH)
  {
    return CountryCode::VG;
  }
  else if (hashCode == VI_HASH)
  {
    return CountryCode::VI;
  }
  else if (hashCode == VN_HASH)
  {
    return CountryCode::VN;
  }
  else if (hashCode == VU_HASH)
  {
    return CountryCode::VU;
  }
  else if (hashCode == WF_HASH)
  {
    return CountryCode::WF;
  }
  else if (hashCode == WS_HASH)
  {
    return CountryCode::WS;
  }
  else if (hashCode == YE_HASH)
  {
    return CountryCode::YE;
  }
  else if (hashCode == YT_HASH)
  {
    return CountryCode::YT;
  }
  else if (hashCode == ZA_HASH)
  {
    return CountryCode::ZA;
  }
  else if (hashCode == ZM_HASH)
  {
    return CountryCode::ZM;
  }
  else if (hashCode == ZW_HASH)
  {
    return CountryCode::ZW;
  }

  return CountryCode::NOT_SET;
}

Aws::String GetNameForCountryCode(CountryCode value)
{
  switch(value)
  {
  case CountryCode::AD:
    return "AD";
  case CountryCode::AE:
    return "AE";
  case CountryCode::AF:
    return "AF";
  case CountryCode::AG:
    return "AG";
  case CountryCode::AI:
    return "AI";
  case CountryCode::AL:
    return "AL";
  case CountryCode::AM:
    return "AM";
  case CountryCode::AN:
    return "AN";
  case CountryCode::AO:
    return "AO";
  case CountryCode::AQ:
    return "AQ";
  case CountryCode::AR:
    return "AR";
  case CountryCode::AS:
    return "AS";
  case CountryCode::AT:
    return "AT";
  case CountryCode::AU:
    return "AU";
  case CountryCode::AW:
    return "AW";
  case CountryCode::AZ:
    return "AZ";
  case CountryCode::BA:
    return "BA";
  case CountryCode::BB:
    return "BB";
  case CountryCode::BD:
    return "BD";
  case CountryCode::BE:
    return "BE";
  case CountryCode::BF:
    return "BF";
  case CountryCode::BG:
    return "BG";
  case CountryCode::BH:
    return "BH";
  case CountryCode::BI:
    return "BI";
  case CountryCode::BJ:
    return "BJ";
  case CountryCode::BL:
    return "BL";
  case CountryCode::BM:
    return "BM";
  case CountryCode::BN:
    return "BN";
  case CountryCode::BO:
    return "BO";
  case CountryCode::BR:
    return "BR";
  case CountryCode::BS:
    return "BS";
  case CountryCode::BT:
    return "BT";
  case CountryCode::BW:
    return "BW";
  case CountryCode::BY:
    return "BY";
  case CountryCode::BZ:
    return "BZ";
  case CountryCode::CA:
    return "CA";
  case CountryCode::CC:
    return "CC";
  case CountryCode::CD:
    return "CD";
  case CountryCode::CF:
    return "CF";
  case CountryCode::CG:
    return "CG";
  case CountryCode::CH:
    return "CH";
  case CountryCode::CI:
    return "CI";
  case CountryCode::CK:
    return "CK";
  case CountryCode::CL:
    return "CL";
  case CountryCode::CM:
    return "CM";
  case CountryCode::CN:
    return "CN";
  case CountryCode::CO:
    return "CO";
  case CountryCode::CR:
    return "CR";
  case CountryCode::CU:
    return "CU";
  case CountryCode::CV:
    return "CV";
  case CountryCode::CX:
    return "CX";
  case CountryCode::CY:
    return "CY";
  case CountryCode::CZ:
    return "CZ";
  case CountryCode::DE:
    return "DE";
  case CountryCode::DJ:
    return "DJ";
  case CountryCode::DK:
    return "DK";
  case CountryCode::DM:
    return "DM";
  case CountryCode::DO:
    return "DO";
  case CountryCode::DZ:
    return "DZ";
  case CountryCode::EC:
    return "EC";
  case CountryCode::EE:
    return "EE";
  case CountryCode::EG:
    return "EG";
  case CountryCode::ER:
    return "ER";
  case CountryCode::ES:
    return "ES";
  case CountryCode::ET:
    return "ET";
  case CountryCode::FI:
    return "FI";
  case CountryCode::FJ:
    return "FJ";
  case CountryCode::FK:
    return "FK";
  case CountryCode::FM:
    return "FM";
  case CountryCode::FO:
    return "FO";
  case CountryCode::FR:
    return "FR";
  case CountryCode::GA:
    return "GA";
  case CountryCode::GB:
    return "GB";
  case CountryCode::GD:
    return "GD";
  case CountryCode::GE:
    return "GE";
  case CountryCode::GH:
    return "GH";
  case CountryCode::GI:
    return "GI";
  case CountryCode::GL:
    return "GL";
  case CountryCode::GM:
    return "GM";
  case CountryCode::GN:
    return "GN";
  case CountryCode::GQ:
    return "GQ";
  case CountryCode::GR:
    return "GR";
  case CountryCode::GT:
    return "GT";
  case CountryCode::GU:
    return "GU";
  case CountryCode::GW:
    return "GW";
  case CountryCode::GY:
    return "GY";
  case CountryCode::HK:
    return "HK";
  case CountryCode::HN:
    return "HN";
  case CountryCode::HR:
    return "HR";
  case CountryCode::HT:
    return "HT";
  case CountryCode::HU:
    return "HU";
  case CountryCode::ID:
    return "ID";
  case CountryCode::IE:
    return "IE";
  case CountryCode::IL:
    return "IL";
  case CountryCode::IM:
    return "IM";
  case CountryCode::IN:
    return "IN";
  case CountryCode::IQ:
    return "IQ";
  case CountryCode::IR:
    return "IR";
  case CountryCode::IS:
    return "IS";
  case CountryCode::IT:
    return "IT";
  case CountryCode::JM:
    return "JM";
  case CountryCode::JO:
    return "JO";
  case CountryCode::JP:
    return "JP";
  case CountryCode::KE:
    return "KE";
  case CountryCode::KG:
    return "KG";
  case CountryCode::KH:
    return "KH";
  case CountryCode::KI:
    return "KI";
  case CountryCode::KM:
    return "KM";
  case CountryCode::KN:
    return "KN";
  case CountryCode::KP:
    return "KP";
  case CountryCode::KR:
    return "KR";
  case CountryCode::KW:
    return "KW";
  case CountryCode::KY:
    return "KY";
  case CountryCode::KZ:
    return "KZ";
  case CountryCode::LA:
    return "LA";
  case CountryCode::LB:
    return "LB";
  case CountryCode::LC:
    return "LC";
  case CountryCode::LI:
    return "LI";
  case CountryCode::LK:
    return "LK";
  case CountryCode::LR:
    return "LR";
  case CountryCode::LS:
    return "LS";
  case CountryCode::LT:
    return "LT";
  case CountryCode::LU:
    return "LU";
  case CountryCode::LV:
    return "LV";
  case CountryCode::LY:
    return "LY";
  case CountryCode::MA:
    return "MA";
  case CountryCode::MC:
    return "MC";
  case CountryCode::MD:
    return "MD";
  case CountryCode::ME:
    return "ME";
  case CountryCode::MF:
    return "MF";
  case CountryCode::MG:
    return "MG";
  case CountryCode::MH:
    return "MH";
  case CountryCode::MK:
    return "MK";
  case CountryCode::ML:
    return "ML";
  case CountryCode::MM:
    return "MM";
  case CountryCode::MN:
    return "MN";
  case CountryCode::MO:
    return "MO";
  case CountryCode::MP:
    return "MP";
  case CountryCode::MR:
    return "MR";
  case CountryCode::MS:
    return "MS";
  case CountryCode::MT:
    return "MT";
  case CountryCode::MU:
    return "MU";
  case CountryCode::MV:
    return "MV";
  case CountryCode::MW:
    return "MW";
  case CountryCode::MX:
    return "MX";
  case CountryCode::MY:
    return "MY";
  case CountryCode::MZ:
    return "MZ";
  case CountryCode::NA:
    return "NA";
  case CountryCode::NC:
    return "NC";
  case CountryCode::NE:
    return "NE";
  case CountryCode::NG:
    return "NG";
  case CountryCode::NI:
    return "NI";
  case CountryCode::NL:
    return "NL";
  case CountryCode::NO:
    return "NO";
  case CountryCode::NP:
    return "NP";
  case CountryCode::NR:
    return "NR";
  case CountryCode::NU:
    return "NU";
  case CountryCode::NZ:
    return "NZ";
  case CountryCode::OM:
    return "OM";
  case CountryCode::PA:
    return "PA";
  case CountryCode::PE:
    return "PE";
  case CountryCode::PF:
    return "PF";
  case CountryCode::PG:
    return "PG";
  case CountryCode::PH:
    return "PH";
  case CountryCode::PK:
    return "PK";
  case CountryCode::PL:
    return "PL";
  case CountryCode::PM:
    return "PM";
  case CountryCode::PN:
    return "PN";
  case CountryCode::PR:
    return "PR";
  case CountryCode::PT:
    return "PT";
  case CountryCode::PW:
    return "PW";
  case CountryCode::PY:
    return "PY";
  case CountryCode::QA:
    return "QA";
  case CountryCode::RO:
    return "RO";
  case CountryCode::RS:
    return "RS";
  case CountryCode::RU:
    return "RU";
  case CountryCode::RW:
    return "RW";
  case CountryCode::SA:
    return "SA";
  case CountryCode::SB:
    return "SB";
  case CountryCode::SC:
    return "SC";
  case CountryCode::SD:
    return "SD";
  case CountryCode::SE:
    return "SE";
  case CountryCode::SG:
    return "SG";
  case CountryCode::SH:
    return "SH";
  case CountryCode::SI:
    return "SI";
  case CountryCode::SK:
    return "SK";
  case CountryCode::SL:
    return "SL";
  case CountryCode::SM:
    return "SM";
  case CountryCode::SN:
    return "SN";
  case CountryCode::SO:
    return "SO";
  case CountryCode::SR:
    return "SR";
  case CountryCode::ST:
    return "ST";
  case CountryCode::SV:
    return "SV";
  case CountryCode::SY:
    return "SY";
  case CountryCode::SZ:
    return "SZ";
  case CountryCode::TC:
    return "TC";
  case CountryCode::TD:
    return "TD";
  case CountryCode::TG:
    return "TG";
  case CountryCode::TH:
    return "TH";
  case CountryCode::TJ:
    return "TJ";
  case CountryCode::TK:
    return "TK";
  case CountryCode::TL:
    return "TL";
  case CountryCode::TM:
    return "TM";
  case CountryCode::TN:
    return "TN";
  case CountryCode::TO:
    return "TO";
  case CountryCode::TR:
    return "TR";
  case CountryCode::TT:
    return "TT";
  case CountryCode::TV:
    return "TV";
  case CountryCode::TW:
    return "TW";
  case CountryCode::TZ:
    return "TZ";
  case CountryCode::UA:
    return "UA";
  case CountryCode::UG:
    return "UG";
  case CountryCode::US:
    return "US";
  case CountryCode::UY:
    return "UY";
  case CountryCode::UZ:
    return "UZ";
  case CountryCode::VA:
    return "VA";
  case CountryCode::VC:
    return "VC";
  case CountryCode::VE:
    return "VE";
  case CountryCode::VG:
    return "VG";
  case CountryCode::VI:
    return "VI";
  case CountryCode::VN:
    return "VN";
  case CountryCode::VU:
    return "VU";
  case CountryCode::WF:
    return "WF";
  case CountryCode::WS:
    return "WS";
  case CountryCode::YE:
    return "YE";
  case CountryCode::YT:
    return "YT";
  case CountryCode::ZA:
    return "ZA";
  case CountryCode::ZM:
    return "ZM";
  case CountryCode::ZW:
    return "ZW";
  default:
    return "";
  }
}

} // namespace CountryCodeMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
