/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/fms/FMSErrorMarshaller.h>
#include <aws/fms/FMSErrors.h>

using namespace Aws::Client;
using namespace Aws::FMS;

AWSError<CoreErrors> FMSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FMSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}