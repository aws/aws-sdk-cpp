/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/gameliftstreams/GameLiftStreamsErrorMarshaller.h>
#include <aws/gameliftstreams/GameLiftStreamsErrors.h>

using namespace Aws::Client;
using namespace Aws::GameLiftStreams;

AWSError<CoreErrors> GameLiftStreamsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GameLiftStreamsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}