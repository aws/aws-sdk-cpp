/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/inspector2/Inspector2ErrorMarshaller.h>
#include <aws/inspector2/Inspector2Errors.h>

using namespace Aws::Client;
using namespace Aws::Inspector2;

AWSError<CoreErrors> Inspector2ErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = Inspector2ErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}