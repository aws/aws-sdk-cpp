/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloudsearch/CloudSearchErrorMarshaller.h>
#include <aws/cloudsearch/CloudSearchErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudSearch;

AWSError<CoreErrors> CloudSearchErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CloudSearchErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}