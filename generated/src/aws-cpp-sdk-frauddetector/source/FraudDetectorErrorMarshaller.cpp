/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/frauddetector/FraudDetectorErrorMarshaller.h>
#include <aws/frauddetector/FraudDetectorErrors.h>

using namespace Aws::Client;
using namespace Aws::FraudDetector;

AWSError<CoreErrors> FraudDetectorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FraudDetectorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}