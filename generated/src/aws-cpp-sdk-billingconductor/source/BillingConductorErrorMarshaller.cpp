/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/BillingConductorErrorMarshaller.h>
#include <aws/billingconductor/BillingConductorErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::BillingConductor;

AWSError<CoreErrors> BillingConductorErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = BillingConductorErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}