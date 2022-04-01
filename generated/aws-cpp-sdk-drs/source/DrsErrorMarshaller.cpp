/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/drs/DrsErrorMarshaller.h>
#include <aws/drs/DrsErrors.h>

using namespace Aws::Client;
using namespace Aws::drs;

AWSError<CoreErrors> DrsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DrsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}