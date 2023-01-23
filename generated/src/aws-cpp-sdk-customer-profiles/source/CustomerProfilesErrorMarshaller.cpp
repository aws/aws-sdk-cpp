/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/customer-profiles/CustomerProfilesErrorMarshaller.h>
#include <aws/customer-profiles/CustomerProfilesErrors.h>

using namespace Aws::Client;
using namespace Aws::CustomerProfiles;

AWSError<CoreErrors> CustomerProfilesErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CustomerProfilesErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}