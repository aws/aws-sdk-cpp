/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bedrock-runtime/BedrockRuntimeErrors.h>
#include <aws/bedrock-runtime/model/ModelStreamErrorException.h>
#include <aws/bedrock-runtime/model/ModelErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BedrockRuntime;
using namespace Aws::BedrockRuntime::Model;

namespace Aws
{
namespace BedrockRuntime
{
template<> AWS_BEDROCKRUNTIME_API ModelStreamErrorException BedrockRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockRuntimeErrors::MODEL_STREAM_ERROR);
  return ModelStreamErrorException(this->GetJsonPayload().View());
}

template<> AWS_BEDROCKRUNTIME_API ModelErrorException BedrockRuntimeError::GetModeledError()
{
  assert(this->GetErrorType() == BedrockRuntimeErrors::MODEL_ERROR);
  return ModelErrorException(this->GetJsonPayload().View());
}

namespace BedrockRuntimeErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int MODEL_TIMEOUT_HASH = HashingUtils::HashString("ModelTimeoutException");
static const int MODEL_STREAM_ERROR_HASH = HashingUtils::HashString("ModelStreamErrorException");
static const int MODEL_NOT_READY_HASH = HashingUtils::HashString("ModelNotReadyException");
static const int MODEL_ERROR_HASH = HashingUtils::HashString("ModelErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::MODEL_TIMEOUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_STREAM_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::MODEL_STREAM_ERROR), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::MODEL_NOT_READY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MODEL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockRuntimeErrors::MODEL_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BedrockRuntimeErrorMapper
} // namespace BedrockRuntime
} // namespace Aws
