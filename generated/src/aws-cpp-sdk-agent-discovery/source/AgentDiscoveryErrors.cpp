/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/AgentDiscoveryErrors.h>
#include <aws/agent-discovery/model/InternalServerException.h>
#include <aws/agent-discovery/model/ThrottlingException.h>
#include <aws/agent-discovery/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AgentDiscovery;
using namespace Aws::AgentDiscovery::Model;

namespace Aws {
namespace AgentDiscovery {
template <>
AWS_AGENTDISCOVERY_API ThrottlingException AgentDiscoveryError::GetModeledError() {
  assert(this->GetErrorType() == AgentDiscoveryErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template <>
AWS_AGENTDISCOVERY_API InternalServerException AgentDiscoveryError::GetModeledError() {
  assert(this->GetErrorType() == AgentDiscoveryErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template <>
AWS_AGENTDISCOVERY_API ValidationException AgentDiscoveryError::GetModeledError() {
  assert(this->GetErrorType() == AgentDiscoveryErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AgentDiscoveryErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentDiscoveryErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AgentDiscoveryErrorMapper
}  // namespace AgentDiscovery
}  // namespace Aws
