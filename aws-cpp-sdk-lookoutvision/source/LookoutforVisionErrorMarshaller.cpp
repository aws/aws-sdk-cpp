/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lookoutvision/LookoutforVisionErrorMarshaller.h>
#include <aws/lookoutvision/LookoutforVisionErrors.h>

using namespace Aws::Client;
using namespace Aws::LookoutforVision;

AWSError<CoreErrors> LookoutforVisionErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LookoutforVisionErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}