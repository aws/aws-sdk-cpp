/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/cleanroomsml/CleanRoomsMLErrorMarshaller.h>
#include <aws/cleanroomsml/CleanRoomsMLErrors.h>

using namespace Aws::Client;
using namespace Aws::CleanRoomsML;

AWSError<CoreErrors> CleanRoomsMLErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CleanRoomsMLErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}