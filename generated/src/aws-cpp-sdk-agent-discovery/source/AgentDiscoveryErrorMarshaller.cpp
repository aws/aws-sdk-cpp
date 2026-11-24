/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/AgentDiscoveryErrorMarshaller.h>
#include <aws/agent-discovery/AgentDiscoveryErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::AgentDiscovery;

AWSError<CoreErrors> AgentDiscoveryErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = AgentDiscoveryErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}