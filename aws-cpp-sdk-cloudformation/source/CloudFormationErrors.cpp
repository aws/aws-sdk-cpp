/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/CloudFormationErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudFormation;
using namespace Aws::Utils;

static const int INSUFFICIENT_CAPABILITIES_HASH = HashingUtils::HashString("InsufficientCapabilitiesException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");

namespace Aws
{
namespace CloudFormation
{
namespace CloudFormationErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INSUFFICIENT_CAPABILITIES), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFormationErrorMapper
} // namespace CloudFormation
} // namespace Aws
