/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class GuardrailPiiEntityType
  {
    NOT_SET,
    ADDRESS,
    AGE,
    AWS_ACCESS_KEY,
    AWS_SECRET_KEY,
    CA_HEALTH_NUMBER,
    CA_SOCIAL_INSURANCE_NUMBER,
    CREDIT_DEBIT_CARD_CVV,
    CREDIT_DEBIT_CARD_EXPIRY,
    CREDIT_DEBIT_CARD_NUMBER,
    DRIVER_ID,
    EMAIL,
    INTERNATIONAL_BANK_ACCOUNT_NUMBER,
    IP_ADDRESS,
    LICENSE_PLATE,
    MAC_ADDRESS,
    NAME,
    PASSWORD,
    PHONE,
    PIN,
    SWIFT_CODE,
    UK_NATIONAL_HEALTH_SERVICE_NUMBER,
    UK_NATIONAL_INSURANCE_NUMBER,
    UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER,
    URL,
    USERNAME,
    US_BANK_ACCOUNT_NUMBER,
    US_BANK_ROUTING_NUMBER,
    US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER,
    US_PASSPORT_NUMBER,
    US_SOCIAL_SECURITY_NUMBER,
    VEHICLE_IDENTIFICATION_NUMBER
  };

namespace GuardrailPiiEntityTypeMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuardrailPiiEntityType GetGuardrailPiiEntityTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuardrailPiiEntityType(GuardrailPiiEntityType value);
} // namespace GuardrailPiiEntityTypeMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
