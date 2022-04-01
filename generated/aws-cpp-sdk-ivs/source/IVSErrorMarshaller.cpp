/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ivs/IVSErrorMarshaller.h>
#include <aws/ivs/IVSErrors.h>

using namespace Aws::Client;
using namespace Aws::IVS;

AWSError<CoreErrors> IVSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IVSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}