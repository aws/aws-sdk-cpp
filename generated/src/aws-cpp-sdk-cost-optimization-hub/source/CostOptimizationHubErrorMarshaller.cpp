/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrorMarshaller.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrors.h>

using namespace Aws::Client;
using namespace Aws::CostOptimizationHub;

AWSError<CoreErrors> CostOptimizationHubErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CostOptimizationHubErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}