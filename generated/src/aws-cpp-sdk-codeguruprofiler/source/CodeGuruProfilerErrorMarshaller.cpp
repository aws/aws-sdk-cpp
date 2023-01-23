/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrorMarshaller.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeGuruProfiler;

AWSError<CoreErrors> CodeGuruProfilerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeGuruProfilerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}