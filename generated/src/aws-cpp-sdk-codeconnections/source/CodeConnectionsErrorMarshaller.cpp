/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codeconnections/CodeConnectionsErrorMarshaller.h>
#include <aws/codeconnections/CodeConnectionsErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeConnections;

AWSError<CoreErrors> CodeConnectionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeConnectionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}