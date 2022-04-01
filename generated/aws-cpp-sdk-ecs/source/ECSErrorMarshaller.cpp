/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/ecs/ECSErrorMarshaller.h>
#include <aws/ecs/ECSErrors.h>

using namespace Aws::Client;
using namespace Aws::ECS;

AWSError<CoreErrors> ECSErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ECSErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}