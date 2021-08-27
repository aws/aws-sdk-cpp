/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/health/HealthErrorMarshaller.h>
#include <aws/health/HealthErrors.h>

using namespace Aws::Client;
using namespace Aws::Health;

AWSError<CoreErrors> HealthErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = HealthErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}