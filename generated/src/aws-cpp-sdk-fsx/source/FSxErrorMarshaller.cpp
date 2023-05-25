/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/fsx/FSxErrorMarshaller.h>
#include <aws/fsx/FSxErrors.h>

using namespace Aws::Client;
using namespace Aws::FSx;

AWSError<CoreErrors> FSxErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FSxErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}