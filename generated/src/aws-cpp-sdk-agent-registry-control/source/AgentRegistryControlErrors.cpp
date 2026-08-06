/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlErrors.h>
#include <aws/agent-registry-control/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AgentRegistryControl;
using namespace Aws::AgentRegistryControl::Model;

namespace Aws {
namespace AgentRegistryControl {
template <>
AWS_AGENTREGISTRYCONTROL_API ValidationException AgentRegistryControlError::GetModeledError() {
  assert(this->GetErrorType() == AgentRegistryControlErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace AgentRegistryControlErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentRegistryControlErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentRegistryControlErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AgentRegistryControlErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace AgentRegistryControlErrorMapper
}  // namespace AgentRegistryControl
}  // namespace Aws
