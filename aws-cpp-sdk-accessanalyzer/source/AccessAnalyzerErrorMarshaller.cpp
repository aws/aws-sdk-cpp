/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/accessanalyzer/AccessAnalyzerErrorMarshaller.h>
#include <aws/accessanalyzer/AccessAnalyzerErrors.h>

using namespace Aws::Client;
using namespace Aws::AccessAnalyzer;

AWSError<CoreErrors> AccessAnalyzerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AccessAnalyzerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}