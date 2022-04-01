/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/mturk-requester/MTurkErrorMarshaller.h>
#include <aws/mturk-requester/MTurkErrors.h>

using namespace Aws::Client;
using namespace Aws::MTurk;

AWSError<CoreErrors> MTurkErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MTurkErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}