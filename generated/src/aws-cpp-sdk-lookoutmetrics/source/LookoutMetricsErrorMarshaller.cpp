/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/lookoutmetrics/LookoutMetricsErrorMarshaller.h>
#include <aws/lookoutmetrics/LookoutMetricsErrors.h>

using namespace Aws::Client;
using namespace Aws::LookoutMetrics;

AWSError<CoreErrors> LookoutMetricsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = LookoutMetricsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}