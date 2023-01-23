/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/autoscaling/AutoScalingErrorMarshaller.h>
#include <aws/autoscaling/AutoScalingErrors.h>

using namespace Aws::Client;
using namespace Aws::AutoScaling;

AWSError<CoreErrors> AutoScalingErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AutoScalingErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}