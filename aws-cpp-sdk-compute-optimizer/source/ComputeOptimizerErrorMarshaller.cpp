/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/compute-optimizer/ComputeOptimizerErrorMarshaller.h>
#include <aws/compute-optimizer/ComputeOptimizerErrors.h>

using namespace Aws::Client;
using namespace Aws::ComputeOptimizer;

AWSError<CoreErrors> ComputeOptimizerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ComputeOptimizerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}