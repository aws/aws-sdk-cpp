/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/internetmonitor/InternetMonitorErrorMarshaller.h>
#include <aws/internetmonitor/InternetMonitorErrors.h>

using namespace Aws::Client;
using namespace Aws::InternetMonitor;

AWSError<CoreErrors> InternetMonitorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = InternetMonitorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}