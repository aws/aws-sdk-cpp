/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrorMarshaller.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrors.h>

using namespace Aws::Client;
using namespace Aws::IoT1ClickProjects;

AWSError<CoreErrors> IoT1ClickProjectsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoT1ClickProjectsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}