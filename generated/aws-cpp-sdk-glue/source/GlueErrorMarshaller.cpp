/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/GlueErrors.h>

using namespace Aws::Client;
using namespace Aws::Glue;

AWSError<CoreErrors> GlueErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GlueErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}