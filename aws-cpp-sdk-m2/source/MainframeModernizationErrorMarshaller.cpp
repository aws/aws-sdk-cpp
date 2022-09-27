/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/m2/MainframeModernizationErrorMarshaller.h>
#include <aws/m2/MainframeModernizationErrors.h>

using namespace Aws::Client;
using namespace Aws::MainframeModernization;

AWSError<CoreErrors> MainframeModernizationErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MainframeModernizationErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}