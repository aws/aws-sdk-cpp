/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/bcm-dashboards/BCMDashboardsErrorMarshaller.h>
#include <aws/bcm-dashboards/BCMDashboardsErrors.h>

using namespace Aws::Client;
using namespace Aws::BCMDashboards;

AWSError<CoreErrors> BCMDashboardsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BCMDashboardsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}