/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/emr-serverless/EMRServerlessErrorMarshaller.h>
#include <aws/emr-serverless/EMRServerlessErrors.h>

using namespace Aws::Client;
using namespace Aws::EMRServerless;

AWSError<CoreErrors> EMRServerlessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EMRServerlessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}