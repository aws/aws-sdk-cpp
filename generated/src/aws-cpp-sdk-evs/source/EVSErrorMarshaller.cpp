/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/evs/EVSErrorMarshaller.h>
#include <aws/evs/EVSErrors.h>

using namespace Aws::Client;
using namespace Aws::EVS;

AWSError<CoreErrors> EVSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EVSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}