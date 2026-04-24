/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/DevOpsAgentErrors.h>
#include <aws/devops-agent/model/IdentityCenterServiceException.h>
#include <aws/devops-agent/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DevOpsAgent;
using namespace Aws::DevOpsAgent::Model;

namespace Aws {
namespace DevOpsAgent {
template <>
AWS_DEVOPSAGENT_API ValidationException DevOpsAgentError::GetModeledError() {
  assert(this->GetErrorType() == DevOpsAgentErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template <>
AWS_DEVOPSAGENT_API IdentityCenterServiceException DevOpsAgentError::GetModeledError() {
  assert(this->GetErrorType() == DevOpsAgentErrors::IDENTITY_CENTER_SERVICE);
  return IdentityCenterServiceException(this->GetJsonPayload().View());
}

namespace DevOpsAgentErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int CONTENT_SIZE_EXCEEDED_HASH = HashingUtils::HashString("ContentSizeExceededException");
static const int IDENTITY_CENTER_SERVICE_HASH = HashingUtils::HashString("IdentityCenterServiceException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  } else if (hashCode == INVALID_PARAMETER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CONTENT_SIZE_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::CONTENT_SIZE_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == IDENTITY_CENTER_SERVICE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DevOpsAgentErrors::IDENTITY_CENTER_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace DevOpsAgentErrorMapper
}  // namespace DevOpsAgent
}  // namespace Aws
