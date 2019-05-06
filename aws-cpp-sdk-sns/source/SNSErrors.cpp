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
#include <aws/sns/SNSErrors.h>

using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace SNSErrorMapper
{

static const int CONCURRENT_ACCESS_HASH = HashingUtils::HashString("ConcurrentAccess");
static const int K_M_S_INVALID_STATE_HASH = HashingUtils::HashString("KMSInvalidState");
static const int SUBSCRIPTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubscriptionLimitExceeded");
static const int TOPIC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TopicLimitExceeded");
static const int K_M_S_THROTTLING_HASH = HashingUtils::HashString("KMSThrottling");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicy");
static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AuthorizationError");
static const int PLATFORM_APPLICATION_DISABLED_HASH = HashingUtils::HashString("PlatformApplicationDisabled");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalError");
static const int ENDPOINT_DISABLED_HASH = HashingUtils::HashString("EndpointDisabled");
static const int K_M_S_OPT_IN_REQUIRED_HASH = HashingUtils::HashString("KMSOptInRequired");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFound");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameter");
static const int K_M_S_DISABLED_HASH = HashingUtils::HashString("KMSDisabled");
static const int K_M_S_NOT_FOUND_HASH = HashingUtils::HashString("KMSNotFound");
static const int K_M_S_ACCESS_DENIED_HASH = HashingUtils::HashString("KMSAccessDenied");
static const int FILTER_POLICY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FilterPolicyLimitExceeded");
static const int INVALID_SECURITY_HASH = HashingUtils::HashString("InvalidSecurity");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceeded");
static const int STALE_TAG_HASH = HashingUtils::HashString("StaleTag");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONCURRENT_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::CONCURRENT_ACCESS), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == SUBSCRIPTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::SUBSCRIPTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOPIC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOPIC_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == K_M_S_THROTTLING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_THROTTLING), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_POLICY), false);
  }
  else if (hashCode == AUTHORIZATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::AUTHORIZATION_ERROR), false);
  }
  else if (hashCode == PLATFORM_APPLICATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::PLATFORM_APPLICATION_DISABLED), false);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INTERNAL_ERROR), true);
  }
  else if (hashCode == ENDPOINT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::ENDPOINT_DISABLED), false);
  }
  else if (hashCode == K_M_S_OPT_IN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_OPT_IN_REQUIRED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == FILTER_POLICY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::FILTER_POLICY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_SECURITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_SECURITY), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == STALE_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::STALE_TAG), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SNSErrorMapper
} // namespace SNS
} // namespace Aws
