﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/inspector-scan/InspectorscanErrorMarshaller.h>
#include <aws/inspector-scan/InspectorscanErrors.h>

using namespace Aws::Client;
using namespace Aws::inspectorscan;

AWSError<CoreErrors> InspectorscanErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = InspectorscanErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}