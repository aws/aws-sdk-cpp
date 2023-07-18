/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mgn/MgnErrorMarshaller.h>
#include <aws/mgn/MgnErrors.h>

using namespace Aws::Client;
using namespace Aws::mgn;

AWSError<CoreErrors> MgnErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MgnErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}