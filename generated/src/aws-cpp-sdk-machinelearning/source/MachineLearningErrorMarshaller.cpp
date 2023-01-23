/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/machinelearning/MachineLearningErrorMarshaller.h>
#include <aws/machinelearning/MachineLearningErrors.h>

using namespace Aws::Client;
using namespace Aws::MachineLearning;

AWSError<CoreErrors> MachineLearningErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MachineLearningErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}