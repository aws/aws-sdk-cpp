/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/PIIEntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace PIIEntityTypeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int ADDRESS_HASH = HashingUtils::HashString("ADDRESS");
static const int AGE_HASH = HashingUtils::HashString("AGE");
static const int NAME_HASH = HashingUtils::HashString("NAME");
static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int PHONE_HASH = HashingUtils::HashString("PHONE");
static const int USERNAME_HASH = HashingUtils::HashString("USERNAME");
static const int PASSWORD_HASH = HashingUtils::HashString("PASSWORD");
static const int DRIVER_ID_HASH = HashingUtils::HashString("DRIVER_ID");
static const int LICENSE_PLATE_HASH = HashingUtils::HashString("LICENSE_PLATE");
static const int VEHICLE_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("VEHICLE_IDENTIFICATION_NUMBER");
static const int CREDIT_DEBIT_CARD_CVV_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_CVV");
static const int CREDIT_DEBIT_CARD_EXPIRY_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_EXPIRY");
static const int CREDIT_DEBIT_CARD_NUMBER_HASH = HashingUtils::HashString("CREDIT_DEBIT_CARD_NUMBER");
static const int PIN_HASH = HashingUtils::HashString("PIN");
static const int INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("INTERNATIONAL_BANK_ACCOUNT_NUMBER");
static const int SWIFT_CODE_HASH = HashingUtils::HashString("SWIFT_CODE");
static const int IP_ADDRESS_HASH = HashingUtils::HashString("IP_ADDRESS");
static const int MAC_ADDRESS_HASH = HashingUtils::HashString("MAC_ADDRESS");
static const int URL_HASH = HashingUtils::HashString("URL");
static const int AWS_ACCESS_KEY_HASH = HashingUtils::HashString("AWS_ACCESS_KEY");
static const int AWS_SECRET_KEY_HASH = HashingUtils::HashString("AWS_SECRET_KEY");
static const int US_BANK_ACCOUNT_NUMBER_HASH = HashingUtils::HashString("US_BANK_ACCOUNT_NUMBER");
static const int US_BANK_ROUTING_NUMBER_HASH = HashingUtils::HashString("US_BANK_ROUTING_NUMBER");
static const int US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH = HashingUtils::HashString("US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER");
static const int US_PASSPORT_NUMBER_HASH = HashingUtils::HashString("US_PASSPORT_NUMBER");
static const int US_SOCIAL_SECURITY_NUMBER_HASH = HashingUtils::HashString("US_SOCIAL_SECURITY_NUMBER");
static const int CA_HEALTH_NUMBER_HASH = HashingUtils::HashString("CA_HEALTH_NUMBER");
static const int CA_SOCIAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("CA_SOCIAL_INSURANCE_NUMBER");
static const int UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_HEALTH_SERVICE_NUMBER");
static const int UK_NATIONAL_INSURANCE_NUMBER_HASH = HashingUtils::HashString("UK_NATIONAL_INSURANCE_NUMBER");
static const int UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH = HashingUtils::HashString("UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER");

PIIEntityType GetPIIEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return PIIEntityType::ALL;
  } else if (hashCode == ADDRESS_HASH) {
    return PIIEntityType::ADDRESS;
  } else if (hashCode == AGE_HASH) {
    return PIIEntityType::AGE;
  } else if (hashCode == NAME_HASH) {
    return PIIEntityType::NAME;
  } else if (hashCode == EMAIL_HASH) {
    return PIIEntityType::EMAIL;
  } else if (hashCode == PHONE_HASH) {
    return PIIEntityType::PHONE;
  } else if (hashCode == USERNAME_HASH) {
    return PIIEntityType::USERNAME;
  } else if (hashCode == PASSWORD_HASH) {
    return PIIEntityType::PASSWORD;
  } else if (hashCode == DRIVER_ID_HASH) {
    return PIIEntityType::DRIVER_ID;
  } else if (hashCode == LICENSE_PLATE_HASH) {
    return PIIEntityType::LICENSE_PLATE;
  } else if (hashCode == VEHICLE_IDENTIFICATION_NUMBER_HASH) {
    return PIIEntityType::VEHICLE_IDENTIFICATION_NUMBER;
  } else if (hashCode == CREDIT_DEBIT_CARD_CVV_HASH) {
    return PIIEntityType::CREDIT_DEBIT_CARD_CVV;
  } else if (hashCode == CREDIT_DEBIT_CARD_EXPIRY_HASH) {
    return PIIEntityType::CREDIT_DEBIT_CARD_EXPIRY;
  } else if (hashCode == CREDIT_DEBIT_CARD_NUMBER_HASH) {
    return PIIEntityType::CREDIT_DEBIT_CARD_NUMBER;
  } else if (hashCode == PIN_HASH) {
    return PIIEntityType::PIN;
  } else if (hashCode == INTERNATIONAL_BANK_ACCOUNT_NUMBER_HASH) {
    return PIIEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER;
  } else if (hashCode == SWIFT_CODE_HASH) {
    return PIIEntityType::SWIFT_CODE;
  } else if (hashCode == IP_ADDRESS_HASH) {
    return PIIEntityType::IP_ADDRESS;
  } else if (hashCode == MAC_ADDRESS_HASH) {
    return PIIEntityType::MAC_ADDRESS;
  } else if (hashCode == URL_HASH) {
    return PIIEntityType::URL;
  } else if (hashCode == AWS_ACCESS_KEY_HASH) {
    return PIIEntityType::AWS_ACCESS_KEY;
  } else if (hashCode == AWS_SECRET_KEY_HASH) {
    return PIIEntityType::AWS_SECRET_KEY;
  } else if (hashCode == US_BANK_ACCOUNT_NUMBER_HASH) {
    return PIIEntityType::US_BANK_ACCOUNT_NUMBER;
  } else if (hashCode == US_BANK_ROUTING_NUMBER_HASH) {
    return PIIEntityType::US_BANK_ROUTING_NUMBER;
  } else if (hashCode == US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER_HASH) {
    return PIIEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER;
  } else if (hashCode == US_PASSPORT_NUMBER_HASH) {
    return PIIEntityType::US_PASSPORT_NUMBER;
  } else if (hashCode == US_SOCIAL_SECURITY_NUMBER_HASH) {
    return PIIEntityType::US_SOCIAL_SECURITY_NUMBER;
  } else if (hashCode == CA_HEALTH_NUMBER_HASH) {
    return PIIEntityType::CA_HEALTH_NUMBER;
  } else if (hashCode == CA_SOCIAL_INSURANCE_NUMBER_HASH) {
    return PIIEntityType::CA_SOCIAL_INSURANCE_NUMBER;
  } else if (hashCode == UK_NATIONAL_HEALTH_SERVICE_NUMBER_HASH) {
    return PIIEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER;
  } else if (hashCode == UK_NATIONAL_INSURANCE_NUMBER_HASH) {
    return PIIEntityType::UK_NATIONAL_INSURANCE_NUMBER;
  } else if (hashCode == UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER_HASH) {
    return PIIEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PIIEntityType>(hashCode);
  }

  return PIIEntityType::NOT_SET;
}

