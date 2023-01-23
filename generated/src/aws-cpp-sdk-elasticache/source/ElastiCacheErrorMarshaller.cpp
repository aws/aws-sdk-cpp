/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/elasticache/ElastiCacheErrorMarshaller.h>
#include <aws/elasticache/ElastiCacheErrors.h>

using namespace Aws::Client;
using namespace Aws::ElastiCache;

AWSError<CoreErrors> ElastiCacheErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ElastiCacheErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}