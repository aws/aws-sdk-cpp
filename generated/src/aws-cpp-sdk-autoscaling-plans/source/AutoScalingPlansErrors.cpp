/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AutoScalingPlans;

namespace Aws
{
namespace AutoScalingPlans
{
namespace AutoScalingPlansErrorMapper
{

static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_UPDATE_HASH = ConstExprHashingUtils::HashString("ConcurrentUpdateException");
static constexpr uint32_t INTERNAL_SERVICE_HASH = ConstExprHashingUtils::HashString("InternalServiceException");
static constexpr uint32_t OBJECT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ObjectNotFoundException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::CONCURRENT_UPDATE), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == OBJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::OBJECT_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::INVALID_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AutoScalingPlansErrorMapper
} // namespace AutoScalingPlans
} // namespace Aws
