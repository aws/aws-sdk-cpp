/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mwaa/MWAAErrorMarshaller.h>
#include <aws/mwaa/MWAAErrors.h>

using namespace Aws::Client;
using namespace Aws::MWAA;

AWSError<CoreErrors> MWAAErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MWAAErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}