Aws::String GetNameForPIIEntityType(PIIEntityType enumValue) {
  switch (enumValue) {
    case PIIEntityType::NOT_SET:
      return {};
    case PIIEntityType::ALL:
      return "ALL";
    case PIIEntityType::ADDRESS:
      return "ADDRESS";
    case PIIEntityType::AGE:
      return "AGE";
    case PIIEntityType::NAME:
      return "NAME";
    case PIIEntityType::EMAIL:
      return "EMAIL";
    case PIIEntityType::PHONE:
      return "PHONE";
    case PIIEntityType::USERNAME:
      return "USERNAME";
    case PIIEntityType::PASSWORD:
      return "PASSWORD";
    case PIIEntityType::DRIVER_ID:
      return "DRIVER_ID";
    case PIIEntityType::LICENSE_PLATE:
      return "LICENSE_PLATE";
    case PIIEntityType::VEHICLE_IDENTIFICATION_NUMBER:
      return "VEHICLE_IDENTIFICATION_NUMBER";
    case PIIEntityType::CREDIT_DEBIT_CARD_CVV:
      return "CREDIT_DEBIT_CARD_CVV";
    case PIIEntityType::CREDIT_DEBIT_CARD_EXPIRY:
      return "CREDIT_DEBIT_CARD_EXPIRY";
    case PIIEntityType::CREDIT_DEBIT_CARD_NUMBER:
      return "CREDIT_DEBIT_CARD_NUMBER";
    case PIIEntityType::PIN:
      return "PIN";
    case PIIEntityType::INTERNATIONAL_BANK_ACCOUNT_NUMBER:
      return "INTERNATIONAL_BANK_ACCOUNT_NUMBER";
    case PIIEntityType::SWIFT_CODE:
      return "SWIFT_CODE";
    case PIIEntityType::IP_ADDRESS:
      return "IP_ADDRESS";
    case PIIEntityType::MAC_ADDRESS:
      return "MAC_ADDRESS";
    case PIIEntityType::URL:
      return "URL";
    case PIIEntityType::AWS_ACCESS_KEY:
      return "AWS_ACCESS_KEY";
    case PIIEntityType::AWS_SECRET_KEY:
      return "AWS_SECRET_KEY";
    case PIIEntityType::US_BANK_ACCOUNT_NUMBER:
      return "US_BANK_ACCOUNT_NUMBER";
    case PIIEntityType::US_BANK_ROUTING_NUMBER:
      return "US_BANK_ROUTING_NUMBER";
    case PIIEntityType::US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER:
      return "US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER";
    case PIIEntityType::US_PASSPORT_NUMBER:
      return "US_PASSPORT_NUMBER";
    case PIIEntityType::US_SOCIAL_SECURITY_NUMBER:
      return "US_SOCIAL_SECURITY_NUMBER";
    case PIIEntityType::CA_HEALTH_NUMBER:
      return "CA_HEALTH_NUMBER";
    case PIIEntityType::CA_SOCIAL_INSURANCE_NUMBER:
      return "CA_SOCIAL_INSURANCE_NUMBER";
    case PIIEntityType::UK_NATIONAL_HEALTH_SERVICE_NUMBER:
      return "UK_NATIONAL_HEALTH_SERVICE_NUMBER";
    case PIIEntityType::UK_NATIONAL_INSURANCE_NUMBER:
      return "UK_NATIONAL_INSURANCE_NUMBER";
    case PIIEntityType::UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER:
      return "UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PIIEntityTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
