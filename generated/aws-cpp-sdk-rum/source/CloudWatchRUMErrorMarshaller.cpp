/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rum/CloudWatchRUMErrorMarshaller.h>
#include <aws/rum/CloudWatchRUMErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchRUM;

AWSError<CoreErrors> CloudWatchRUMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudWatchRUMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}