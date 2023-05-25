/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ivs-realtime/IvsrealtimeErrorMarshaller.h>
#include <aws/ivs-realtime/IvsrealtimeErrors.h>

using namespace Aws::Client;
using namespace Aws::ivsrealtime;

AWSError<CoreErrors> IvsrealtimeErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IvsrealtimeErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}