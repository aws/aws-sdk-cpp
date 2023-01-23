/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/ConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::Connect;

AWSError<CoreErrors> ConnectErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ConnectErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}