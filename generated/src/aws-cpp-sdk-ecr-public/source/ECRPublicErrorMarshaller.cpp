/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ecr-public/ECRPublicErrorMarshaller.h>
#include <aws/ecr-public/ECRPublicErrors.h>

using namespace Aws::Client;
using namespace Aws::ECRPublic;

AWSError<CoreErrors> ECRPublicErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ECRPublicErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}