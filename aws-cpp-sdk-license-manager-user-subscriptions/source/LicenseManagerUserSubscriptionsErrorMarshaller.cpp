/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrors.h>

using namespace Aws::Client;
using namespace Aws::LicenseManagerUserSubscriptions;

AWSError<CoreErrors> LicenseManagerUserSubscriptionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LicenseManagerUserSubscriptionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}