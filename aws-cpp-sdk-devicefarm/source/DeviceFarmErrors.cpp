/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/DeviceFarmErrors.h>

using namespace Aws::Client;
using namespace Aws::DeviceFarm;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace DeviceFarmErrorMapper
{

static const int IDEMPOTENCY_HASH = HashingUtils::HashString("IdempotencyException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int ARGUMENT_HASH = HashingUtils::HashString("ArgumentException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int SERVICE_ACCOUNT_HASH = HashingUtils::HashString("ServiceAccountException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TAG_OPERATION_HASH = HashingUtils::HashString("TagOperationException");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicyException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int NOT_ELIGIBLE_HASH = HashingUtils::HashString("NotEligibleException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::NOT_FOUND), false);
  }
  else if (hashCode == ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::ARGUMENT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::SERVICE_ACCOUNT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TAG_OPERATION), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TAG_POLICY), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == NOT_ELIGIBLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::NOT_ELIGIBLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DeviceFarmErrorMapper
} // namespace DeviceFarm
} // namespace Aws
