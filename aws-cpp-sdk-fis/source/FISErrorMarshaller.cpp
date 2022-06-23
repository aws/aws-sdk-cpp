/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/fis/FISErrorMarshaller.h>
#include <aws/fis/FISErrors.h>

using namespace Aws::Client;
using namespace Aws::FIS;

AWSError<CoreErrors> FISErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FISErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}