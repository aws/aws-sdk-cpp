/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>
#include <aws/bedrock-agentcore/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BedrockAgentCore;
using namespace Aws::BedrockAgentCore::Model;

namespace Aws
{
namespace BedrockAgentCore
{
template<> AWS_BEDROCKAGENTCORE_API ValidationException BedrockAgentCoreError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockAgentCoreErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BedrockAgentCoreErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int RUNTIME_CLIENT_HASH = HashingUtils::HashString("RuntimeClientError");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::SERVICE), RetryableType::RETRYABLE);
  }
  else if (hashCode == RUNTIME_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentCoreErrors::RUNTIME_CLIENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BedrockAgentCoreErrorMapper
} // namespace BedrockAgentCore
} // namespace Aws
