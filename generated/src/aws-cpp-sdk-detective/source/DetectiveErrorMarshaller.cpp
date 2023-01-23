/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/detective/DetectiveErrorMarshaller.h>
#include <aws/detective/DetectiveErrors.h>

using namespace Aws::Client;
using namespace Aws::Detective;

AWSError<CoreErrors> DetectiveErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DetectiveErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}