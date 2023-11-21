/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrorMarshaller.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudFrontKeyValueStore;

AWSError<CoreErrors> CloudFrontKeyValueStoreErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudFrontKeyValueStoreErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}