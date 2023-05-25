/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrors.h>

using namespace Aws::Client;
using namespace Aws::LicenseManagerLinuxSubscriptions;

AWSError<CoreErrors> LicenseManagerLinuxSubscriptionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LicenseManagerLinuxSubscriptionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}