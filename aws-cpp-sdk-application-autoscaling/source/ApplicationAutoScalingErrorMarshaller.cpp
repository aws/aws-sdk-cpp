/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrorMarshaller.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>

using namespace Aws::Client;
using namespace Aws::ApplicationAutoScaling;

AWSError<CoreErrors> ApplicationAutoScalingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ApplicationAutoScalingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}