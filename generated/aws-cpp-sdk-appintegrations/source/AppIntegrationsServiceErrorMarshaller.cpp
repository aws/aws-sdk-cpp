/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/appintegrations/AppIntegrationsServiceErrorMarshaller.h>
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::AppIntegrationsService;

AWSError<CoreErrors> AppIntegrationsServiceErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = AppIntegrationsServiceErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}