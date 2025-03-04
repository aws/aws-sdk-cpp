/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsErrorMarshaller.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTManagedIntegrations;

AWSError<CoreErrors> IoTManagedIntegrationsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = IoTManagedIntegrationsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}