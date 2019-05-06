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
#include <aws/autoscaling/AutoScalingErrors.h>

using namespace Aws::Client;
using namespace Aws::AutoScaling;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace AutoScalingErrorMapper
{

static const int ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("AlreadyExists");
static const int LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("LimitExceeded");
static const int RESOURCE_CONTENTION_FAULT_HASH = HashingUtils::HashString("ResourceContention");
static const int SERVICE_LINKED_ROLE_FAILURE_HASH = HashingUtils::HashString("ServiceLinkedRoleFailure");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextToken");
static const int SCALING_ACTIVITY_IN_PROGRESS_FAULT_HASH = HashingUtils::HashString("ScalingActivityInProgress");
static const int RESOURCE_IN_USE_FAULT_HASH = HashingUtils::HashString("ResourceInUse");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == RESOURCE_CONTENTION_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::RESOURCE_CONTENTION_FAULT), true);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::SERVICE_LINKED_ROLE_FAILURE), true);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == SCALING_ACTIVITY_IN_PROGRESS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::SCALING_ACTIVITY_IN_PROGRESS_FAULT), false);
  }
  else if (hashCode == RESOURCE_IN_USE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AutoScalingErrors::RESOURCE_IN_USE_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AutoScalingErrorMapper
} // namespace AutoScaling
} // namespace Aws
