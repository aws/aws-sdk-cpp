/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iotanalytics/IoTAnalyticsErrorMarshaller.h>
#include <aws/iotanalytics/IoTAnalyticsErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTAnalytics;

AWSError<CoreErrors> IoTAnalyticsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTAnalyticsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}