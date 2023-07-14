/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/application-insights/ApplicationInsightsErrorMarshaller.h>
#include <aws/application-insights/ApplicationInsightsErrors.h>

using namespace Aws::Client;
using namespace Aws::ApplicationInsights;

AWSError<CoreErrors> ApplicationInsightsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ApplicationInsightsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}