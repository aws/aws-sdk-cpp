/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/honeycode/HoneycodeErrorMarshaller.h>
#include <aws/honeycode/HoneycodeErrors.h>

using namespace Aws::Client;
using namespace Aws::Honeycode;

AWSError<CoreErrors> HoneycodeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = HoneycodeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}