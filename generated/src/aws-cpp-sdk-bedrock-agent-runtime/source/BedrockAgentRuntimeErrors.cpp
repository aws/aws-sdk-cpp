/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeErrors.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BedrockAgentRuntime;
using namespace Aws::BedrockAgentRuntime::Model;

namespace Aws
{
namespace BedrockAgentRuntime
{
template<> AWS_BEDROCKAGENTRUNTIME_API BadGatewayException BedrockAgentRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockAgentRuntimeErrors::BAD_GATEWAY);
  return BadGatewayException(this->GetJsonPayload().View());
}

template<> AWS_BEDROCKAGENTRUNTIME_API DependencyFailedException BedrockAgentRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockAgentRuntimeErrors::DEPENDENCY_FAILED);
  return DependencyFailedException(this->GetJsonPayload().View());
}

namespace BedrockAgentRuntimeErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BadGatewayException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DependencyFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentRuntimeErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentRuntimeErrors::BAD_GATEWAY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentRuntimeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentRuntimeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEPENDENCY_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockAgentRuntimeErrors::DEPENDENCY_FAILED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BedrockAgentRuntimeErrorMapper
} // namespace BedrockAgentRuntime
} // namespace Aws
