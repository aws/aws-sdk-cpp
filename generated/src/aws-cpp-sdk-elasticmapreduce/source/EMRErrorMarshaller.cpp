/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticmapreduce/EMRErrorMarshaller.h>
#include <aws/elasticmapreduce/EMRErrors.h>

using namespace Aws::Client;
using namespace Aws::EMR;

AWSError<CoreErrors> EMRErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EMRErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}