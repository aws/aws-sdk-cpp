/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/es/ElasticsearchServiceErrorMarshaller.h>
#include <aws/es/ElasticsearchServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticsearchService;

AWSError<CoreErrors> ElasticsearchServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ElasticsearchServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}