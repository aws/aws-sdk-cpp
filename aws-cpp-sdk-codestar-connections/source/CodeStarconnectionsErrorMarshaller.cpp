/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/codestar-connections/CodeStarconnectionsErrorMarshaller.h>
#include <aws/codestar-connections/CodeStarconnectionsErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeStarconnections;

AWSError<CoreErrors> CodeStarconnectionsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = CodeStarconnectionsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}