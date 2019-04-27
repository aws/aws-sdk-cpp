﻿/*
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
#include <aws/securityhub/SecurityHubErrors.h>

using namespace Aws::Client;
using namespace Aws::SecurityHub;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace SecurityHubErrorMapper
{

static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_ACCESS_HASH = HashingUtils::HashString("InvalidAccessException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_INPUT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INTERNAL), false);
  }
  else if (hashCode == INVALID_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_ACCESS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityHubErrorMapper
} // namespace SecurityHub
} // namespace Aws
