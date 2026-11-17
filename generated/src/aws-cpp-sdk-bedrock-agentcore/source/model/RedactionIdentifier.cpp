/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RedactionIdentifier.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace RedactionIdentifierMapper {

static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
static const int AWS_SECRET_KEY_HASH = HashingUtils::HashString("AWS_SECRET_KEY");
static const int BANK_ACCOUNT_NUMBER_DE_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_DE");
static const int BANK_ACCOUNT_NUMBER_ES_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_ES");
static const int BANK_ACCOUNT_NUMBER_FR_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_FR");
static const int BANK_ACCOUNT_NUMBER_GB_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_GB");
static const int BANK_ACCOUNT_NUMBER_IT_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_IT");
static const int BANK_ACCOUNT_NUMBER_US_HASH = HashingUtils::HashString("BANK_ACCOUNT_NUMBER_US");
static const int CEP_CODE_BR_HASH = HashingUtils::HashString("CEP_CODE_BR");
static const int CNPJ_BR_HASH = HashingUtils::HashString("CNPJ_BR");
static const int CPF_CODE_BR_HASH = HashingUtils::HashString("CPF_CODE_BR");
static const int CREDIT_CARD_EXPIRATION_HASH = HashingUtils::HashString("CREDIT_CARD_EXPIRATION");
static const int CREDIT_CARD_MAGNETIC_STRIPE_HASH = HashingUtils::HashString("CREDIT_CARD_MAGNETIC_STRIPE");
static const int CREDIT_CARD_NUMBER_HASH = HashingUtils::HashString("CREDIT_CARD_NUMBER");
static const int CREDIT_CARD_SECURITY_CODE_HASH = HashingUtils::HashString("CREDIT_CARD_SECURITY_CODE");
static const int DATE_OF_BIRTH_HASH = HashingUtils::HashString("DATE_OF_BIRTH");
static const int DRIVERS_LICENSE_AT_HASH = HashingUtils::HashString("DRIVERS_LICENSE_AT");
static const int DRIVERS_LICENSE_AU_HASH = HashingUtils::HashString("DRIVERS_LICENSE_AU");
static const int DRIVERS_LICENSE_BE_HASH = HashingUtils::HashString("DRIVERS_LICENSE_BE");
static const int DRIVERS_LICENSE_BG_HASH = HashingUtils::HashString("DRIVERS_LICENSE_BG");
static const int DRIVERS_LICENSE_CA_HASH = HashingUtils::HashString("DRIVERS_LICENSE_CA");
static const int DRIVERS_LICENSE_CY_HASH = HashingUtils::HashString("DRIVERS_LICENSE_CY");
static const int DRIVERS_LICENSE_CZ_HASH = HashingUtils::HashString("DRIVERS_LICENSE_CZ");
static const int DRIVERS_LICENSE_DE_HASH = HashingUtils::HashString("DRIVERS_LICENSE_DE");
static const int DRIVERS_LICENSE_DK_HASH = HashingUtils::HashString("DRIVERS_LICENSE_DK");
static const int DRIVERS_LICENSE_EE_HASH = HashingUtils::HashString("DRIVERS_LICENSE_EE");
static const int DRIVERS_LICENSE_ES_HASH = HashingUtils::HashString("DRIVERS_LICENSE_ES");
static const int DRIVERS_LICENSE_FI_HASH = HashingUtils::HashString("DRIVERS_LICENSE_FI");
static const int DRIVERS_LICENSE_FR_HASH = HashingUtils::HashString("DRIVERS_LICENSE_FR");
static const int DRIVERS_LICENSE_GB_HASH = HashingUtils::HashString("DRIVERS_LICENSE_GB");
static const int DRIVERS_LICENSE_GR_HASH = HashingUtils::HashString("DRIVERS_LICENSE_GR");
static const int DRIVERS_LICENSE_HR_HASH = HashingUtils::HashString("DRIVERS_LICENSE_HR");
static const int DRIVERS_LICENSE_HU_HASH = HashingUtils::HashString("DRIVERS_LICENSE_HU");
static const int DRIVERS_LICENSE_IE_HASH = HashingUtils::HashString("DRIVERS_LICENSE_IE");
static const int DRIVERS_LICENSE_IT_HASH = HashingUtils::HashString("DRIVERS_LICENSE_IT");
static const int DRIVERS_LICENSE_LT_HASH = HashingUtils::HashString("DRIVERS_LICENSE_LT");
static const int DRIVERS_LICENSE_LU_HASH = HashingUtils::HashString("DRIVERS_LICENSE_LU");
static const int DRIVERS_LICENSE_LV_HASH = HashingUtils::HashString("DRIVERS_LICENSE_LV");
static const int DRIVERS_LICENSE_MT_HASH = HashingUtils::HashString("DRIVERS_LICENSE_MT");
static const int DRIVERS_LICENSE_NL_HASH = HashingUtils::HashString("DRIVERS_LICENSE_NL");
static const int DRIVERS_LICENSE_PL_HASH = HashingUtils::HashString("DRIVERS_LICENSE_PL");
static const int DRIVERS_LICENSE_PT_HASH = HashingUtils::HashString("DRIVERS_LICENSE_PT");
static const int DRIVERS_LICENSE_RO_HASH = HashingUtils::HashString("DRIVERS_LICENSE_RO");
static const int DRIVERS_LICENSE_SE_HASH = HashingUtils::HashString("DRIVERS_LICENSE_SE");
static const int DRIVERS_LICENSE_SI_HASH = HashingUtils::HashString("DRIVERS_LICENSE_SI");
static const int DRIVERS_LICENSE_SK_HASH = HashingUtils::HashString("DRIVERS_LICENSE_SK");
static const int DRIVERS_LICENSE_US_HASH = HashingUtils::HashString("DRIVERS_LICENSE_US");
static const int DRUG_ENFORCEMENT_AGENCY_NUMBER_US_HASH = HashingUtils::HashString("DRUG_ENFORCEMENT_AGENCY_NUMBER_US");
static const int ELECTORAL_ROLL_NUMBER_GB_HASH = HashingUtils::HashString("ELECTORAL_ROLL_NUMBER_GB");
static const int EMAIL_ADDRESS_HASH = HashingUtils::HashString("EMAIL_ADDRESS");
static const int HEALTH_INSURANCE_CARD_NUMBER_EU_HASH = HashingUtils::HashString("HEALTH_INSURANCE_CARD_NUMBER_EU");
static const int HEALTH_INSURANCE_CLAIM_NUMBER_US_HASH = HashingUtils::HashString("HEALTH_INSURANCE_CLAIM_NUMBER_US");
static const int HEALTH_INSURANCE_NUMBER_FR_HASH = HashingUtils::HashString("HEALTH_INSURANCE_NUMBER_FR");
static const int HEALTHCARE_PROCEDURE_CODE_US_HASH = HashingUtils::HashString("HEALTHCARE_PROCEDURE_CODE_US");
static const int INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US_HASH = HashingUtils::HashString("INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US");
static const int INSEE_CODE_FR_HASH = HashingUtils::HashString("INSEE_CODE_FR");
static const int IP_ADDRESS_HASH = HashingUtils::HashString("IP_ADDRESS");
static const int LAT_LONG_HASH = HashingUtils::HashString("LAT_LONG");
static const int MEDICARE_BENEFICIARY_NUMBER_US_HASH = HashingUtils::HashString("MEDICARE_BENEFICIARY_NUMBER_US");
static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int NATIONAL_DRUG_CODE_US_HASH = HashingUtils::HashString("NATIONAL_DRUG_CODE_US");
static const int NATIONAL_IDENTIFICATION_NUMBER_DE_HASH = HashingUtils::HashString("NATIONAL_IDENTIFICATION_NUMBER_DE");
static const int NATIONAL_IDENTIFICATION_NUMBER_ES_HASH = HashingUtils::HashString("NATIONAL_IDENTIFICATION_NUMBER_ES");
static const int NATIONAL_IDENTIFICATION_NUMBER_IT_HASH = HashingUtils::HashString("NATIONAL_IDENTIFICATION_NUMBER_IT");
static const int NATIONAL_INSURANCE_NUMBER_GB_HASH = HashingUtils::HashString("NATIONAL_INSURANCE_NUMBER_GB");
static const int NATIONAL_PROVIDER_ID_US_HASH = HashingUtils::HashString("NATIONAL_PROVIDER_ID_US");
static const int NHS_NUMBER_GB_HASH = HashingUtils::HashString("NHS_NUMBER_GB");
static const int NIE_NUMBER_ES_HASH = HashingUtils::HashString("NIE_NUMBER_ES");
static const int NIF_NUMBER_ES_HASH = HashingUtils::HashString("NIF_NUMBER_ES");
static const int OPEN_SSH_PRIVATE_KEY_HASH = HashingUtils::HashString("OPEN_SSH_PRIVATE_KEY");
static const int PASSPORT_NUMBER_CA_HASH = HashingUtils::HashString("PASSPORT_NUMBER_CA");
static const int PASSPORT_NUMBER_DE_HASH = HashingUtils::HashString("PASSPORT_NUMBER_DE");
static const int PASSPORT_NUMBER_ES_HASH = HashingUtils::HashString("PASSPORT_NUMBER_ES");
static const int PASSPORT_NUMBER_FR_HASH = HashingUtils::HashString("PASSPORT_NUMBER_FR");
static const int PASSPORT_NUMBER_GB_HASH = HashingUtils::HashString("PASSPORT_NUMBER_GB");
static const int PASSPORT_NUMBER_IT_HASH = HashingUtils::HashString("PASSPORT_NUMBER_IT");
static const int PASSPORT_NUMBER_US_HASH = HashingUtils::HashString("PASSPORT_NUMBER_US");
static const int PERMANENT_RESIDENCE_NUMBER_CA_HASH = HashingUtils::HashString("PERMANENT_RESIDENCE_NUMBER_CA");
static const int PERSONAL_HEALTH_NUMBER_CA_HASH = HashingUtils::HashString("PERSONAL_HEALTH_NUMBER_CA");
static const int PGP_PRIVATE_KEY_HASH = HashingUtils::HashString("PGP_PRIVATE_KEY");
static const int PHONE_NUMBER_BR_HASH = HashingUtils::HashString("PHONE_NUMBER_BR");
static const int PHONE_NUMBER_DE_HASH = HashingUtils::HashString("PHONE_NUMBER_DE");
static const int PHONE_NUMBER_ES_HASH = HashingUtils::HashString("PHONE_NUMBER_ES");
static const int PHONE_NUMBER_FR_HASH = HashingUtils::HashString("PHONE_NUMBER_FR");
static const int PHONE_NUMBER_GB_HASH = HashingUtils::HashString("PHONE_NUMBER_GB");
static const int PHONE_NUMBER_IT_HASH = HashingUtils::HashString("PHONE_NUMBER_IT");
static const int PHONE_NUMBER_US_HASH = HashingUtils::HashString("PHONE_NUMBER_US");
static const int PKCS_PRIVATE_KEY_HASH = HashingUtils::HashString("PKCS_PRIVATE_KEY");
static const int POSTAL_CODE_CA_HASH = HashingUtils::HashString("POSTAL_CODE_CA");
static const int PUTTY_PRIVATE_KEY_HASH = HashingUtils::HashString("PUTTY_PRIVATE_KEY");
static const int RG_NUMBER_BR_HASH = HashingUtils::HashString("RG_NUMBER_BR");
static const int SOCIAL_INSURANCE_NUMBER_CA_HASH = HashingUtils::HashString("SOCIAL_INSURANCE_NUMBER_CA");
static const int SSN_ES_HASH = HashingUtils::HashString("SSN_ES");
static const int SSN_US_HASH = HashingUtils::HashString("SSN_US");
static const int TAX_ID_DE_HASH = HashingUtils::HashString("TAX_ID_DE");
static const int TAX_ID_ES_HASH = HashingUtils::HashString("TAX_ID_ES");
static const int TAX_ID_FR_HASH = HashingUtils::HashString("TAX_ID_FR");
static const int TAX_ID_GB_HASH = HashingUtils::HashString("TAX_ID_GB");
static const int VEHICLE_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("VEHICLE_IDENTIFICATION_NUMBER");
static const int ZIP_CODE_US_HASH = HashingUtils::HashString("ZIP_CODE_US");

RedactionIdentifier GetRedactionIdentifierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADDRESS_HASH) {
    return RedactionIdentifier::ADDRESS;
  } else if (hashCode == AWS_SECRET_KEY_HASH) {
    return RedactionIdentifier::AWS_SECRET_KEY;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_DE_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_DE;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_ES_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_ES;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_FR_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_FR;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_GB_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_GB;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_IT_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_IT;
  } else if (hashCode == BANK_ACCOUNT_NUMBER_US_HASH) {
    return RedactionIdentifier::BANK_ACCOUNT_NUMBER_US;
  } else if (hashCode == CEP_CODE_BR_HASH) {
    return RedactionIdentifier::CEP_CODE_BR;
  } else if (hashCode == CNPJ_BR_HASH) {
    return RedactionIdentifier::CNPJ_BR;
  } else if (hashCode == CPF_CODE_BR_HASH) {
    return RedactionIdentifier::CPF_CODE_BR;
  } else if (hashCode == CREDIT_CARD_EXPIRATION_HASH) {
    return RedactionIdentifier::CREDIT_CARD_EXPIRATION;
  } else if (hashCode == CREDIT_CARD_MAGNETIC_STRIPE_HASH) {
    return RedactionIdentifier::CREDIT_CARD_MAGNETIC_STRIPE;
  } else if (hashCode == CREDIT_CARD_NUMBER_HASH) {
    return RedactionIdentifier::CREDIT_CARD_NUMBER;
  } else if (hashCode == CREDIT_CARD_SECURITY_CODE_HASH) {
    return RedactionIdentifier::CREDIT_CARD_SECURITY_CODE;
  } else if (hashCode == DATE_OF_BIRTH_HASH) {
    return RedactionIdentifier::DATE_OF_BIRTH;
  } else if (hashCode == DRIVERS_LICENSE_AT_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_AT;
  } else if (hashCode == DRIVERS_LICENSE_AU_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_AU;
  } else if (hashCode == DRIVERS_LICENSE_BE_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_BE;
  } else if (hashCode == DRIVERS_LICENSE_BG_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_BG;
  } else if (hashCode == DRIVERS_LICENSE_CA_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_CA;
  } else if (hashCode == DRIVERS_LICENSE_CY_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_CY;
  } else if (hashCode == DRIVERS_LICENSE_CZ_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_CZ;
  } else if (hashCode == DRIVERS_LICENSE_DE_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_DE;
  } else if (hashCode == DRIVERS_LICENSE_DK_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_DK;
  } else if (hashCode == DRIVERS_LICENSE_EE_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_EE;
  } else if (hashCode == DRIVERS_LICENSE_ES_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_ES;
  } else if (hashCode == DRIVERS_LICENSE_FI_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_FI;
  } else if (hashCode == DRIVERS_LICENSE_FR_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_FR;
  } else if (hashCode == DRIVERS_LICENSE_GB_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_GB;
  } else if (hashCode == DRIVERS_LICENSE_GR_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_GR;
  } else if (hashCode == DRIVERS_LICENSE_HR_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_HR;
  } else if (hashCode == DRIVERS_LICENSE_HU_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_HU;
  } else if (hashCode == DRIVERS_LICENSE_IE_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_IE;
  } else if (hashCode == DRIVERS_LICENSE_IT_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_IT;
  } else if (hashCode == DRIVERS_LICENSE_LT_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_LT;
  } else if (hashCode == DRIVERS_LICENSE_LU_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_LU;
  } else if (hashCode == DRIVERS_LICENSE_LV_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_LV;
  } else if (hashCode == DRIVERS_LICENSE_MT_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_MT;
  } else if (hashCode == DRIVERS_LICENSE_NL_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_NL;
  } else if (hashCode == DRIVERS_LICENSE_PL_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_PL;
  } else if (hashCode == DRIVERS_LICENSE_PT_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_PT;
  } else if (hashCode == DRIVERS_LICENSE_RO_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_RO;
  } else if (hashCode == DRIVERS_LICENSE_SE_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_SE;
  } else if (hashCode == DRIVERS_LICENSE_SI_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_SI;
  } else if (hashCode == DRIVERS_LICENSE_SK_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_SK;
  } else if (hashCode == DRIVERS_LICENSE_US_HASH) {
    return RedactionIdentifier::DRIVERS_LICENSE_US;
  } else if (hashCode == DRUG_ENFORCEMENT_AGENCY_NUMBER_US_HASH) {
    return RedactionIdentifier::DRUG_ENFORCEMENT_AGENCY_NUMBER_US;
  } else if (hashCode == ELECTORAL_ROLL_NUMBER_GB_HASH) {
    return RedactionIdentifier::ELECTORAL_ROLL_NUMBER_GB;
  } else if (hashCode == EMAIL_ADDRESS_HASH) {
    return RedactionIdentifier::EMAIL_ADDRESS;
  } else if (hashCode == HEALTH_INSURANCE_CARD_NUMBER_EU_HASH) {
    return RedactionIdentifier::HEALTH_INSURANCE_CARD_NUMBER_EU;
  } else if (hashCode == HEALTH_INSURANCE_CLAIM_NUMBER_US_HASH) {
    return RedactionIdentifier::HEALTH_INSURANCE_CLAIM_NUMBER_US;
  } else if (hashCode == HEALTH_INSURANCE_NUMBER_FR_HASH) {
    return RedactionIdentifier::HEALTH_INSURANCE_NUMBER_FR;
  } else if (hashCode == HEALTHCARE_PROCEDURE_CODE_US_HASH) {
    return RedactionIdentifier::HEALTHCARE_PROCEDURE_CODE_US;
  } else if (hashCode == INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US_HASH) {
    return RedactionIdentifier::INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US;
  } else if (hashCode == INSEE_CODE_FR_HASH) {
    return RedactionIdentifier::INSEE_CODE_FR;
  } else if (hashCode == IP_ADDRESS_HASH) {
    return RedactionIdentifier::IP_ADDRESS;
  } else if (hashCode == LAT_LONG_HASH) {
    return RedactionIdentifier::LAT_LONG;
  } else if (hashCode == MEDICARE_BENEFICIARY_NUMBER_US_HASH) {
    return RedactionIdentifier::MEDICARE_BENEFICIARY_NUMBER_US;
  } else if (hashCode == NAME_HASH) {
    return RedactionIdentifier::NAME;
  } else if (hashCode == NATIONAL_DRUG_CODE_US_HASH) {
    return RedactionIdentifier::NATIONAL_DRUG_CODE_US;
  } else if (hashCode == NATIONAL_IDENTIFICATION_NUMBER_DE_HASH) {
    return RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_DE;
  } else if (hashCode == NATIONAL_IDENTIFICATION_NUMBER_ES_HASH) {
    return RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_ES;
  } else if (hashCode == NATIONAL_IDENTIFICATION_NUMBER_IT_HASH) {
    return RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_IT;
  } else if (hashCode == NATIONAL_INSURANCE_NUMBER_GB_HASH) {
    return RedactionIdentifier::NATIONAL_INSURANCE_NUMBER_GB;
  } else if (hashCode == NATIONAL_PROVIDER_ID_US_HASH) {
    return RedactionIdentifier::NATIONAL_PROVIDER_ID_US;
  } else if (hashCode == NHS_NUMBER_GB_HASH) {
    return RedactionIdentifier::NHS_NUMBER_GB;
  } else if (hashCode == NIE_NUMBER_ES_HASH) {
    return RedactionIdentifier::NIE_NUMBER_ES;
  } else if (hashCode == NIF_NUMBER_ES_HASH) {
    return RedactionIdentifier::NIF_NUMBER_ES;
  } else if (hashCode == OPEN_SSH_PRIVATE_KEY_HASH) {
    return RedactionIdentifier::OPEN_SSH_PRIVATE_KEY;
  } else if (hashCode == PASSPORT_NUMBER_CA_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_CA;
  } else if (hashCode == PASSPORT_NUMBER_DE_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_DE;
  } else if (hashCode == PASSPORT_NUMBER_ES_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_ES;
  } else if (hashCode == PASSPORT_NUMBER_FR_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_FR;
  } else if (hashCode == PASSPORT_NUMBER_GB_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_GB;
  } else if (hashCode == PASSPORT_NUMBER_IT_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_IT;
  } else if (hashCode == PASSPORT_NUMBER_US_HASH) {
    return RedactionIdentifier::PASSPORT_NUMBER_US;
  } else if (hashCode == PERMANENT_RESIDENCE_NUMBER_CA_HASH) {
    return RedactionIdentifier::PERMANENT_RESIDENCE_NUMBER_CA;
  } else if (hashCode == PERSONAL_HEALTH_NUMBER_CA_HASH) {
    return RedactionIdentifier::PERSONAL_HEALTH_NUMBER_CA;
  } else if (hashCode == PGP_PRIVATE_KEY_HASH) {
    return RedactionIdentifier::PGP_PRIVATE_KEY;
  } else if (hashCode == PHONE_NUMBER_BR_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_BR;
  } else if (hashCode == PHONE_NUMBER_DE_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_DE;
  } else if (hashCode == PHONE_NUMBER_ES_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_ES;
  } else if (hashCode == PHONE_NUMBER_FR_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_FR;
  } else if (hashCode == PHONE_NUMBER_GB_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_GB;
  } else if (hashCode == PHONE_NUMBER_IT_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_IT;
  } else if (hashCode == PHONE_NUMBER_US_HASH) {
    return RedactionIdentifier::PHONE_NUMBER_US;
  } else if (hashCode == PKCS_PRIVATE_KEY_HASH) {
    return RedactionIdentifier::PKCS_PRIVATE_KEY;
  } else if (hashCode == POSTAL_CODE_CA_HASH) {
    return RedactionIdentifier::POSTAL_CODE_CA;
  } else if (hashCode == PUTTY_PRIVATE_KEY_HASH) {
    return RedactionIdentifier::PUTTY_PRIVATE_KEY;
  } else if (hashCode == RG_NUMBER_BR_HASH) {
    return RedactionIdentifier::RG_NUMBER_BR;
  } else if (hashCode == SOCIAL_INSURANCE_NUMBER_CA_HASH) {
    return RedactionIdentifier::SOCIAL_INSURANCE_NUMBER_CA;
  } else if (hashCode == SSN_ES_HASH) {
    return RedactionIdentifier::SSN_ES;
  } else if (hashCode == SSN_US_HASH) {
    return RedactionIdentifier::SSN_US;
  } else if (hashCode == TAX_ID_DE_HASH) {
    return RedactionIdentifier::TAX_ID_DE;
  } else if (hashCode == TAX_ID_ES_HASH) {
    return RedactionIdentifier::TAX_ID_ES;
  } else if (hashCode == TAX_ID_FR_HASH) {
    return RedactionIdentifier::TAX_ID_FR;
  } else if (hashCode == TAX_ID_GB_HASH) {
    return RedactionIdentifier::TAX_ID_GB;
  } else if (hashCode == VEHICLE_IDENTIFICATION_NUMBER_HASH) {
    return RedactionIdentifier::VEHICLE_IDENTIFICATION_NUMBER;
  } else if (hashCode == ZIP_CODE_US_HASH) {
    return RedactionIdentifier::ZIP_CODE_US;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RedactionIdentifier>(hashCode);
  }

  return RedactionIdentifier::NOT_SET;
}

