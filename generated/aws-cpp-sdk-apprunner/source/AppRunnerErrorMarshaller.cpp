/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/apprunner/AppRunnerErrorMarshaller.h>
#include <aws/apprunner/AppRunnerErrors.h>

using namespace Aws::Client;
using namespace Aws::AppRunner;

AWSError<CoreErrors> AppRunnerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppRunnerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}