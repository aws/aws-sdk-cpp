/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/honeycode/HoneycodeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Honeycode;

namespace Aws
{
namespace Honeycode
{
namespace HoneycodeErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int AUTOMATION_EXECUTION_TIMEOUT_HASH = HashingUtils::HashString("AutomationExecutionTimeoutException");
static const int AUTOMATION_EXECUTION_HASH = HashingUtils::HashString("AutomationExecutionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == AUTOMATION_EXECUTION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION_TIMEOUT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == AUTOMATION_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace HoneycodeErrorMapper
} // namespace Honeycode
} // namespace Aws
