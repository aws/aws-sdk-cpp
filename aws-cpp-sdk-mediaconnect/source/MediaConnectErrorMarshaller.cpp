/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mediaconnect/MediaConnectErrorMarshaller.h>
#include <aws/mediaconnect/MediaConnectErrors.h>

using namespace Aws::Client;
using namespace Aws::MediaConnect;

AWSError<CoreErrors> MediaConnectErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MediaConnectErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}