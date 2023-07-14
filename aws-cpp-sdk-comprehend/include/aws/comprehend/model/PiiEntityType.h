/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class PiiEntityType
  {
    NOT_SET,
    BANK_ACCOUNT_NUMBER,
    BANK_ROUTING,
    CREDIT_DEBIT_NUMBER,
    CREDIT_DEBIT_CVV,
    CREDIT_DEBIT_EXPIRY,
    PIN,
    EMAIL,
    ADDRESS,
    NAME,
    PHONE,
    SSN,
    DATE_TIME,
    PASSPORT_NUMBER,
    DRIVER_ID,
    URL,
    AGE,
    USERNAME,
    PASSWORD,
    AWS_ACCESS_KEY,
    AWS_SECRET_KEY,
    IP_ADDRESS,
    MAC_ADDRESS,
    ALL,
    LICENSE_PLATE,
    VEHICLE_IDENTIFICATION_NUMBER,
    UK_NATIONAL_INSURANCE_NUMBER,
    CA_SOCIAL_INSURANCE_NUMBER,
    US_INDIVIDUAL_TAX_IDENTIFICATION_NUMBER,
    UK_UNIQUE_TAXPAYER_REFERENCE_NUMBER,
    IN_PERMANENT_ACCOUNT_NUMBER,
    IN_NREGA,
    INTERNATIONAL_BANK_ACCOUNT_NUMBER,
    SWIFT_CODE,
    UK_NATIONAL_HEALTH_SERVICE_NUMBER,
    CA_HEALTH_NUMBER,
    IN_AADHAAR,
    IN_VOTER_NUMBER
  };

namespace PiiEntityTypeMapper
{
AWS_COMPREHEND_API PiiEntityType GetPiiEntityTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForPiiEntityType(PiiEntityType value);
} // namespace PiiEntityTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
