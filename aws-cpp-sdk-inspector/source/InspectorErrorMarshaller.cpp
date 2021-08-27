/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/inspector/InspectorErrorMarshaller.h>
#include <aws/inspector/InspectorErrors.h>

using namespace Aws::Client;
using namespace Aws::Inspector;

AWSError<CoreErrors> InspectorErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = InspectorErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}