/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlErrors.h>
#include <aws/bedrock-agentcore-control/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BedrockAgentCoreControl;
using namespace Aws::BedrockAgentCoreControl::Model;

namespace Aws
{
namespace BedrockAgentCoreControl
{
template<> AWS_BEDROCKAGENTCORECONTROL_API ValidationException BedrockAgentCoreControlError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockAgentCoreControlErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BedrockAgentCoreControlErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int DECRYPTION_FAILURE_HASH = HashingUtils::HashString("DecryptionFailure");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int ENCRYPTION_FAILURE_HASH = HashingUtils::HashString("EncryptionFailure");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DECRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::DECRYPTION_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::SERVICE), RetryableType::RETRYABLE);
  }
  else if (hashCode == ENCRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreControlErrors::ENCRYPTION_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BedrockAgentCoreControlErrorMapper
} // namespace BedrockAgentCoreControl
} // namespace Aws
