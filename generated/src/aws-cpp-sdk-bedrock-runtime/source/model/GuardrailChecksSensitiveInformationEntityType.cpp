/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationEntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace GuardrailChecksSensitiveInformationEntityTypeMapper {

static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
static const int AGE_HASH = HashingUtils::HashString("AGE");
static const int AWS_ACCESS_KEY_HASH = HashingUtils::HashString("AWS_ACCESS_KEY");
static const int AWS_SECRET_KEY_HASH = HashingUtils::HashString("AWS_SECRET_KEY");
static const int CA_HEALTH_NUMBER_HASH = HashingUtils::HashString("CA_HEALTH_NUMBER");
static const int CA_SOCIAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("CA_SOCIAL_INSURANCE_NUMBER");
static const int CREDIT_DEBIT_CARD_CVV_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_CVV");
static const int CREDIT_DEBIT_CARD_EXPIRY_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_EXPIRY");
static const int CREDIT_DEBIT_CARD_NUMBER_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_NUMBER");
static const int DRIVER_ID_HASH = HashingUtils::HashString("DRIVER_ID");
static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("INTERNATIONAL_BANK_ACCOUNT_NUMBER");
static const int IP_ADDRESS_HASH = HashingUtils::HashString("IP_ADDRESS");
static const int LICENSE_PLATE_HASH = HashingUtils::HashString("LICENSE_PLATE");
static const int MAC_ADDRESS_HASH = HashingUtils::HashString("MAC_ADDRESS");
static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
static const int PHONE_HASH = HashingUtils::HashString("PHONE");
static const int PIN_HASH = HashingUtils::HashString("PIN");
static const int SWIFT_CODE_HASH = HashingUtils::HashString("SWIFT_CODE");
static const int UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_HEALTH_SERVICE_NUMBER");
static const int UK_NATIONAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_INSURANCE_NUMBER");
static const int UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH = HashingUtils::HashString("UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER");
static const int URL_HASH = HashingUtils::HashString("URL");
static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");
static const int US_BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("US_BANK_ACCOUNT_NUMBER");
static const int US_BANK_ROUTING_NUMBER_HASH = HashingUtils::HashString("US_BANK_ROUTING_NUMBER");
static const int US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER");
static const int US_PASSPORT_NUMBER_HASH = HashingUtils::HashString("US_PASSPORT_NUMBER");
static const int US_SOCIAL_SECURITY_NUMBER_HASH = HashingUtils::HashString("US_SOCIAL_SECURITY_NUMBER");
static const int VEHICLE_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("VEHICLE_IDENTIFICATION_NUMBER");

GuardrailChecksSensitiveInformationEntityType GetGuardrailChecksSensitiveInformationEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADDRESS_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::ADDRESS;
  } else if (hashCode == AGE_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::AGE;
  } else if (hashCode == AWS_ACCESS_KEY_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::AWS_ACCESS_KEY;
  } else if (hashCode == AWS_SECRET_KEY_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::AWS_SECRET_KEY;
  } else if (hashCode == CA_HEALTH_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::CA_HEALTH_NUMBER;
  } else if (hashCode == CA_SOCIAL_INSURANCE_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::CA_SOCIAL_INSURANCE_NUMBER;
  } else if (hashCode == CREDIT_DEBIT_CARD_CVV_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_CVV;
  } else if (hashCode == CREDIT_DEBIT_CARD_EXPIRY_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_EXPIRY;
  } else if (hashCode == CREDIT_DEBIT_CARD_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_NUMBER;
  } else if (hashCode == DRIVER_ID_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::DRIVER_ID;
  } else if (hashCode == EMAIL_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::EMAIL;
  } else if (hashCode == INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER;
  } else if (hashCode == IP_ADDRESS_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::IP_ADDRESS;
  } else if (hashCode == LICENSE_PLATE_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::LICENSE_PLATE;
  } else if (hashCode == MAC_ADDRESS_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::MAC_ADDRESS;
  } else if (hashCode == NAME_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::NAME;
  } else if (hashCode == PASSWORD_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::PASSWORD;
  } else if (hashCode == PHONE_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::PHONE;
  } else if (hashCode == PIN_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::PIN;
  } else if (hashCode == SWIFT_CODE_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::SWIFT_CODE;
  } else if (hashCode == UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER;
  } else if (hashCode == UK_NATIONAL_INSURANCE_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::UK_NATIONAL_INSURANCE_NUMBER;
  } else if (hashCode == UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER;
  } else if (hashCode == URL_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::URL;
  } else if (hashCode == USERNAME_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::USERNAME;
  } else if (hashCode == US_BANK_ACCOUNT_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::US_BANK_ACCOUNT_NUMBER;
  } else if (hashCode == US_BANK_ROUTING_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::US_BANK_ROUTING_NUMBER;
  } else if (hashCode == US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER;
  } else if (hashCode == US_PASSPORT_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::US_PASSPORT_NUMBER;
  } else if (hashCode == US_SOCIAL_SECURITY_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::US_SOCIAL_SECURITY_NUMBER;
  } else if (hashCode == VEHICLE_IDENTIFICATION_NUMBER_HASH) {
    return GuardrailChecksSensitiveInformationEntityType::VEHICLE_IDENTIFICATION_NUMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuardrailChecksSensitiveInformationEntityType>(hashCode);
  }

  return GuardrailChecksSensitiveInformationEntityType::NOT_SET;
}

