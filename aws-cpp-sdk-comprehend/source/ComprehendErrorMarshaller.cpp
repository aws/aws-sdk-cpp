/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/comprehend/ComprehendErrorMarshaller.h>
#include <aws/comprehend/ComprehendErrors.h>

using namespace Aws::Client;
using namespace Aws::Comprehend;

AWSError<CoreErrors> ComprehendErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ComprehendErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}