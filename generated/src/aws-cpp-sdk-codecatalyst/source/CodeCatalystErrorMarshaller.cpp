/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codecatalyst/CodeCatalystErrorMarshaller.h>
#include <aws/codecatalyst/CodeCatalystErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeCatalyst;

AWSError<CoreErrors> CodeCatalystErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeCatalystErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}