Aws::String GetNameForGuardrailChecksSensitiveInformationEntityType(GuardrailChecksSensitiveInformationEntityType enumValue) {
  switch (enumValue) {
    case GuardrailChecksSensitiveInformationEntityType::NOT_SET:
      return {};
    case GuardrailChecksSensitiveInformationEntityType::ADDRESS:
      return "ADDRESS";
    case GuardrailChecksSensitiveInformationEntityType::AGE:
      return "AGE";
    case GuardrailChecksSensitiveInformationEntityType::AWS_ACCESS_KEY:
      return "AWS_ACCESS_KEY";
    case GuardrailChecksSensitiveInformationEntityType::AWS_SECRET_KEY:
      return "AWS_SECRET_KEY";
    case GuardrailChecksSensitiveInformationEntityType::CA_HEALTH_NUMBER:
      return "CA_HEALTH_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::CA_SOCIAL_INSURANCE_NUMBER:
      return "CA_SOCIAL_INSURANCE_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_CVV:
      return "CREDIT_DEBIT_CARD_CVV";
    case GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_EXPIRY:
      return "CREDIT_DEBIT_CARD_EXPIRY";
    case GuardrailChecksSensitiveInformationEntityType::CREDIT_DEBIT_CARD_NUMBER:
      return "CREDIT_DEBIT_CARD_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::DRIVER_ID:
      return "DRIVER_ID";
    case GuardrailChecksSensitiveInformationEntityType::EMAIL:
      return "EMAIL";
    case GuardrailChecksSensitiveInformationEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER:
      return "INTERNATIONAL_BANK_ACCOUNT_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::IP_ADDRESS:
      return "IP_ADDRESS";
    case GuardrailChecksSensitiveInformationEntityType::LICENSE_PLATE:
      return "LICENSE_PLATE";
    case GuardrailChecksSensitiveInformationEntityType::MAC_ADDRESS:
      return "MAC_ADDRESS";
    case GuardrailChecksSensitiveInformationEntityType::NAME:
      return "NAME";
    case GuardrailChecksSensitiveInformationEntityType::PASSWORD:
      return "PASSWORD";
    case GuardrailChecksSensitiveInformationEntityType::PHONE:
      return "PHONE";
    case GuardrailChecksSensitiveInformationEntityType::PIN:
      return "PIN";
    case GuardrailChecksSensitiveInformationEntityType::SWIFT_CODE:
      return "SWIFT_CODE";
    case GuardrailChecksSensitiveInformationEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER:
      return "UK_NATIONAL_HEALTH_SERVICE_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::UK_NATIONAL_INSURANCE_NUMBER:
      return "UK_NATIONAL_INSURANCE_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER:
      return "UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::URL:
      return "URL";
    case GuardrailChecksSensitiveInformationEntityType::USERNAME:
      return "USERNAME";
    case GuardrailChecksSensitiveInformationEntityType::US_BANK_ACCOUNT_NUMBER:
      return "US_BANK_ACCOUNT_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::US_BANK_ROUTING_NUMBER:
      return "US_BANK_ROUTING_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER:
      return "US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::US_PASSPORT_NUMBER:
      return "US_PASSPORT_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::US_SOCIAL_SECURITY_NUMBER:
      return "US_SOCIAL_SECURITY_NUMBER";
    case GuardrailChecksSensitiveInformationEntityType::VEHICLE_IDENTIFICATION_NUMBER:
      return "VEHICLE_IDENTIFICATION_NUMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuardrailChecksSensitiveInformationEntityTypeMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
