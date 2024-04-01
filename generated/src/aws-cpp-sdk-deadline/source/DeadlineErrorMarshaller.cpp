/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/deadline/DeadlineErrorMarshaller.h>
#include <aws/deadline/DeadlineErrors.h>

using namespace Aws::Client;
using namespace Aws::deadline;

AWSError<CoreErrors> DeadlineErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = DeadlineErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}