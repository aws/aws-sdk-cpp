/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
enum class PIIEntityType {
  NOT_SET,
  ALL,
  ADDRESS,
  AGE,
  NAME,
  EMAIL,
  PHONE,
  USERNAME,
  PASSWORD,
  DRIVER_ID,
  LICENSE_PLATE,
  VEHICLE_IDENTIFICATION_NUMBER,
  CREDIT_DEBIT_CARD_CVV,
  CREDIT_DEBIT_CARD_EXPIRY,
  CREDIT_DEBIT_CARD_NUMBER,
  PIN,
  INTERNATIONAL_BANK_ACCOUNT_NUMBER,
  SWIFT_CODE,
  IP_ADDRESS,
  MAC_ADDRESS,
  URL,
  AWS_ACCESS_KEY,
  AWS_SECRET_KEY,
  US_BANK_ACCOUNT_NUMBER,
  US_BANK_ROUTING_NUMBER,
  US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER,
  US_PASSPORT_NUMBER,
  US_SOCIAL_SECURITY_NUMBER,
  CA_HEALTH_NUMBER,
  CA_SOCIAL_INSURANCE_NUMBER,
  UK_NATIONAL_HEALTH_SERVICE_NUMBER,
  UK_NATIONAL_INSURANCE_NUMBER,
  UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER
};

namespace PIIEntityTypeMapper {
AWS_BEDROCKDATAAUTOMATION_API PIIEntityType GetPIIEntityTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForPIIEntityType(PIIEntityType value);
}  // namespace PIIEntityTypeMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
