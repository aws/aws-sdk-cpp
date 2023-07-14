/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/servicediscovery/ServiceDiscoveryErrorMarshaller.h>
#include <aws/servicediscovery/ServiceDiscoveryErrors.h>

using namespace Aws::Client;
using namespace Aws::ServiceDiscovery;

AWSError<CoreErrors> ServiceDiscoveryErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = ServiceDiscoveryErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}