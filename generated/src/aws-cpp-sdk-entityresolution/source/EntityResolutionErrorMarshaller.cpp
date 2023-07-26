/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/entityresolution/EntityResolutionErrorMarshaller.h>
#include <aws/entityresolution/EntityResolutionErrors.h>

using namespace Aws::Client;
using namespace Aws::EntityResolution;

AWSError<CoreErrors> EntityResolutionErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = EntityResolutionErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}