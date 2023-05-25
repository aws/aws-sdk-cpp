/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cur/CostandUsageReportServiceErrorMarshaller.h>
#include <aws/cur/CostandUsageReportServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::CostandUsageReportService;

AWSError<CoreErrors> CostandUsageReportServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CostandUsageReportServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}