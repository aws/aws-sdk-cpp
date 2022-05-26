/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/emr-serverless/EMRServerlessWebServiceErrorMarshaller.h>
#include <aws/emr-serverless/EMRServerlessWebServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::EMRServerlessWebService;

AWSError<CoreErrors> EMRServerlessWebServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EMRServerlessWebServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}