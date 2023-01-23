/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/CloudTrailErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudTrail;

AWSError<CoreErrors> CloudTrailErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudTrailErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}