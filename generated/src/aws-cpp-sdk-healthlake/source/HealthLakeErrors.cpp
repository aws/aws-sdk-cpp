/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/HealthLakeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::HealthLake;

namespace Aws {
namespace HealthLake {
namespace HealthLakeErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int CONVERSATION_NOT_FOUND_HASH = HashingUtils::HashString("ConversationNotFoundException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int AGENT_MESSAGE_OUT_OF_CONTEXT_HASH = HashingUtils::HashString("AgentMessageOutOfContextException");
static const int FAILED_DEPENDENCY_HASH = HashingUtils::HashString("FailedDependencyException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int UNSUPPORTED_M_I_M_E_TYPE_HASH = HashingUtils::HashString("UnsupportedMIMETypeException");
static const int NOT_IMPLEMENTED_OPERATION_HASH = HashingUtils::HashString("NotImplementedOperationException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CONVERSATION_NOT_FOUND_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::CONVERSATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == AGENT_MESSAGE_OUT_OF_CONTEXT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::AGENT_MESSAGE_OUT_OF_CONTEXT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FAILED_DEPENDENCY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::FAILED_DEPENDENCY), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNAUTHORIZED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == UNSUPPORTED_M_I_M_E_TYPE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::UNSUPPORTED_M_I_M_E_TYPE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NOT_IMPLEMENTED_OPERATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HealthLakeErrors::NOT_IMPLEMENTED_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace HealthLakeErrorMapper
}  // namespace HealthLake
}  // namespace Aws
