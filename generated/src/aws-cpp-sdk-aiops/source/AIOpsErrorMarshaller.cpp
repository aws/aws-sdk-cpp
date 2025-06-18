/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/aiops/AIOpsErrorMarshaller.h>
#include <aws/aiops/AIOpsErrors.h>

using namespace Aws::Client;
using namespace Aws::AIOps;

AWSError<CoreErrors> AIOpsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AIOpsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}