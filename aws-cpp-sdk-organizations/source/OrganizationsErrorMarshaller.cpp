/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/organizations/OrganizationsErrorMarshaller.h>
#include <aws/organizations/OrganizationsErrors.h>

using namespace Aws::Client;
using namespace Aws::Organizations;

AWSError<CoreErrors> OrganizationsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = OrganizationsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}