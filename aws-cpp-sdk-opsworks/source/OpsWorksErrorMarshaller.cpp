/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/opsworks/OpsWorksErrorMarshaller.h>
#include <aws/opsworks/OpsWorksErrors.h>

using namespace Aws::Client;
using namespace Aws::OpsWorks;

AWSError<CoreErrors> OpsWorksErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OpsWorksErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}