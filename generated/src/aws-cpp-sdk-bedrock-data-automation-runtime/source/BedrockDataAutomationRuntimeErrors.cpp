/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BedrockDataAutomationRuntime;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace BedrockDataAutomationRuntimeErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockDataAutomationRuntimeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BedrockDataAutomationRuntimeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BedrockDataAutomationRuntimeErrorMapper
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
