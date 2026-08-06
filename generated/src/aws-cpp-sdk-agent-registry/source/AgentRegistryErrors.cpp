/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/AgentRegistryErrors.h>
#include <aws/agent-registry/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AgentRegistry;
using namespace Aws::AgentRegistry::Model;

namespace Aws {
namespace AgentRegistry {
template <>
AWS_AGENTREGISTRY_API ValidationException AgentRegistryError::GetModeledError() {
  assert(this->GetErrorType() == AgentRegistryErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AgentRegistryErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentRegistryErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == UNAUTHORIZED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentRegistryErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AgentRegistryErrorMapper
}  // namespace AgentRegistry
}  // namespace Aws
