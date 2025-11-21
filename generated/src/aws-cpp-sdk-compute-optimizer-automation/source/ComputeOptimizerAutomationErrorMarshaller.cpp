/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrorMarshaller.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::ComputeOptimizerAutomation;

AWSError<CoreErrors> ComputeOptimizerAutomationErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = ComputeOptimizerAutomationErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}