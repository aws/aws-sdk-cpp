/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/logs/CloudWatchLogsErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;

AWSError<CoreErrors> CloudWatchLogsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudWatchLogsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}