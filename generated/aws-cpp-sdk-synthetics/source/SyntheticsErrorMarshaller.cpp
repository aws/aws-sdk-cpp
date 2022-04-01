/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/synthetics/SyntheticsErrorMarshaller.h>
#include <aws/synthetics/SyntheticsErrors.h>

using namespace Aws::Client;
using namespace Aws::Synthetics;

AWSError<CoreErrors> SyntheticsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = SyntheticsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}