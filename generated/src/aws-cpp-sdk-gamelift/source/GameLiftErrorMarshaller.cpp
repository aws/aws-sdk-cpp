/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/gamelift/GameLiftErrorMarshaller.h>
#include <aws/gamelift/GameLiftErrors.h>

using namespace Aws::Client;
using namespace Aws::GameLift;

AWSError<CoreErrors> GameLiftErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GameLiftErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}