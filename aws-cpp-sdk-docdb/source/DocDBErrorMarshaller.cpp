/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/docdb/DocDBErrorMarshaller.h>
#include <aws/docdb/DocDBErrors.h>

using namespace Aws::Client;
using namespace Aws::DocDB;

AWSError<CoreErrors> DocDBErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DocDBErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}