/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/FinSpaceDataErrors.h>

using namespace Aws::Client;
using namespace Aws::FinSpaceData;

AWSError<CoreErrors> FinSpaceDataErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FinSpaceDataErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}