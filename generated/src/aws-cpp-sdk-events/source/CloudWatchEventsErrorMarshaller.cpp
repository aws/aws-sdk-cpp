/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/events/CloudWatchEventsErrorMarshaller.h>
#include <aws/events/CloudWatchEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchEvents;

AWSError<CoreErrors> CloudWatchEventsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudWatchEventsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}