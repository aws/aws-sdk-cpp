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
#include <aws/autoscaling-plans/AutoScalingPlansErrors.h>

using namespace Aws::Client;
using namespace Aws::AutoScalingPlans;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace AutoScalingPlansErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_UPDATE_HASH = HashingUtils::HashString("ConcurrentUpdateException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int OBJECT_NOT_FOUND_HASH = HashingUtils::HashString("ObjectNotFoundException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingPlansErrors::LIMIT_EXCEEDED), false);
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
