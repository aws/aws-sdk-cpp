/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/gamesparks/GameSparksErrorMarshaller.h>
#include <aws/gamesparks/GameSparksErrors.h>

using namespace Aws::Client;
using namespace Aws::GameSparks;

AWSError<CoreErrors> GameSparksErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GameSparksErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}