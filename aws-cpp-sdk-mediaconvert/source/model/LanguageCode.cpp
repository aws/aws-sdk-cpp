/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int ENG_HASH = HashingUtils::HashString("ENG");
        static const int SPA_HASH = HashingUtils::HashString("SPA");
        static const int FRA_HASH = HashingUtils::HashString("FRA");
        static const int DEU_HASH = HashingUtils::HashString("DEU");
        static const int GER_HASH = HashingUtils::HashString("GER");
        static const int ZHO_HASH = HashingUtils::HashString("ZHO");
        static const int ARA_HASH = HashingUtils::HashString("ARA");
        static const int HIN_HASH = HashingUtils::HashString("HIN");
        static const int JPN_HASH = HashingUtils::HashString("JPN");
        static const int RUS_HASH = HashingUtils::HashString("RUS");
        static const int POR_HASH = HashingUtils::HashString("POR");
        static const int ITA_HASH = HashingUtils::HashString("ITA");
        static const int URD_HASH = HashingUtils::HashString("URD");
        static const int VIE_HASH = HashingUtils::HashString("VIE");
        static const int KOR_HASH = HashingUtils::HashString("KOR");
        static const int PAN_HASH = HashingUtils::HashString("PAN");
        static const int ABK_HASH = HashingUtils::HashString("ABK");
        static const int AAR_HASH = HashingUtils::HashString("AAR");
        static const int AFR_HASH = HashingUtils::HashString("AFR");
        static const int AKA_HASH = HashingUtils::HashString("AKA");
        static const int SQI_HASH = HashingUtils::HashString("SQI");
        static const int AMH_HASH = HashingUtils::HashString("AMH");
        static const int ARG_HASH = HashingUtils::HashString("ARG");
        static const int HYE_HASH = HashingUtils::HashString("HYE");
        static const int ASM_HASH = HashingUtils::HashString("ASM");
        static const int AVA_HASH = HashingUtils::HashString("AVA");
        static const int AVE_HASH = HashingUtils::HashString("AVE");
        static const int AYM_HASH = HashingUtils::HashString("AYM");
        static const int AZE_HASH = HashingUtils::HashString("AZE");
        static const int BAM_HASH = HashingUtils::HashString("BAM");
        static const int BAK_HASH = HashingUtils::HashString("BAK");
        static const int EUS_HASH = HashingUtils::HashString("EUS");
        static const int BEL_HASH = HashingUtils::HashString("BEL");
        static const int BEN_HASH = HashingUtils::HashString("BEN");
        static const int BIH_HASH = HashingUtils::HashString("BIH");
        static const int BIS_HASH = HashingUtils::HashString("BIS");
        static const int BOS_HASH = HashingUtils::HashString("BOS");
        static const int BRE_HASH = HashingUtils::HashString("BRE");
        static const int BUL_HASH = HashingUtils::HashString("BUL");
        static const int MYA_HASH = HashingUtils::HashString("MYA");
        static const int CAT_HASH = HashingUtils::HashString("CAT");
        static const int KHM_HASH = HashingUtils::HashString("KHM");
        static const int CHA_HASH = HashingUtils::HashString("CHA");
        static const int CHE_HASH = HashingUtils::HashString("CHE");
        static const int NYA_HASH = HashingUtils::HashString("NYA");
        static const int CHU_HASH = HashingUtils::HashString("CHU");
        static const int CHV_HASH = HashingUtils::HashString("CHV");
        static const int COR_HASH = HashingUtils::HashString("COR");
        static const int COS_HASH = HashingUtils::HashString("COS");
        static const int CRE_HASH = HashingUtils::HashString("CRE");
        static const int HRV_HASH = HashingUtils::HashString("HRV");
        static const int CES_HASH = HashingUtils::HashString("CES");
        static const int DAN_HASH = HashingUtils::HashString("DAN");
        static const int DIV_HASH = HashingUtils::HashString("DIV");
        static const int NLD_HASH = HashingUtils::HashString("NLD");
        static const int DZO_HASH = HashingUtils::HashString("DZO");
        static const int ENM_HASH = HashingUtils::HashString("ENM");
        static const int EPO_HASH = HashingUtils::HashString("EPO");
        static const int EST_HASH = HashingUtils::HashString("EST");
        static const int EWE_HASH = HashingUtils::HashString("EWE");
        static const int FAO_HASH = HashingUtils::HashString("FAO");
        static const int FIJ_HASH = HashingUtils::HashString("FIJ");
        static const int FIN_HASH = HashingUtils::HashString("FIN");
        static const int FRM_HASH = HashingUtils::HashString("FRM");
        static const int FUL_HASH = HashingUtils::HashString("FUL");
        static const int GLA_HASH = HashingUtils::HashString("GLA");
        static const int GLG_HASH = HashingUtils::HashString("GLG");
        static const int LUG_HASH = HashingUtils::HashString("LUG");
        static const int KAT_HASH = HashingUtils::HashString("KAT");
        static const int ELL_HASH = HashingUtils::HashString("ELL");
        static const int GRN_HASH = HashingUtils::HashString("GRN");
        static const int GUJ_HASH = HashingUtils::HashString("GUJ");
        static const int HAT_HASH = HashingUtils::HashString("HAT");
        static const int HAU_HASH = HashingUtils::HashString("HAU");
        static const int HEB_HASH = HashingUtils::HashString("HEB");
        static const int HER_HASH = HashingUtils::HashString("HER");
        static const int HMO_HASH = HashingUtils::HashString("HMO");
        static const int HUN_HASH = HashingUtils::HashString("HUN");
        static const int ISL_HASH = HashingUtils::HashString("ISL");
        static const int IDO_HASH = HashingUtils::HashString("IDO");
        static const int IBO_HASH = HashingUtils::HashString("IBO");
        static const int IND_HASH = HashingUtils::HashString("IND");
        static const int INA_HASH = HashingUtils::HashString("INA");
        static const int ILE_HASH = HashingUtils::HashString("ILE");
        static const int IKU_HASH = HashingUtils::HashString("IKU");
        static const int IPK_HASH = HashingUtils::HashString("IPK");
        static const int GLE_HASH = HashingUtils::HashString("GLE");
        static const int JAV_HASH = HashingUtils::HashString("JAV");
        static const int KAL_HASH = HashingUtils::HashString("KAL");
        static const int KAN_HASH = HashingUtils::HashString("KAN");
        static const int KAU_HASH = HashingUtils::HashString("KAU");
        static const int KAS_HASH = HashingUtils::HashString("KAS");
        static const int KAZ_HASH = HashingUtils::HashString("KAZ");
        static const int KIK_HASH = HashingUtils::HashString("KIK");
        static const int KIN_HASH = HashingUtils::HashString("KIN");
        static const int KIR_HASH = HashingUtils::HashString("KIR");
        static const int KOM_HASH = HashingUtils::HashString("KOM");
        static const int KON_HASH = HashingUtils::HashString("KON");
        static const int KUA_HASH = HashingUtils::HashString("KUA");
        static const int KUR_HASH = HashingUtils::HashString("KUR");
        static const int LAO_HASH = HashingUtils::HashString("LAO");
        static const int LAT_HASH = HashingUtils::HashString("LAT");
        static const int LAV_HASH = HashingUtils::HashString("LAV");
        static const int LIM_HASH = HashingUtils::HashString("LIM");
        static const int LIN_HASH = HashingUtils::HashString("LIN");
        static const int LIT_HASH = HashingUtils::HashString("LIT");
        static const int LUB_HASH = HashingUtils::HashString("LUB");
        static const int LTZ_HASH = HashingUtils::HashString("LTZ");
        static const int MKD_HASH = HashingUtils::HashString("MKD");
        static const int MLG_HASH = HashingUtils::HashString("MLG");
        static const int MSA_HASH = HashingUtils::HashString("MSA");
        static const int MAL_HASH = HashingUtils::HashString("MAL");
        static const int MLT_HASH = HashingUtils::HashString("MLT");
        static const int GLV_HASH = HashingUtils::HashString("GLV");
        static const int MRI_HASH = HashingUtils::HashString("MRI");
        static const int MAR_HASH = HashingUtils::HashString("MAR");
        static const int MAH_HASH = HashingUtils::HashString("MAH");
        static const int MON_HASH = HashingUtils::HashString("MON");
        static const int NAU_HASH = HashingUtils::HashString("NAU");
        static const int NAV_HASH = HashingUtils::HashString("NAV");
        static const int NDE_HASH = HashingUtils::HashString("NDE");
        static const int NBL_HASH = HashingUtils::HashString("NBL");
        static const int NDO_HASH = HashingUtils::HashString("NDO");
        static const int NEP_HASH = HashingUtils::HashString("NEP");
        static const int SME_HASH = HashingUtils::HashString("SME");
        static const int NOR_HASH = HashingUtils::HashString("NOR");
        static const int NOB_HASH = HashingUtils::HashString("NOB");
        static const int NNO_HASH = HashingUtils::HashString("NNO");
        static const int OCI_HASH = HashingUtils::HashString("OCI");
        static const int OJI_HASH = HashingUtils::HashString("OJI");
        static const int ORI_HASH = HashingUtils::HashString("ORI");
        static const int ORM_HASH = HashingUtils::HashString("ORM");
        static const int OSS_HASH = HashingUtils::HashString("OSS");
        static const int PLI_HASH = HashingUtils::HashString("PLI");
        static const int FAS_HASH = HashingUtils::HashString("FAS");
        static const int POL_HASH = HashingUtils::HashString("POL");
        static const int PUS_HASH = HashingUtils::HashString("PUS");
        static const int QUE_HASH = HashingUtils::HashString("QUE");
        static const int QAA_HASH = HashingUtils::HashString("QAA");
        static const int RON_HASH = HashingUtils::HashString("RON");
        static const int ROH_HASH = HashingUtils::HashString("ROH");
        static const int RUN_HASH = HashingUtils::HashString("RUN");
        static const int SMO_HASH = HashingUtils::HashString("SMO");
        static const int SAG_HASH = HashingUtils::HashString("SAG");
        static const int SAN_HASH = HashingUtils::HashString("SAN");
        static const int SRD_HASH = HashingUtils::HashString("SRD");
        static const int SRB_HASH = HashingUtils::HashString("SRB");
        static const int SNA_HASH = HashingUtils::HashString("SNA");
        static const int III_HASH = HashingUtils::HashString("III");
        static const int SND_HASH = HashingUtils::HashString("SND");
        static const int SIN_HASH = HashingUtils::HashString("SIN");
        static const int SLK_HASH = HashingUtils::HashString("SLK");
        static const int SLV_HASH = HashingUtils::HashString("SLV");
        static const int SOM_HASH = HashingUtils::HashString("SOM");
        static const int SOT_HASH = HashingUtils::HashString("SOT");
        static const int SUN_HASH = HashingUtils::HashString("SUN");
        static const int SWA_HASH = HashingUtils::HashString("SWA");
        static const int SSW_HASH = HashingUtils::HashString("SSW");
        static const int SWE_HASH = HashingUtils::HashString("SWE");
        static const int TGL_HASH = HashingUtils::HashString("TGL");
        static const int TAH_HASH = HashingUtils::HashString("TAH");
        static const int TGK_HASH = HashingUtils::HashString("TGK");
        static const int TAM_HASH = HashingUtils::HashString("TAM");
        static const int TAT_HASH = HashingUtils::HashString("TAT");
        static const int TEL_HASH = HashingUtils::HashString("TEL");
        static const int THA_HASH = HashingUtils::HashString("THA");
        static const int BOD_HASH = HashingUtils::HashString("BOD");
        static const int TIR_HASH = HashingUtils::HashString("TIR");
        static const int TON_HASH = HashingUtils::HashString("TON");
        static const int TSO_HASH = HashingUtils::HashString("TSO");
        static const int TSN_HASH = HashingUtils::HashString("TSN");
        static const int TUR_HASH = HashingUtils::HashString("TUR");
        static const int TUK_HASH = HashingUtils::HashString("TUK");
        static const int TWI_HASH = HashingUtils::HashString("TWI");
        static const int UIG_HASH = HashingUtils::HashString("UIG");
        static const int UKR_HASH = HashingUtils::HashString("UKR");
        static const int UZB_HASH = HashingUtils::HashString("UZB");
        static const int VEN_HASH = HashingUtils::HashString("VEN");
        static const int VOL_HASH = HashingUtils::HashString("VOL");
        static const int WLN_HASH = HashingUtils::HashString("WLN");
        static const int CYM_HASH = HashingUtils::HashString("CYM");
        static const int FRY_HASH = HashingUtils::HashString("FRY");
        static const int WOL_HASH = HashingUtils::HashString("WOL");
        static const int XHO_HASH = HashingUtils::HashString("XHO");
        static const int YID_HASH = HashingUtils::HashString("YID");
        static const int YOR_HASH = HashingUtils::HashString("YOR");
        static const int ZHA_HASH = HashingUtils::HashString("ZHA");
        static const int ZUL_HASH = HashingUtils::HashString("ZUL");
        static const int ORJ_HASH = HashingUtils::HashString("ORJ");
        static const int QPC_HASH = HashingUtils::HashString("QPC");
        static const int TNG_HASH = HashingUtils::HashString("TNG");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, LanguageCode& enumValue)
        {
          if (hashCode == ENG_HASH)
          {
            enumValue = LanguageCode::ENG;
            return true;
          }
          else if (hashCode == SPA_HASH)
          {
            enumValue = LanguageCode::SPA;
            return true;
          }
          else if (hashCode == FRA_HASH)
          {
            enumValue = LanguageCode::FRA;
            return true;
          }
          else if (hashCode == DEU_HASH)
          {
            enumValue = LanguageCode::DEU;
            return true;
          }
          else if (hashCode == GER_HASH)
          {
            enumValue = LanguageCode::GER;
            return true;
          }
          else if (hashCode == ZHO_HASH)
          {
            enumValue = LanguageCode::ZHO;
            return true;
          }
          else if (hashCode == ARA_HASH)
          {
            enumValue = LanguageCode::ARA;
            return true;
          }
          else if (hashCode == HIN_HASH)
          {
            enumValue = LanguageCode::HIN;
            return true;
          }
          else if (hashCode == JPN_HASH)
          {
            enumValue = LanguageCode::JPN;
            return true;
          }
          else if (hashCode == RUS_HASH)
          {
            enumValue = LanguageCode::RUS;
            return true;
          }
          else if (hashCode == POR_HASH)
          {
            enumValue = LanguageCode::POR;
            return true;
          }
          else if (hashCode == ITA_HASH)
          {
            enumValue = LanguageCode::ITA;
            return true;
          }
          else if (hashCode == URD_HASH)
          {
            enumValue = LanguageCode::URD;
            return true;
          }
          else if (hashCode == VIE_HASH)
          {
            enumValue = LanguageCode::VIE;
            return true;
          }
          else if (hashCode == KOR_HASH)
          {
            enumValue = LanguageCode::KOR;
            return true;
          }
          else if (hashCode == PAN_HASH)
          {
            enumValue = LanguageCode::PAN;
            return true;
          }
          else if (hashCode == ABK_HASH)
          {
            enumValue = LanguageCode::ABK;
            return true;
          }
          else if (hashCode == AAR_HASH)
          {
            enumValue = LanguageCode::AAR;
            return true;
          }
          else if (hashCode == AFR_HASH)
          {
            enumValue = LanguageCode::AFR;
            return true;
          }
          else if (hashCode == AKA_HASH)
          {
            enumValue = LanguageCode::AKA;
            return true;
          }
          else if (hashCode == SQI_HASH)
          {
            enumValue = LanguageCode::SQI;
            return true;
          }
          else if (hashCode == AMH_HASH)
          {
            enumValue = LanguageCode::AMH;
            return true;
          }
          else if (hashCode == ARG_HASH)
          {
            enumValue = LanguageCode::ARG;
            return true;
          }
          else if (hashCode == HYE_HASH)
          {
            enumValue = LanguageCode::HYE;
            return true;
          }
          else if (hashCode == ASM_HASH)
          {
            enumValue = LanguageCode::ASM;
            return true;
          }
          else if (hashCode == AVA_HASH)
          {
            enumValue = LanguageCode::AVA;
            return true;
          }
          else if (hashCode == AVE_HASH)
          {
            enumValue = LanguageCode::AVE;
            return true;
          }
          else if (hashCode == AYM_HASH)
          {
            enumValue = LanguageCode::AYM;
            return true;
          }
          else if (hashCode == AZE_HASH)
          {
            enumValue = LanguageCode::AZE;
            return true;
          }
          else if (hashCode == BAM_HASH)
          {
            enumValue = LanguageCode::BAM;
            return true;
          }
          else if (hashCode == BAK_HASH)
          {
            enumValue = LanguageCode::BAK;
            return true;
          }
          else if (hashCode == EUS_HASH)
          {
            enumValue = LanguageCode::EUS;
            return true;
          }
          else if (hashCode == BEL_HASH)
          {
            enumValue = LanguageCode::BEL;
            return true;
          }
          else if (hashCode == BEN_HASH)
          {
            enumValue = LanguageCode::BEN;
            return true;
          }
          else if (hashCode == BIH_HASH)
          {
            enumValue = LanguageCode::BIH;
            return true;
          }
          else if (hashCode == BIS_HASH)
          {
            enumValue = LanguageCode::BIS;
            return true;
          }
          else if (hashCode == BOS_HASH)
          {
            enumValue = LanguageCode::BOS;
            return true;
          }
          else if (hashCode == BRE_HASH)
          {
            enumValue = LanguageCode::BRE;
            return true;
          }
          else if (hashCode == BUL_HASH)
          {
            enumValue = LanguageCode::BUL;
            return true;
          }
          else if (hashCode == MYA_HASH)
          {
            enumValue = LanguageCode::MYA;
            return true;
          }
          else if (hashCode == CAT_HASH)
          {
            enumValue = LanguageCode::CAT;
            return true;
          }
          else if (hashCode == KHM_HASH)
          {
            enumValue = LanguageCode::KHM;
            return true;
          }
          else if (hashCode == CHA_HASH)
          {
            enumValue = LanguageCode::CHA;
            return true;
          }
          else if (hashCode == CHE_HASH)
          {
            enumValue = LanguageCode::CHE;
            return true;
          }
          else if (hashCode == NYA_HASH)
          {
            enumValue = LanguageCode::NYA;
            return true;
          }
          else if (hashCode == CHU_HASH)
          {
            enumValue = LanguageCode::CHU;
            return true;
          }
          else if (hashCode == CHV_HASH)
          {
            enumValue = LanguageCode::CHV;
            return true;
          }
          else if (hashCode == COR_HASH)
          {
            enumValue = LanguageCode::COR;
            return true;
          }
          else if (hashCode == COS_HASH)
          {
            enumValue = LanguageCode::COS;
            return true;
          }
          else if (hashCode == CRE_HASH)
          {
            enumValue = LanguageCode::CRE;
            return true;
          }
          else if (hashCode == HRV_HASH)
          {
            enumValue = LanguageCode::HRV;
            return true;
          }
          else if (hashCode == CES_HASH)
          {
            enumValue = LanguageCode::CES;
            return true;
          }
          else if (hashCode == DAN_HASH)
          {
            enumValue = LanguageCode::DAN;
            return true;
          }
          else if (hashCode == DIV_HASH)
          {
            enumValue = LanguageCode::DIV;
            return true;
          }
          else if (hashCode == NLD_HASH)
          {
            enumValue = LanguageCode::NLD;
            return true;
          }
          else if (hashCode == DZO_HASH)
          {
            enumValue = LanguageCode::DZO;
            return true;
          }
          else if (hashCode == ENM_HASH)
          {
            enumValue = LanguageCode::ENM;
            return true;
          }
          else if (hashCode == EPO_HASH)
          {
            enumValue = LanguageCode::EPO;
            return true;
          }
          else if (hashCode == EST_HASH)
          {
            enumValue = LanguageCode::EST;
            return true;
          }
          else if (hashCode == EWE_HASH)
          {
            enumValue = LanguageCode::EWE;
            return true;
          }
          else if (hashCode == FAO_HASH)
          {
            enumValue = LanguageCode::FAO;
            return true;
          }
          else if (hashCode == FIJ_HASH)
          {
            enumValue = LanguageCode::FIJ;
            return true;
          }
          else if (hashCode == FIN_HASH)
          {
            enumValue = LanguageCode::FIN;
            return true;
          }
          else if (hashCode == FRM_HASH)
          {
            enumValue = LanguageCode::FRM;
            return true;
          }
          else if (hashCode == FUL_HASH)
          {
            enumValue = LanguageCode::FUL;
            return true;
          }
          else if (hashCode == GLA_HASH)
          {
            enumValue = LanguageCode::GLA;
            return true;
          }
          else if (hashCode == GLG_HASH)
          {
            enumValue = LanguageCode::GLG;
            return true;
          }
          else if (hashCode == LUG_HASH)
          {
            enumValue = LanguageCode::LUG;
            return true;
          }
          else if (hashCode == KAT_HASH)
          {
            enumValue = LanguageCode::KAT;
            return true;
          }
          else if (hashCode == ELL_HASH)
          {
            enumValue = LanguageCode::ELL;
            return true;
          }
          else if (hashCode == GRN_HASH)
          {
            enumValue = LanguageCode::GRN;
            return true;
          }
          else if (hashCode == GUJ_HASH)
          {
            enumValue = LanguageCode::GUJ;
            return true;
          }
          else if (hashCode == HAT_HASH)
          {
            enumValue = LanguageCode::HAT;
            return true;
          }
          else if (hashCode == HAU_HASH)
          {
            enumValue = LanguageCode::HAU;
            return true;
          }
          else if (hashCode == HEB_HASH)
          {
            enumValue = LanguageCode::HEB;
            return true;
          }
          else if (hashCode == HER_HASH)
          {
            enumValue = LanguageCode::HER;
            return true;
          }
          else if (hashCode == HMO_HASH)
          {
            enumValue = LanguageCode::HMO;
            return true;
          }
          else if (hashCode == HUN_HASH)
          {
            enumValue = LanguageCode::HUN;
            return true;
          }
          else if (hashCode == ISL_HASH)
          {
            enumValue = LanguageCode::ISL;
            return true;
          }
          else if (hashCode == IDO_HASH)
          {
            enumValue = LanguageCode::IDO;
            return true;
          }
          else if (hashCode == IBO_HASH)
          {
            enumValue = LanguageCode::IBO;
            return true;
          }
          else if (hashCode == IND_HASH)
          {
            enumValue = LanguageCode::IND;
            return true;
          }
          else if (hashCode == INA_HASH)
          {
            enumValue = LanguageCode::INA;
            return true;
          }
          else if (hashCode == ILE_HASH)
          {
            enumValue = LanguageCode::ILE;
            return true;
          }
          else if (hashCode == IKU_HASH)
          {
            enumValue = LanguageCode::IKU;
            return true;
          }
          else if (hashCode == IPK_HASH)
          {
            enumValue = LanguageCode::IPK;
            return true;
          }
          else if (hashCode == GLE_HASH)
          {
            enumValue = LanguageCode::GLE;
            return true;
          }
          else if (hashCode == JAV_HASH)
          {
            enumValue = LanguageCode::JAV;
            return true;
          }
          else if (hashCode == KAL_HASH)
          {
            enumValue = LanguageCode::KAL;
            return true;
          }
          else if (hashCode == KAN_HASH)
          {
            enumValue = LanguageCode::KAN;
            return true;
          }
          else if (hashCode == KAU_HASH)
          {
            enumValue = LanguageCode::KAU;
            return true;
          }
          else if (hashCode == KAS_HASH)
          {
            enumValue = LanguageCode::KAS;
            return true;
          }
          else if (hashCode == KAZ_HASH)
          {
            enumValue = LanguageCode::KAZ;
            return true;
          }
          else if (hashCode == KIK_HASH)
          {
            enumValue = LanguageCode::KIK;
            return true;
          }
          else if (hashCode == KIN_HASH)
          {
            enumValue = LanguageCode::KIN;
            return true;
          }
          else if (hashCode == KIR_HASH)
          {
            enumValue = LanguageCode::KIR;
            return true;
          }
          else if (hashCode == KOM_HASH)
          {
            enumValue = LanguageCode::KOM;
            return true;
          }
          else if (hashCode == KON_HASH)
          {
            enumValue = LanguageCode::KON;
            return true;
          }
          else if (hashCode == KUA_HASH)
          {
            enumValue = LanguageCode::KUA;
            return true;
          }
          else if (hashCode == KUR_HASH)
          {
            enumValue = LanguageCode::KUR;
            return true;
          }
          else if (hashCode == LAO_HASH)
          {
            enumValue = LanguageCode::LAO;
            return true;
          }
          else if (hashCode == LAT_HASH)
          {
            enumValue = LanguageCode::LAT;
            return true;
          }
          else if (hashCode == LAV_HASH)
          {
            enumValue = LanguageCode::LAV;
            return true;
          }
          else if (hashCode == LIM_HASH)
          {
            enumValue = LanguageCode::LIM;
            return true;
          }
          else if (hashCode == LIN_HASH)
          {
            enumValue = LanguageCode::LIN;
            return true;
          }
          else if (hashCode == LIT_HASH)
          {
            enumValue = LanguageCode::LIT;
            return true;
          }
          else if (hashCode == LUB_HASH)
          {
            enumValue = LanguageCode::LUB;
            return true;
          }
          else if (hashCode == LTZ_HASH)
          {
            enumValue = LanguageCode::LTZ;
            return true;
          }
          else if (hashCode == MKD_HASH)
          {
            enumValue = LanguageCode::MKD;
            return true;
          }
          else if (hashCode == MLG_HASH)
          {
            enumValue = LanguageCode::MLG;
            return true;
          }
          else if (hashCode == MSA_HASH)
          {
            enumValue = LanguageCode::MSA;
            return true;
          }
          else if (hashCode == MAL_HASH)
          {
            enumValue = LanguageCode::MAL;
            return true;
          }
          else if (hashCode == MLT_HASH)
          {
            enumValue = LanguageCode::MLT;
            return true;
          }
          else if (hashCode == GLV_HASH)
          {
            enumValue = LanguageCode::GLV;
            return true;
          }
          else if (hashCode == MRI_HASH)
          {
            enumValue = LanguageCode::MRI;
            return true;
          }
          else if (hashCode == MAR_HASH)
          {
            enumValue = LanguageCode::MAR;
            return true;
          }
          else if (hashCode == MAH_HASH)
          {
            enumValue = LanguageCode::MAH;
            return true;
          }
          else if (hashCode == MON_HASH)
          {
            enumValue = LanguageCode::MON;
            return true;
          }
          else if (hashCode == NAU_HASH)
          {
            enumValue = LanguageCode::NAU;
            return true;
          }
          else if (hashCode == NAV_HASH)
          {
            enumValue = LanguageCode::NAV;
            return true;
          }
          else if (hashCode == NDE_HASH)
          {
            enumValue = LanguageCode::NDE;
            return true;
          }
          else if (hashCode == NBL_HASH)
          {
            enumValue = LanguageCode::NBL;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, LanguageCode& enumValue)
        {
          if (hashCode == NDO_HASH)
          {
            enumValue = LanguageCode::NDO;
            return true;
          }
          else if (hashCode == NEP_HASH)
          {
            enumValue = LanguageCode::NEP;
            return true;
          }
          else if (hashCode == SME_HASH)
          {
            enumValue = LanguageCode::SME;
            return true;
          }
          else if (hashCode == NOR_HASH)
          {
            enumValue = LanguageCode::NOR;
            return true;
          }
          else if (hashCode == NOB_HASH)
          {
            enumValue = LanguageCode::NOB;
            return true;
          }
          else if (hashCode == NNO_HASH)
          {
            enumValue = LanguageCode::NNO;
            return true;
          }
          else if (hashCode == OCI_HASH)
          {
            enumValue = LanguageCode::OCI;
            return true;
          }
          else if (hashCode == OJI_HASH)
          {
            enumValue = LanguageCode::OJI;
            return true;
          }
          else if (hashCode == ORI_HASH)
          {
            enumValue = LanguageCode::ORI;
            return true;
          }
          else if (hashCode == ORM_HASH)
          {
            enumValue = LanguageCode::ORM;
            return true;
          }
          else if (hashCode == OSS_HASH)
          {
            enumValue = LanguageCode::OSS;
            return true;
          }
          else if (hashCode == PLI_HASH)
          {
            enumValue = LanguageCode::PLI;
            return true;
          }
          else if (hashCode == FAS_HASH)
          {
            enumValue = LanguageCode::FAS;
            return true;
          }
          else if (hashCode == POL_HASH)
          {
            enumValue = LanguageCode::POL;
            return true;
          }
          else if (hashCode == PUS_HASH)
          {
            enumValue = LanguageCode::PUS;
            return true;
          }
          else if (hashCode == QUE_HASH)
          {
            enumValue = LanguageCode::QUE;
            return true;
          }
          else if (hashCode == QAA_HASH)
          {
            enumValue = LanguageCode::QAA;
            return true;
          }
          else if (hashCode == RON_HASH)
          {
            enumValue = LanguageCode::RON;
            return true;
          }
          else if (hashCode == ROH_HASH)
          {
            enumValue = LanguageCode::ROH;
            return true;
          }
          else if (hashCode == RUN_HASH)
          {
            enumValue = LanguageCode::RUN;
            return true;
          }
          else if (hashCode == SMO_HASH)
          {
            enumValue = LanguageCode::SMO;
            return true;
          }
          else if (hashCode == SAG_HASH)
          {
            enumValue = LanguageCode::SAG;
            return true;
          }
          else if (hashCode == SAN_HASH)
          {
            enumValue = LanguageCode::SAN;
            return true;
          }
          else if (hashCode == SRD_HASH)
          {
            enumValue = LanguageCode::SRD;
            return true;
          }
          else if (hashCode == SRB_HASH)
          {
            enumValue = LanguageCode::SRB;
            return true;
          }
          else if (hashCode == SNA_HASH)
          {
            enumValue = LanguageCode::SNA;
            return true;
          }
          else if (hashCode == III_HASH)
          {
            enumValue = LanguageCode::III;
            return true;
          }
          else if (hashCode == SND_HASH)
          {
            enumValue = LanguageCode::SND;
            return true;
          }
          else if (hashCode == SIN_HASH)
          {
            enumValue = LanguageCode::SIN;
            return true;
          }
          else if (hashCode == SLK_HASH)
          {
            enumValue = LanguageCode::SLK;
            return true;
          }
          else if (hashCode == SLV_HASH)
          {
            enumValue = LanguageCode::SLV;
            return true;
          }
          else if (hashCode == SOM_HASH)
          {
            enumValue = LanguageCode::SOM;
            return true;
          }
          else if (hashCode == SOT_HASH)
          {
            enumValue = LanguageCode::SOT;
            return true;
          }
          else if (hashCode == SUN_HASH)
          {
            enumValue = LanguageCode::SUN;
            return true;
          }
          else if (hashCode == SWA_HASH)
          {
            enumValue = LanguageCode::SWA;
            return true;
          }
          else if (hashCode == SSW_HASH)
          {
            enumValue = LanguageCode::SSW;
            return true;
          }
          else if (hashCode == SWE_HASH)
          {
            enumValue = LanguageCode::SWE;
            return true;
          }
          else if (hashCode == TGL_HASH)
          {
            enumValue = LanguageCode::TGL;
            return true;
          }
          else if (hashCode == TAH_HASH)
          {
            enumValue = LanguageCode::TAH;
            return true;
          }
          else if (hashCode == TGK_HASH)
          {
            enumValue = LanguageCode::TGK;
            return true;
          }
          else if (hashCode == TAM_HASH)
          {
            enumValue = LanguageCode::TAM;
            return true;
          }
          else if (hashCode == TAT_HASH)
          {
            enumValue = LanguageCode::TAT;
            return true;
          }
          else if (hashCode == TEL_HASH)
          {
            enumValue = LanguageCode::TEL;
            return true;
          }
          else if (hashCode == THA_HASH)
          {
            enumValue = LanguageCode::THA;
            return true;
          }
          else if (hashCode == BOD_HASH)
          {
            enumValue = LanguageCode::BOD;
            return true;
          }
          else if (hashCode == TIR_HASH)
          {
            enumValue = LanguageCode::TIR;
            return true;
          }
          else if (hashCode == TON_HASH)
          {
            enumValue = LanguageCode::TON;
            return true;
          }
          else if (hashCode == TSO_HASH)
          {
            enumValue = LanguageCode::TSO;
            return true;
          }
          else if (hashCode == TSN_HASH)
          {
            enumValue = LanguageCode::TSN;
            return true;
          }
          else if (hashCode == TUR_HASH)
          {
            enumValue = LanguageCode::TUR;
            return true;
          }
          else if (hashCode == TUK_HASH)
          {
            enumValue = LanguageCode::TUK;
            return true;
          }
          else if (hashCode == TWI_HASH)
          {
            enumValue = LanguageCode::TWI;
            return true;
          }
          else if (hashCode == UIG_HASH)
          {
            enumValue = LanguageCode::UIG;
            return true;
          }
          else if (hashCode == UKR_HASH)
          {
            enumValue = LanguageCode::UKR;
            return true;
          }
          else if (hashCode == UZB_HASH)
          {
            enumValue = LanguageCode::UZB;
            return true;
          }
          else if (hashCode == VEN_HASH)
          {
            enumValue = LanguageCode::VEN;
            return true;
          }
          else if (hashCode == VOL_HASH)
          {
            enumValue = LanguageCode::VOL;
            return true;
          }
          else if (hashCode == WLN_HASH)
          {
            enumValue = LanguageCode::WLN;
            return true;
          }
          else if (hashCode == CYM_HASH)
          {
            enumValue = LanguageCode::CYM;
            return true;
          }
          else if (hashCode == FRY_HASH)
          {
            enumValue = LanguageCode::FRY;
            return true;
          }
          else if (hashCode == WOL_HASH)
          {
            enumValue = LanguageCode::WOL;
            return true;
          }
          else if (hashCode == XHO_HASH)
          {
            enumValue = LanguageCode::XHO;
            return true;
          }
          else if (hashCode == YID_HASH)
          {
            enumValue = LanguageCode::YID;
            return true;
          }
          else if (hashCode == YOR_HASH)
          {
            enumValue = LanguageCode::YOR;
            return true;
          }
          else if (hashCode == ZHA_HASH)
          {
            enumValue = LanguageCode::ZHA;
            return true;
          }
          else if (hashCode == ZUL_HASH)
          {
            enumValue = LanguageCode::ZUL;
            return true;
          }
          else if (hashCode == ORJ_HASH)
          {
            enumValue = LanguageCode::ORJ;
            return true;
          }
          else if (hashCode == QPC_HASH)
          {
            enumValue = LanguageCode::QPC;
            return true;
          }
          else if (hashCode == TNG_HASH)
          {
            enumValue = LanguageCode::TNG;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(LanguageCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case LanguageCode::ENG:
            value = "ENG";
            return true;
          case LanguageCode::SPA:
            value = "SPA";
            return true;
          case LanguageCode::FRA:
            value = "FRA";
            return true;
          case LanguageCode::DEU:
            value = "DEU";
            return true;
          case LanguageCode::GER:
            value = "GER";
            return true;
          case LanguageCode::ZHO:
            value = "ZHO";
            return true;
          case LanguageCode::ARA:
            value = "ARA";
            return true;
          case LanguageCode::HIN:
            value = "HIN";
            return true;
          case LanguageCode::JPN:
            value = "JPN";
            return true;
          case LanguageCode::RUS:
            value = "RUS";
            return true;
          case LanguageCode::POR:
            value = "POR";
            return true;
          case LanguageCode::ITA:
            value = "ITA";
            return true;
          case LanguageCode::URD:
            value = "URD";
            return true;
          case LanguageCode::VIE:
            value = "VIE";
            return true;
          case LanguageCode::KOR:
            value = "KOR";
            return true;
          case LanguageCode::PAN:
            value = "PAN";
            return true;
          case LanguageCode::ABK:
            value = "ABK";
            return true;
          case LanguageCode::AAR:
            value = "AAR";
            return true;
          case LanguageCode::AFR:
            value = "AFR";
            return true;
          case LanguageCode::AKA:
            value = "AKA";
            return true;
          case LanguageCode::SQI:
            value = "SQI";
            return true;
          case LanguageCode::AMH:
            value = "AMH";
            return true;
          case LanguageCode::ARG:
            value = "ARG";
            return true;
          case LanguageCode::HYE:
            value = "HYE";
            return true;
          case LanguageCode::ASM:
            value = "ASM";
            return true;
          case LanguageCode::AVA:
            value = "AVA";
            return true;
          case LanguageCode::AVE:
            value = "AVE";
            return true;
          case LanguageCode::AYM:
            value = "AYM";
            return true;
          case LanguageCode::AZE:
            value = "AZE";
            return true;
          case LanguageCode::BAM:
            value = "BAM";
            return true;
          case LanguageCode::BAK:
            value = "BAK";
            return true;
          case LanguageCode::EUS:
            value = "EUS";
            return true;
          case LanguageCode::BEL:
            value = "BEL";
            return true;
          case LanguageCode::BEN:
            value = "BEN";
            return true;
          case LanguageCode::BIH:
            value = "BIH";
            return true;
          case LanguageCode::BIS:
            value = "BIS";
            return true;
          case LanguageCode::BOS:
            value = "BOS";
            return true;
          case LanguageCode::BRE:
            value = "BRE";
            return true;
          case LanguageCode::BUL:
            value = "BUL";
            return true;
          case LanguageCode::MYA:
            value = "MYA";
            return true;
          case LanguageCode::CAT:
            value = "CAT";
            return true;
          case LanguageCode::KHM:
            value = "KHM";
            return true;
          case LanguageCode::CHA:
            value = "CHA";
            return true;
          case LanguageCode::CHE:
            value = "CHE";
            return true;
          case LanguageCode::NYA:
            value = "NYA";
            return true;
          case LanguageCode::CHU:
            value = "CHU";
            return true;
          case LanguageCode::CHV:
            value = "CHV";
            return true;
          case LanguageCode::COR:
            value = "COR";
            return true;
          case LanguageCode::COS:
            value = "COS";
            return true;
          case LanguageCode::CRE:
            value = "CRE";
            return true;
          case LanguageCode::HRV:
            value = "HRV";
            return true;
          case LanguageCode::CES:
            value = "CES";
            return true;
          case LanguageCode::DAN:
            value = "DAN";
            return true;
          case LanguageCode::DIV:
            value = "DIV";
            return true;
          case LanguageCode::NLD:
            value = "NLD";
            return true;
          case LanguageCode::DZO:
            value = "DZO";
            return true;
          case LanguageCode::ENM:
            value = "ENM";
            return true;
          case LanguageCode::EPO:
            value = "EPO";
            return true;
          case LanguageCode::EST:
            value = "EST";
            return true;
          case LanguageCode::EWE:
            value = "EWE";
            return true;
          case LanguageCode::FAO:
            value = "FAO";
            return true;
          case LanguageCode::FIJ:
            value = "FIJ";
            return true;
          case LanguageCode::FIN:
            value = "FIN";
            return true;
          case LanguageCode::FRM:
            value = "FRM";
            return true;
          case LanguageCode::FUL:
            value = "FUL";
            return true;
          case LanguageCode::GLA:
            value = "GLA";
            return true;
          case LanguageCode::GLG:
            value = "GLG";
            return true;
          case LanguageCode::LUG:
            value = "LUG";
            return true;
          case LanguageCode::KAT:
            value = "KAT";
            return true;
          case LanguageCode::ELL:
            value = "ELL";
            return true;
          case LanguageCode::GRN:
            value = "GRN";
            return true;
          case LanguageCode::GUJ:
            value = "GUJ";
            return true;
          case LanguageCode::HAT:
            value = "HAT";
            return true;
          case LanguageCode::HAU:
            value = "HAU";
            return true;
          case LanguageCode::HEB:
            value = "HEB";
            return true;
          case LanguageCode::HER:
            value = "HER";
            return true;
          case LanguageCode::HMO:
            value = "HMO";
            return true;
          case LanguageCode::HUN:
            value = "HUN";
            return true;
          case LanguageCode::ISL:
            value = "ISL";
            return true;
          case LanguageCode::IDO:
            value = "IDO";
            return true;
          case LanguageCode::IBO:
            value = "IBO";
            return true;
          case LanguageCode::IND:
            value = "IND";
            return true;
          case LanguageCode::INA:
            value = "INA";
            return true;
          case LanguageCode::ILE:
            value = "ILE";
            return true;
          case LanguageCode::IKU:
            value = "IKU";
            return true;
          case LanguageCode::IPK:
            value = "IPK";
            return true;
          case LanguageCode::GLE:
            value = "GLE";
            return true;
          case LanguageCode::JAV:
            value = "JAV";
            return true;
          case LanguageCode::KAL:
            value = "KAL";
            return true;
          case LanguageCode::KAN:
            value = "KAN";
            return true;
          case LanguageCode::KAU:
            value = "KAU";
            return true;
          case LanguageCode::KAS:
            value = "KAS";
            return true;
          case LanguageCode::KAZ:
            value = "KAZ";
            return true;
          case LanguageCode::KIK:
            value = "KIK";
            return true;
          case LanguageCode::KIN:
            value = "KIN";
            return true;
          case LanguageCode::KIR:
            value = "KIR";
            return true;
          case LanguageCode::KOM:
            value = "KOM";
            return true;
          case LanguageCode::KON:
            value = "KON";
            return true;
          case LanguageCode::KUA:
            value = "KUA";
            return true;
          case LanguageCode::KUR:
            value = "KUR";
            return true;
          case LanguageCode::LAO:
            value = "LAO";
            return true;
          case LanguageCode::LAT:
            value = "LAT";
            return true;
          case LanguageCode::LAV:
            value = "LAV";
            return true;
          case LanguageCode::LIM:
            value = "LIM";
            return true;
          case LanguageCode::LIN:
            value = "LIN";
            return true;
          case LanguageCode::LIT:
            value = "LIT";
            return true;
          case LanguageCode::LUB:
            value = "LUB";
            return true;
          case LanguageCode::LTZ:
            value = "LTZ";
            return true;
          case LanguageCode::MKD:
            value = "MKD";
            return true;
          case LanguageCode::MLG:
            value = "MLG";
            return true;
          case LanguageCode::MSA:
            value = "MSA";
            return true;
          case LanguageCode::MAL:
            value = "MAL";
            return true;
          case LanguageCode::MLT:
            value = "MLT";
            return true;
          case LanguageCode::GLV:
            value = "GLV";
            return true;
          case LanguageCode::MRI:
            value = "MRI";
            return true;
          case LanguageCode::MAR:
            value = "MAR";
            return true;
          case LanguageCode::MAH:
            value = "MAH";
            return true;
          case LanguageCode::MON:
            value = "MON";
            return true;
          case LanguageCode::NAU:
            value = "NAU";
            return true;
          case LanguageCode::NAV:
            value = "NAV";
            return true;
          case LanguageCode::NDE:
            value = "NDE";
            return true;
          case LanguageCode::NBL:
            value = "NBL";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(LanguageCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case LanguageCode::NDO:
            value = "NDO";
            return true;
          case LanguageCode::NEP:
            value = "NEP";
            return true;
          case LanguageCode::SME:
            value = "SME";
            return true;
          case LanguageCode::NOR:
            value = "NOR";
            return true;
          case LanguageCode::NOB:
            value = "NOB";
            return true;
          case LanguageCode::NNO:
            value = "NNO";
            return true;
          case LanguageCode::OCI:
            value = "OCI";
            return true;
          case LanguageCode::OJI:
            value = "OJI";
            return true;
          case LanguageCode::ORI:
            value = "ORI";
            return true;
          case LanguageCode::ORM:
            value = "ORM";
            return true;
          case LanguageCode::OSS:
            value = "OSS";
            return true;
          case LanguageCode::PLI:
            value = "PLI";
            return true;
          case LanguageCode::FAS:
            value = "FAS";
            return true;
          case LanguageCode::POL:
            value = "POL";
            return true;
          case LanguageCode::PUS:
            value = "PUS";
            return true;
          case LanguageCode::QUE:
            value = "QUE";
            return true;
          case LanguageCode::QAA:
            value = "QAA";
            return true;
          case LanguageCode::RON:
            value = "RON";
            return true;
          case LanguageCode::ROH:
            value = "ROH";
            return true;
          case LanguageCode::RUN:
            value = "RUN";
            return true;
          case LanguageCode::SMO:
            value = "SMO";
            return true;
          case LanguageCode::SAG:
            value = "SAG";
            return true;
          case LanguageCode::SAN:
            value = "SAN";
            return true;
          case LanguageCode::SRD:
            value = "SRD";
            return true;
          case LanguageCode::SRB:
            value = "SRB";
            return true;
          case LanguageCode::SNA:
            value = "SNA";
            return true;
          case LanguageCode::III:
            value = "III";
            return true;
          case LanguageCode::SND:
            value = "SND";
            return true;
          case LanguageCode::SIN:
            value = "SIN";
            return true;
          case LanguageCode::SLK:
            value = "SLK";
            return true;
          case LanguageCode::SLV:
            value = "SLV";
            return true;
          case LanguageCode::SOM:
            value = "SOM";
            return true;
          case LanguageCode::SOT:
            value = "SOT";
            return true;
          case LanguageCode::SUN:
            value = "SUN";
            return true;
          case LanguageCode::SWA:
            value = "SWA";
            return true;
          case LanguageCode::SSW:
            value = "SSW";
            return true;
          case LanguageCode::SWE:
            value = "SWE";
            return true;
          case LanguageCode::TGL:
            value = "TGL";
            return true;
          case LanguageCode::TAH:
            value = "TAH";
            return true;
          case LanguageCode::TGK:
            value = "TGK";
            return true;
          case LanguageCode::TAM:
            value = "TAM";
            return true;
          case LanguageCode::TAT:
            value = "TAT";
            return true;
          case LanguageCode::TEL:
            value = "TEL";
            return true;
          case LanguageCode::THA:
            value = "THA";
            return true;
          case LanguageCode::BOD:
            value = "BOD";
            return true;
          case LanguageCode::TIR:
            value = "TIR";
            return true;
          case LanguageCode::TON:
            value = "TON";
            return true;
          case LanguageCode::TSO:
            value = "TSO";
            return true;
          case LanguageCode::TSN:
            value = "TSN";
            return true;
          case LanguageCode::TUR:
            value = "TUR";
            return true;
          case LanguageCode::TUK:
            value = "TUK";
            return true;
          case LanguageCode::TWI:
            value = "TWI";
            return true;
          case LanguageCode::UIG:
            value = "UIG";
            return true;
          case LanguageCode::UKR:
            value = "UKR";
            return true;
          case LanguageCode::UZB:
            value = "UZB";
            return true;
          case LanguageCode::VEN:
            value = "VEN";
            return true;
          case LanguageCode::VOL:
            value = "VOL";
            return true;
          case LanguageCode::WLN:
            value = "WLN";
            return true;
          case LanguageCode::CYM:
            value = "CYM";
            return true;
          case LanguageCode::FRY:
            value = "FRY";
            return true;
          case LanguageCode::WOL:
            value = "WOL";
            return true;
          case LanguageCode::XHO:
            value = "XHO";
            return true;
          case LanguageCode::YID:
            value = "YID";
            return true;
          case LanguageCode::YOR:
            value = "YOR";
            return true;
          case LanguageCode::ZHA:
            value = "ZHA";
            return true;
          case LanguageCode::ZUL:
            value = "ZUL";
            return true;
          case LanguageCode::ORJ:
            value = "ORJ";
            return true;
          case LanguageCode::QPC:
            value = "QPC";
            return true;
          case LanguageCode::TNG:
            value = "TNG";
            return true;
          default:
            return false;
          }
        }

        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          LanguageCode enumValue;
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
            return static_cast<LanguageCode>(hashCode);
          }

          return LanguageCode::NOT_SET;
        }

        Aws::String GetNameForLanguageCode(LanguageCode enumValue)
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

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
