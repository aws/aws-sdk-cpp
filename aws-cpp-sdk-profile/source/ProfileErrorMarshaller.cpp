/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/profile/ProfileErrorMarshaller.h>
#include <aws/profile/ProfileErrors.h>

using namespace Aws::Client;
using namespace Aws::Profile;

AWSError<CoreErrors> ProfileErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ProfileErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}