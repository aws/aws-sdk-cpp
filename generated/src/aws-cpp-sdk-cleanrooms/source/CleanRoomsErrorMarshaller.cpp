/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cleanrooms/CleanRoomsErrorMarshaller.h>
#include <aws/cleanrooms/CleanRoomsErrors.h>

using namespace Aws::Client;
using namespace Aws::CleanRooms;

AWSError<CoreErrors> CleanRoomsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CleanRoomsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}