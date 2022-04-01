/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/service-quotas/ServiceQuotasErrorMarshaller.h>
#include <aws/service-quotas/ServiceQuotasErrors.h>

using namespace Aws::Client;
using namespace Aws::ServiceQuotas;

AWSError<CoreErrors> ServiceQuotasErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ServiceQuotasErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}