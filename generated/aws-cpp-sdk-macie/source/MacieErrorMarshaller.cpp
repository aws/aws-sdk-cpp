/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/macie/MacieErrorMarshaller.h>
#include <aws/macie/MacieErrors.h>

using namespace Aws::Client;
using namespace Aws::Macie;

AWSError<CoreErrors> MacieErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = MacieErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}