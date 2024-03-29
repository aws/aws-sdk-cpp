﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bcm-data-exports/BCMDataExportsErrorMarshaller.h>
#include <aws/bcm-data-exports/BCMDataExportsErrors.h>

using namespace Aws::Client;
using namespace Aws::BCMDataExports;

AWSError<CoreErrors> BCMDataExportsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BCMDataExportsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}