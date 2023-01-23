/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrorMarshaller.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>

using namespace Aws::Client;
using namespace Aws::KinesisAnalytics;

AWSError<CoreErrors> KinesisAnalyticsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = KinesisAnalyticsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}