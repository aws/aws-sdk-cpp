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
#include <aws/config/ConfigServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::ConfigService;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace ConfigServiceErrorMapper
{

static const int MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED_HASH = HashingUtils::HashString("MaxNumberOfConfigRulesExceededException");
static const int NO_RUNNING_CONFIGURATION_RECORDER_HASH = HashingUtils::HashString("NoRunningConfigurationRecorderException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRoleException");
static const int LAST_DELIVERY_CHANNEL_DELETE_FAILED_HASH = HashingUtils::HashString("LastDeliveryChannelDeleteFailedException");
static const int OVERSIZED_CONFIGURATION_ITEM_HASH = HashingUtils::HashString("OversizedConfigurationItemException");
static const int ORGANIZATION_ALL_FEATURES_NOT_ENABLED_HASH = HashingUtils::HashString("OrganizationAllFeaturesNotEnabledException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED_HASH = HashingUtils::HashString("MaxNumberOfOrganizationConfigRulesExceededException");
static const int INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("InsufficientPermissionsException");
static const int MAX_NUMBER_OF_CONFIGURATION_RECORDERS_EXCEEDED_HASH = HashingUtils::HashString("MaxNumberOfConfigurationRecordersExceededException");
static const int INVALID_DELIVERY_CHANNEL_NAME_HASH = HashingUtils::HashString("InvalidDeliveryChannelNameException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int NO_SUCH_REMEDIATION_CONFIGURATION_HASH = HashingUtils::HashString("NoSuchRemediationConfigurationException");
static const int MAX_NUMBER_OF_RETENTION_CONFIGURATIONS_EXCEEDED_HASH = HashingUtils::HashString("MaxNumberOfRetentionConfigurationsExceededException");
static const int NO_AVAILABLE_DELIVERY_CHANNEL_HASH = HashingUtils::HashString("NoAvailableDeliveryChannelException");
static const int INSUFFICIENT_DELIVERY_POLICY_HASH = HashingUtils::HashString("InsufficientDeliveryPolicyException");
static const int NO_AVAILABLE_CONFIGURATION_RECORDER_HASH = HashingUtils::HashString("NoAvailableConfigurationRecorderException");
static const int REMEDIATION_IN_PROGRESS_HASH = HashingUtils::HashString("RemediationInProgressException");
static const int NO_SUCH_CONFIGURATION_AGGREGATOR_HASH = HashingUtils::HashString("NoSuchConfigurationAggregatorException");
static const int ORGANIZATION_ACCESS_DENIED_HASH = HashingUtils::HashString("OrganizationAccessDeniedException");
static const int NO_SUCH_BUCKET_HASH = HashingUtils::HashString("NoSuchBucketException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_TIME_RANGE_HASH = HashingUtils::HashString("InvalidTimeRangeException");
static const int MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED_HASH = HashingUtils::HashString("MaxNumberOfDeliveryChannelsExceededException");
static const int NO_SUCH_DELIVERY_CHANNEL_HASH = HashingUtils::HashString("NoSuchDeliveryChannelException");
static const int NO_SUCH_CONFIG_RULE_HASH = HashingUtils::HashString("NoSuchConfigRuleException");
static const int NO_SUCH_RETENTION_CONFIGURATION_HASH = HashingUtils::HashString("NoSuchRetentionConfigurationException");
static const int INVALID_EXPRESSION_HASH = HashingUtils::HashString("InvalidExpressionException");
static const int NO_AVAILABLE_ORGANIZATION_HASH = HashingUtils::HashString("NoAvailableOrganizationException");
static const int INVALID_S_N_S_TOPIC_A_R_N_HASH = HashingUtils::HashString("InvalidSNSTopicARNException");
static const int NO_SUCH_ORGANIZATION_CONFIG_RULE_HASH = HashingUtils::HashString("NoSuchOrganizationConfigRuleException");
static const int RESOURCE_NOT_DISCOVERED_HASH = HashingUtils::HashString("ResourceNotDiscoveredException");
static const int INVALID_RESULT_TOKEN_HASH = HashingUtils::HashString("InvalidResultTokenException");
static const int INVALID_RECORDING_GROUP_HASH = HashingUtils::HashString("InvalidRecordingGroupException");
static const int INVALID_S3_KEY_PREFIX_HASH = HashingUtils::HashString("InvalidS3KeyPrefixException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int INVALID_LIMIT_HASH = HashingUtils::HashString("InvalidLimitException");
static const int NO_SUCH_CONFIGURATION_RECORDER_HASH = HashingUtils::HashString("NoSuchConfigurationRecorderException");
static const int INVALID_CONFIGURATION_RECORDER_NAME_HASH = HashingUtils::HashString("InvalidConfigurationRecorderNameException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED), false);
  }
  else if (hashCode == NO_RUNNING_CONFIGURATION_RECORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_RUNNING_CONFIGURATION_RECORDER), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_ROLE), false);
  }
  else if (hashCode == LAST_DELIVERY_CHANNEL_DELETE_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::LAST_DELIVERY_CHANNEL_DELETE_FAILED), false);
  }
  else if (hashCode == OVERSIZED_CONFIGURATION_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::OVERSIZED_CONFIGURATION_ITEM), false);
  }
  else if (hashCode == ORGANIZATION_ALL_FEATURES_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::ORGANIZATION_ALL_FEATURES_NOT_ENABLED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED), false);
  }
  else if (hashCode == INSUFFICIENT_PERMISSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INSUFFICIENT_PERMISSIONS), false);
  }
  else if (hashCode == MAX_NUMBER_OF_CONFIGURATION_RECORDERS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_CONFIGURATION_RECORDERS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_DELIVERY_CHANNEL_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_DELIVERY_CHANNEL_NAME), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == NO_SUCH_REMEDIATION_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_REMEDIATION_CONFIGURATION), false);
  }
  else if (hashCode == MAX_NUMBER_OF_RETENTION_CONFIGURATIONS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_RETENTION_CONFIGURATIONS_EXCEEDED), false);
  }
  else if (hashCode == NO_AVAILABLE_DELIVERY_CHANNEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_AVAILABLE_DELIVERY_CHANNEL), false);
  }
  else if (hashCode == INSUFFICIENT_DELIVERY_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INSUFFICIENT_DELIVERY_POLICY), false);
  }
  else if (hashCode == NO_AVAILABLE_CONFIGURATION_RECORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_AVAILABLE_CONFIGURATION_RECORDER), false);
  }
  else if (hashCode == REMEDIATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::REMEDIATION_IN_PROGRESS), false);
  }
  else if (hashCode == NO_SUCH_CONFIGURATION_AGGREGATOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIGURATION_AGGREGATOR), false);
  }
  else if (hashCode == ORGANIZATION_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::ORGANIZATION_ACCESS_DENIED), false);
  }
  else if (hashCode == NO_SUCH_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_BUCKET), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED), false);
  }
  else if (hashCode == NO_SUCH_DELIVERY_CHANNEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_DELIVERY_CHANNEL), false);
  }
  else if (hashCode == NO_SUCH_CONFIG_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIG_RULE), false);
  }
  else if (hashCode == NO_SUCH_RETENTION_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_RETENTION_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_EXPRESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_EXPRESSION), false);
  }
  else if (hashCode == NO_AVAILABLE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_AVAILABLE_ORGANIZATION), false);
  }
  else if (hashCode == INVALID_S_N_S_TOPIC_A_R_N_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_S_N_S_TOPIC_A_R_N), false);
  }
  else if (hashCode == NO_SUCH_ORGANIZATION_CONFIG_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_ORGANIZATION_CONFIG_RULE), false);
  }
  else if (hashCode == RESOURCE_NOT_DISCOVERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::RESOURCE_NOT_DISCOVERED), false);
  }
  else if (hashCode == INVALID_RESULT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_RESULT_TOKEN), false);
  }
  else if (hashCode == INVALID_RECORDING_GROUP_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_RECORDING_GROUP), false);
  }
  else if (hashCode == INVALID_S3_KEY_PREFIX_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_S3_KEY_PREFIX), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == INVALID_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_LIMIT), false);
  }
  else if (hashCode == NO_SUCH_CONFIGURATION_RECORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIGURATION_RECORDER), false);
  }
  else if (hashCode == INVALID_CONFIGURATION_RECORDER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_CONFIGURATION_RECORDER_NAME), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConfigServiceErrorMapper
} // namespace ConfigService
} // namespace Aws
