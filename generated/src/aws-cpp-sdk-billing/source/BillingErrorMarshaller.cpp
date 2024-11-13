/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/billing/BillingErrorMarshaller.h>
#include <aws/billing/BillingErrors.h>

using namespace Aws::Client;
using namespace Aws::Billing;

AWSError<CoreErrors> BillingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BillingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}