﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/rds-data/RDSDataServiceErrorMarshaller.h>
#include <aws/rds-data/RDSDataServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::RDSDataService;

AWSError<CoreErrors> RDSDataServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RDSDataServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}