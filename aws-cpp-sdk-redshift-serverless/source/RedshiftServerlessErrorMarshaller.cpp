/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/redshift-serverless/RedshiftServerlessErrorMarshaller.h>
#include <aws/redshift-serverless/RedshiftServerlessErrors.h>

using namespace Aws::Client;
using namespace Aws::RedshiftServerless;

AWSError<CoreErrors> RedshiftServerlessErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = RedshiftServerlessErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}