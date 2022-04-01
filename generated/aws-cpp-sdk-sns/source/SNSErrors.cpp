﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sns/SNSErrors.h>
#include <aws/sns/model/VerificationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;

namespace Aws
{
namespace SNS
{
template<> AWS_SNS_API VerificationException SNSError::GetModeledError()
{
  assert(this->GetErrorType() == SNSErrors::VERIFICATION);
  return VerificationException(this->GetXmlPayload().GetRootElement());
}

namespace SNSErrorMapper
{

static const int VERIFICATION_HASH = HashingUtils::HashString("VerificationException");
static const int K_M_S_INVALID_STATE_HASH = HashingUtils::HashString("KMSInvalidState");
static const int BATCH_REQUEST_TOO_LONG_HASH = HashingUtils::HashString("BatchRequestTooLong");
static const int SUBSCRIPTION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SubscriptionLimitExceeded");
static const int TOPIC_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TopicLimitExceeded");
static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AuthorizationError");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalError");
static const int ENDPOINT_DISABLED_HASH = HashingUtils::HashString("EndpointDisabled");
static const int TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH = HashingUtils::HashString("TooManyEntriesInBatchRequest");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameter");
static const int K_M_S_NOT_FOUND_HASH = HashingUtils::HashString("KMSNotFound");
static const int FILTER_POLICY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FilterPolicyLimitExceeded");
static const int OPTED_OUT_HASH = HashingUtils::HashString("OptedOut");
static const int TAG_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagLimitExceeded");
static const int CONCURRENT_ACCESS_HASH = HashingUtils::HashString("ConcurrentAccess");
static const int K_M_S_THROTTLING_HASH = HashingUtils::HashString("KMSThrottling");
static const int BATCH_ENTRY_IDS_NOT_DISTINCT_HASH = HashingUtils::HashString("BatchEntryIdsNotDistinct");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicy");
static const int PLATFORM_APPLICATION_DISABLED_HASH = HashingUtils::HashString("PlatformApplicationDisabled");
static const int USER_ERROR_HASH = HashingUtils::HashString("UserError");
static const int K_M_S_OPT_IN_REQUIRED_HASH = HashingUtils::HashString("KMSOptInRequired");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFound");
static const int K_M_S_DISABLED_HASH = HashingUtils::HashString("KMSDisabled");
static const int K_M_S_ACCESS_DENIED_HASH = HashingUtils::HashString("KMSAccessDenied");
static const int INVALID_SECURITY_HASH = HashingUtils::HashString("InvalidSecurity");
static const int STALE_TAG_HASH = HashingUtils::HashString("StaleTag");
static const int EMPTY_BATCH_REQUEST_HASH = HashingUtils::HashString("EmptyBatchRequest");
static const int INVALID_BATCH_ENTRY_ID_HASH = HashingUtils::HashString("InvalidBatchEntryId");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::VERIFICATION), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == BATCH_REQUEST_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::BATCH_REQUEST_TOO_LONG), false);
  }
  else if (hashCode == SUBSCRIPTION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::SUBSCRIPTION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == TOPIC_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOPIC_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == AUTHORIZATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::AUTHORIZATION_ERROR), false);
  }
  else if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INTERNAL_ERROR), true);
  }
  else if (hashCode == ENDPOINT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::ENDPOINT_DISABLED), false);
  }
  else if (hashCode == TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TOO_MANY_ENTRIES_IN_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == K_M_S_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_NOT_FOUND), false);
  }
  else if (hashCode == FILTER_POLICY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::FILTER_POLICY_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == OPTED_OUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::OPTED_OUT), false);
  }
  else if (hashCode == TAG_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONCURRENT_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::CONCURRENT_ACCESS), false);
  }
  else if (hashCode == K_M_S_THROTTLING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_THROTTLING), false);
  }
  else if (hashCode == BATCH_ENTRY_IDS_NOT_DISTINCT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::BATCH_ENTRY_IDS_NOT_DISTINCT), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::TAG_POLICY), false);
  }
  else if (hashCode == PLATFORM_APPLICATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::PLATFORM_APPLICATION_DISABLED), false);
  }
  else if (hashCode == USER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::USER_ERROR), false);
  }
  else if (hashCode == K_M_S_OPT_IN_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_OPT_IN_REQUIRED), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_DISABLED), false);
  }
  else if (hashCode == K_M_S_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::K_M_S_ACCESS_DENIED), false);
  }
  else if (hashCode == INVALID_SECURITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_SECURITY), false);
  }
  else if (hashCode == STALE_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::STALE_TAG), false);
  }
  else if (hashCode == EMPTY_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::EMPTY_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_BATCH_ENTRY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SNSErrors::INVALID_BATCH_ENTRY_ID), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SNSErrorMapper
} // namespace SNS
} // namespace Aws
