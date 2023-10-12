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

static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t AUTOMATION_EXECUTION_TIMEOUT_HASH = ConstExprHashingUtils::HashString("AutomationExecutionTimeoutException");
static constexpr uint32_t AUTOMATION_EXECUTION_HASH = ConstExprHashingUtils::HashString("AutomationExecutionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION_TIMEOUT), false);
  }
  else if (hashCode == AUTOMATION_EXECUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(HoneycodeErrors::AUTOMATION_EXECUTION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace HoneycodeErrorMapper
} // namespace Honeycode
} // namespace Aws
