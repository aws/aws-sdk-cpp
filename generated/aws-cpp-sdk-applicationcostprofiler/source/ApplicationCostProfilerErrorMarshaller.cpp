/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrorMarshaller.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrors.h>

using namespace Aws::Client;
using namespace Aws::ApplicationCostProfiler;

AWSError<CoreErrors> ApplicationCostProfilerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ApplicationCostProfilerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}