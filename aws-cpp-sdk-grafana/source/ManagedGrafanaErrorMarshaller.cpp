/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/grafana/ManagedGrafanaErrorMarshaller.h>
#include <aws/grafana/ManagedGrafanaErrors.h>

using namespace Aws::Client;
using namespace Aws::ManagedGrafana;

AWSError<CoreErrors> ManagedGrafanaErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ManagedGrafanaErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}