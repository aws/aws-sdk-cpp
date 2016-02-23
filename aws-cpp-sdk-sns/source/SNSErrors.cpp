/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sns/SNSErrors.h>

using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::Utils;

static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameter");
static const int SUBSCRIPTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubscriptionLimitExceeded");
static const int ENDPOINT_DISABLED_HASH = HashingUtils::HashString("EndpointDisabled");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFound");
static const int PLATFORM_APPLICATION_DISABLED_HASH = HashingUtils::HashString("PlatformApplicationDisabled");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalError");
static const int TOPIC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TopicLimitExceeded");
static const int PARAMETER_VALUE_INVALID_HASH = HashingUtils::HashString("ParameterValueInvalid");
static const int AUTHORIZATION_HASH = HashingUtils::HashString("AuthorizationError");

namespace Aws
{
namespace SNS
{
namespace SNSErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == SUBSCRIPTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::SUBSCRIPTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ENDPOINT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::ENDPOINT_DISABLED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::NOT_FOUND), false);
  }
  else if (hashCode == PLATFORM_APPLICATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::PLATFORM_APPLICATION_DISABLED), false);
  }
  else if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INTERNAL), true);
  }
  else if (hashCode == TOPIC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOPIC_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == PARAMETER_VALUE_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::PARAMETER_VALUE_INVALID), false);
  }
  else if (hashCode == AUTHORIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::AUTHORIZATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SNSErrorMapper
} // namespace SNS
} // namespace Aws
