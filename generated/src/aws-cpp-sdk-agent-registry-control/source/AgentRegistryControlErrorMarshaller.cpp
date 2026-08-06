/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlErrorMarshaller.h>
#include <aws/agent-registry-control/AgentRegistryControlErrors.h>
#include <aws/core/client/AWSError.h>

using namespace Aws::Client;
using namespace Aws::AgentRegistryControl;

AWSError<CoreErrors> AgentRegistryControlErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = AgentRegistryControlErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}