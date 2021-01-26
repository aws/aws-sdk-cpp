/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/athena/AthenaErrorMarshaller.h>
#include <aws/athena/AthenaErrors.h>

using namespace Aws::Client;
using namespace Aws::Athena;

AWSError<CoreErrors> AthenaErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AthenaErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}