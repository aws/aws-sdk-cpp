/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ecr/ECRErrorMarshaller.h>
#include <aws/ecr/ECRErrors.h>

using namespace Aws::Client;
using namespace Aws::ECR;

AWSError<CoreErrors> ECRErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ECRErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}