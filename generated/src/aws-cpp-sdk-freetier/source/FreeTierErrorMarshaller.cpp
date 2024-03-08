/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/freetier/FreeTierErrorMarshaller.h>
#include <aws/freetier/FreeTierErrors.h>

using namespace Aws::Client;
using namespace Aws::FreeTier;

AWSError<CoreErrors> FreeTierErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = FreeTierErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}