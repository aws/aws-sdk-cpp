/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/controltower/ControlTowerErrorMarshaller.h>
#include <aws/controltower/ControlTowerErrors.h>

using namespace Aws::Client;
using namespace Aws::ControlTower;

AWSError<CoreErrors> ControlTowerErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ControlTowerErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}