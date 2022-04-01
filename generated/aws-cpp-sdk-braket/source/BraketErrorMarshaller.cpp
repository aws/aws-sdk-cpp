/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/braket/BraketErrorMarshaller.h>
#include <aws/braket/BraketErrors.h>

using namespace Aws::Client;
using namespace Aws::Braket;

AWSError<CoreErrors> BraketErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BraketErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}