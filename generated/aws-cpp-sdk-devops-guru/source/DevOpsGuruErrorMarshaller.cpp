/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/devops-guru/DevOpsGuruErrorMarshaller.h>
#include <aws/devops-guru/DevOpsGuruErrors.h>

using namespace Aws::Client;
using namespace Aws::DevOpsGuru;

AWSError<CoreErrors> DevOpsGuruErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DevOpsGuruErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}