/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniErrorMarshaller.h>
#include <aws/cloudwatchomni/CloudWatchOmniErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchOmni;

AWSError<CoreErrors> CloudWatchOmniErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = CloudWatchOmniErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}