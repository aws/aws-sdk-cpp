/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/PollyErrors.h>

using namespace Aws::Client;
using namespace Aws::Polly;

AWSError<CoreErrors> PollyErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = PollyErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}