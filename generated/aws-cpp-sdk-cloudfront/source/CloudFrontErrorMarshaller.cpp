/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/CloudFrontErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudFront;

AWSError<CoreErrors> CloudFrontErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudFrontErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}