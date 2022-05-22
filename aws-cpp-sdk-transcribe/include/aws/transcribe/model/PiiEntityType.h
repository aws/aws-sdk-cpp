/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
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
    ALL
  };

namespace PiiEntityTypeMapper
{
AWS_TRANSCRIBESERVICE_API PiiEntityType GetPiiEntityTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForPiiEntityType(PiiEntityType value);
} // namespace PiiEntityTypeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
