/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/acm/ACMErrorMarshaller.h>
#include <aws/acm/ACMErrors.h>

using namespace Aws::Client;
using namespace Aws::ACM;

AWSError<CoreErrors> ACMErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ACMErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}