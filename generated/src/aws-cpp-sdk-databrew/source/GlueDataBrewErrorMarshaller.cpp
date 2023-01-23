/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/databrew/GlueDataBrewErrorMarshaller.h>
#include <aws/databrew/GlueDataBrewErrors.h>

using namespace Aws::Client;
using namespace Aws::GlueDataBrew;

AWSError<CoreErrors> GlueDataBrewErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GlueDataBrewErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}