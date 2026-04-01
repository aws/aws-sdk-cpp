/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/devops-agent/DevOpsAgentErrorMarshaller.h>
#include <aws/devops-agent/DevOpsAgentErrors.h>

using namespace Aws::Client;
using namespace Aws::DevOpsAgent;

AWSError<CoreErrors> DevOpsAgentErrorMarshaller::FindErrorByName(const char* errorName) const {
  AWSError<CoreErrors> error = DevOpsAgentErrorMapper::GetErrorForName(errorName);
  if (error.GetErrorType() != CoreErrors::UNKNOWN) {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}