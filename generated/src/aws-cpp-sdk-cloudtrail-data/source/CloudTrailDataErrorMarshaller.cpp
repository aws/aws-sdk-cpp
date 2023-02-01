/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudtrail-data/CloudTrailDataErrorMarshaller.h>
#include <aws/cloudtrail-data/CloudTrailDataErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudTrailData;

AWSError<CoreErrors> CloudTrailDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudTrailDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}