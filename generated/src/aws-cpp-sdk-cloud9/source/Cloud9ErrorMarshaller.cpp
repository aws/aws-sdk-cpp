/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cloud9/Cloud9ErrorMarshaller.h>
#include <aws/cloud9/Cloud9Errors.h>

using namespace Aws::Client;
using namespace Aws::Cloud9;

AWSError<CoreErrors> Cloud9ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Cloud9ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}