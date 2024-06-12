/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/apptest/AppTestErrorMarshaller.h>
#include <aws/apptest/AppTestErrors.h>

using namespace Aws::Client;
using namespace Aws::AppTest;

AWSError<CoreErrors> AppTestErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppTestErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}