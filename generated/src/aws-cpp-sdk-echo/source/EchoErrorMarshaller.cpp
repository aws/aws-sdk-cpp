/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/echo/EchoErrorMarshaller.h>
#include <aws/echo/EchoErrors.h>

using namespace Aws::Client;
using namespace Aws::Echo;

AWSError<CoreErrors> EchoErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EchoErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}