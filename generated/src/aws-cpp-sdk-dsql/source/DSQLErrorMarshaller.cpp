/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/dsql/DSQLErrorMarshaller.h>
#include <aws/dsql/DSQLErrors.h>

using namespace Aws::Client;
using namespace Aws::DSQL;

AWSError<CoreErrors> DSQLErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DSQLErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}