Aws::String GetNameForRedactionIdentifier(RedactionIdentifier enumValue) {
  switch (enumValue) {
    case RedactionIdentifier::NOT_SET:
      return {};
    case RedactionIdentifier::ADDRESS:
      return "ADDRESS";
    case RedactionIdentifier::AWS_SECRET_KEY:
      return "AWS_SECRET_KEY";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_DE:
      return "BANK_ACCOUNT_NUMBER_DE";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_ES:
      return "BANK_ACCOUNT_NUMBER_ES";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_FR:
      return "BANK_ACCOUNT_NUMBER_FR";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_GB:
      return "BANK_ACCOUNT_NUMBER_GB";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_IT:
      return "BANK_ACCOUNT_NUMBER_IT";
    case RedactionIdentifier::BANK_ACCOUNT_NUMBER_US:
      return "BANK_ACCOUNT_NUMBER_US";
    case RedactionIdentifier::CEP_CODE_BR:
      return "CEP_CODE_BR";
    case RedactionIdentifier::CNPJ_BR:
      return "CNPJ_BR";
    case RedactionIdentifier::CPF_CODE_BR:
      return "CPF_CODE_BR";
    case RedactionIdentifier::CREDIT_CARD_EXPIRATION:
      return "CREDIT_CARD_EXPIRATION";
    case RedactionIdentifier::CREDIT_CARD_MAGNETIC_STRIPE:
      return "CREDIT_CARD_MAGNETIC_STRIPE";
    case RedactionIdentifier::CREDIT_CARD_NUMBER:
      return "CREDIT_CARD_NUMBER";
    case RedactionIdentifier::CREDIT_CARD_SECURITY_CODE:
      return "CREDIT_CARD_SECURITY_CODE";
    case RedactionIdentifier::DATE_OF_BIRTH:
      return "DATE_OF_BIRTH";
    case RedactionIdentifier::DRIVERS_LICENSE_AT:
      return "DRIVERS_LICENSE_AT";
    case RedactionIdentifier::DRIVERS_LICENSE_AU:
      return "DRIVERS_LICENSE_AU";
    case RedactionIdentifier::DRIVERS_LICENSE_BE:
      return "DRIVERS_LICENSE_BE";
    case RedactionIdentifier::DRIVERS_LICENSE_BG:
      return "DRIVERS_LICENSE_BG";
    case RedactionIdentifier::DRIVERS_LICENSE_CA:
      return "DRIVERS_LICENSE_CA";
    case RedactionIdentifier::DRIVERS_LICENSE_CY:
      return "DRIVERS_LICENSE_CY";
    case RedactionIdentifier::DRIVERS_LICENSE_CZ:
      return "DRIVERS_LICENSE_CZ";
    case RedactionIdentifier::DRIVERS_LICENSE_DE:
      return "DRIVERS_LICENSE_DE";
    case RedactionIdentifier::DRIVERS_LICENSE_DK:
      return "DRIVERS_LICENSE_DK";
    case RedactionIdentifier::DRIVERS_LICENSE_EE:
      return "DRIVERS_LICENSE_EE";
    case RedactionIdentifier::DRIVERS_LICENSE_ES:
      return "DRIVERS_LICENSE_ES";
    case RedactionIdentifier::DRIVERS_LICENSE_FI:
      return "DRIVERS_LICENSE_FI";
    case RedactionIdentifier::DRIVERS_LICENSE_FR:
      return "DRIVERS_LICENSE_FR";
    case RedactionIdentifier::DRIVERS_LICENSE_GB:
      return "DRIVERS_LICENSE_GB";
    case RedactionIdentifier::DRIVERS_LICENSE_GR:
      return "DRIVERS_LICENSE_GR";
    case RedactionIdentifier::DRIVERS_LICENSE_HR:
      return "DRIVERS_LICENSE_HR";
    case RedactionIdentifier::DRIVERS_LICENSE_HU:
      return "DRIVERS_LICENSE_HU";
    case RedactionIdentifier::DRIVERS_LICENSE_IE:
      return "DRIVERS_LICENSE_IE";
    case RedactionIdentifier::DRIVERS_LICENSE_IT:
      return "DRIVERS_LICENSE_IT";
    case RedactionIdentifier::DRIVERS_LICENSE_LT:
      return "DRIVERS_LICENSE_LT";
    case RedactionIdentifier::DRIVERS_LICENSE_LU:
      return "DRIVERS_LICENSE_LU";
    case RedactionIdentifier::DRIVERS_LICENSE_LV:
      return "DRIVERS_LICENSE_LV";
    case RedactionIdentifier::DRIVERS_LICENSE_MT:
      return "DRIVERS_LICENSE_MT";
    case RedactionIdentifier::DRIVERS_LICENSE_NL:
      return "DRIVERS_LICENSE_NL";
    case RedactionIdentifier::DRIVERS_LICENSE_PL:
      return "DRIVERS_LICENSE_PL";
    case RedactionIdentifier::DRIVERS_LICENSE_PT:
      return "DRIVERS_LICENSE_PT";
    case RedactionIdentifier::DRIVERS_LICENSE_RO:
      return "DRIVERS_LICENSE_RO";
    case RedactionIdentifier::DRIVERS_LICENSE_SE:
      return "DRIVERS_LICENSE_SE";
    case RedactionIdentifier::DRIVERS_LICENSE_SI:
      return "DRIVERS_LICENSE_SI";
    case RedactionIdentifier::DRIVERS_LICENSE_SK:
      return "DRIVERS_LICENSE_SK";
    case RedactionIdentifier::DRIVERS_LICENSE_US:
      return "DRIVERS_LICENSE_US";
    case RedactionIdentifier::DRUG_ENFORCEMENT_AGENCY_NUMBER_US:
      return "DRUG_ENFORCEMENT_AGENCY_NUMBER_US";
    case RedactionIdentifier::ELECTORAL_ROLL_NUMBER_GB:
      return "ELECTORAL_ROLL_NUMBER_GB";
    case RedactionIdentifier::EMAIL_ADDRESS:
      return "EMAIL_ADDRESS";
    case RedactionIdentifier::HEALTH_INSURANCE_CARD_NUMBER_EU:
      return "HEALTH_INSURANCE_CARD_NUMBER_EU";
    case RedactionIdentifier::HEALTH_INSURANCE_CLAIM_NUMBER_US:
      return "HEALTH_INSURANCE_CLAIM_NUMBER_US";
    case RedactionIdentifier::HEALTH_INSURANCE_NUMBER_FR:
      return "HEALTH_INSURANCE_NUMBER_FR";
    case RedactionIdentifier::HEALTHCARE_PROCEDURE_CODE_US:
      return "HEALTHCARE_PROCEDURE_CODE_US";
    case RedactionIdentifier::INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US:
      return "INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_US";
    case RedactionIdentifier::INSEE_CODE_FR:
      return "INSEE_CODE_FR";
    case RedactionIdentifier::IP_ADDRESS:
      return "IP_ADDRESS";
    case RedactionIdentifier::LAT_LONG:
      return "LAT_LONG";
    case RedactionIdentifier::MEDICARE_BENEFICIARY_NUMBER_US:
      return "MEDICARE_BENEFICIARY_NUMBER_US";
    case RedactionIdentifier::NAME:
      return "NAME";
    case RedactionIdentifier::NATIONAL_DRUG_CODE_US:
      return "NATIONAL_DRUG_CODE_US";
    case RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_DE:
      return "NATIONAL_IDENTIFICATION_NUMBER_DE";
    case RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_ES:
      return "NATIONAL_IDENTIFICATION_NUMBER_ES";
    case RedactionIdentifier::NATIONAL_IDENTIFICATION_NUMBER_IT:
      return "NATIONAL_IDENTIFICATION_NUMBER_IT";
    case RedactionIdentifier::NATIONAL_INSURANCE_NUMBER_GB:
      return "NATIONAL_INSURANCE_NUMBER_GB";
    case RedactionIdentifier::NATIONAL_PROVIDER_ID_US:
      return "NATIONAL_PROVIDER_ID_US";
    case RedactionIdentifier::NHS_NUMBER_GB:
      return "NHS_NUMBER_GB";
    case RedactionIdentifier::NIE_NUMBER_ES:
      return "NIE_NUMBER_ES";
    case RedactionIdentifier::NIF_NUMBER_ES:
      return "NIF_NUMBER_ES";
    case RedactionIdentifier::OPEN_SSH_PRIVATE_KEY:
      return "OPEN_SSH_PRIVATE_KEY";
    case RedactionIdentifier::PASSPORT_NUMBER_CA:
      return "PASSPORT_NUMBER_CA";
    case RedactionIdentifier::PASSPORT_NUMBER_DE:
      return "PASSPORT_NUMBER_DE";
    case RedactionIdentifier::PASSPORT_NUMBER_ES:
      return "PASSPORT_NUMBER_ES";
    case RedactionIdentifier::PASSPORT_NUMBER_FR:
      return "PASSPORT_NUMBER_FR";
    case RedactionIdentifier::PASSPORT_NUMBER_GB:
      return "PASSPORT_NUMBER_GB";
    case RedactionIdentifier::PASSPORT_NUMBER_IT:
      return "PASSPORT_NUMBER_IT";
    case RedactionIdentifier::PASSPORT_NUMBER_US:
      return "PASSPORT_NUMBER_US";
    case RedactionIdentifier::PERMANENT_RESIDENCE_NUMBER_CA:
      return "PERMANENT_RESIDENCE_NUMBER_CA";
    case RedactionIdentifier::PERSONAL_HEALTH_NUMBER_CA:
      return "PERSONAL_HEALTH_NUMBER_CA";
    case RedactionIdentifier::PGP_PRIVATE_KEY:
      return "PGP_PRIVATE_KEY";
    case RedactionIdentifier::PHONE_NUMBER_BR:
      return "PHONE_NUMBER_BR";
    case RedactionIdentifier::PHONE_NUMBER_DE:
      return "PHONE_NUMBER_DE";
    case RedactionIdentifier::PHONE_NUMBER_ES:
      return "PHONE_NUMBER_ES";
    case RedactionIdentifier::PHONE_NUMBER_FR:
      return "PHONE_NUMBER_FR";
    case RedactionIdentifier::PHONE_NUMBER_GB:
      return "PHONE_NUMBER_GB";
    case RedactionIdentifier::PHONE_NUMBER_IT:
      return "PHONE_NUMBER_IT";
    case RedactionIdentifier::PHONE_NUMBER_US:
      return "PHONE_NUMBER_US";
    case RedactionIdentifier::PKCS_PRIVATE_KEY:
      return "PKCS_PRIVATE_KEY";
    case RedactionIdentifier::POSTAL_CODE_CA:
      return "POSTAL_CODE_CA";
    case RedactionIdentifier::PUTTY_PRIVATE_KEY:
      return "PUTTY_PRIVATE_KEY";
    case RedactionIdentifier::RG_NUMBER_BR:
      return "RG_NUMBER_BR";
    case RedactionIdentifier::SOCIAL_INSURANCE_NUMBER_CA:
      return "SOCIAL_INSURANCE_NUMBER_CA";
    case RedactionIdentifier::SSN_ES:
      return "SSN_ES";
    case RedactionIdentifier::SSN_US:
      return "SSN_US";
    case RedactionIdentifier::TAX_ID_DE:
      return "TAX_ID_DE";
    case RedactionIdentifier::TAX_ID_ES:
      return "TAX_ID_ES";
    case RedactionIdentifier::TAX_ID_FR:
      return "TAX_ID_FR";
    case RedactionIdentifier::TAX_ID_GB:
      return "TAX_ID_GB";
    case RedactionIdentifier::VEHICLE_IDENTIFICATION_NUMBER:
      return "VEHICLE_IDENTIFICATION_NUMBER";
    case RedactionIdentifier::ZIP_CODE_US:
      return "ZIP_CODE_US";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RedactionIdentifierMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
