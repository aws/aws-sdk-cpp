/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/healthlake/HealthLakeErrorMarshaller.h>
#include <aws/healthlake/HealthLakeErrors.h>

using namespace Aws::Client;
using namespace Aws::HealthLake;

AWSError<CoreErrors> HealthLakeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = HealthLakeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}