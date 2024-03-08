/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/b2bi/B2BIErrorMarshaller.h>
#include <aws/b2bi/B2BIErrors.h>

using namespace Aws::Client;
using namespace Aws::B2BI;

AWSError<CoreErrors> B2BIErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = B2BIErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}