/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/config/ConfigServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ConfigService;

namespace Aws
{
namespace ConfigService
{
namespace ConfigServiceErrorMapper
{

static constexpr uint32_t MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfConfigRulesExceededException");
static constexpr uint32_t OVERSIZED_CONFIGURATION_ITEM_HASH = ConstExprHashingUtils::HashString("OversizedConfigurationItemException");
static constexpr uint32_t NO_SUCH_CONFORMANCE_PACK_HASH = ConstExprHashingUtils::HashString("NoSuchConformancePackException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_S3_KMS_KEY_ARN_HASH = ConstExprHashingUtils::HashString("InvalidS3KmsKeyArnException");
static constexpr uint32_t CONFORMANCE_PACK_TEMPLATE_VALIDATION_HASH = ConstExprHashingUtils::HashString("ConformancePackTemplateValidationException");
static constexpr uint32_t INSUFFICIENT_PERMISSIONS_HASH = ConstExprHashingUtils::HashString("InsufficientPermissionsException");
static constexpr uint32_t MAX_NUMBER_OF_CONFIGURATION_RECORDERS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfConfigurationRecordersExceededException");
static constexpr uint32_t INVALID_DELIVERY_CHANNEL_NAME_HASH = ConstExprHashingUtils::HashString("InvalidDeliveryChannelNameException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INSUFFICIENT_DELIVERY_POLICY_HASH = ConstExprHashingUtils::HashString("InsufficientDeliveryPolicyException");
static constexpr uint32_t NO_AVAILABLE_CONFIGURATION_RECORDER_HASH = ConstExprHashingUtils::HashString("NoAvailableConfigurationRecorderException");
static constexpr uint32_t REMEDIATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("RemediationInProgressException");
static constexpr uint32_t RESOURCE_CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ResourceConcurrentModificationException");
static constexpr uint32_t NO_SUCH_CONFIGURATION_AGGREGATOR_HASH = ConstExprHashingUtils::HashString("NoSuchConfigurationAggregatorException");
static constexpr uint32_t ORGANIZATION_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("OrganizationAccessDeniedException");
static constexpr uint32_t NO_SUCH_BUCKET_HASH = ConstExprHashingUtils::HashString("NoSuchBucketException");
static constexpr uint32_t NO_SUCH_DELIVERY_CHANNEL_HASH = ConstExprHashingUtils::HashString("NoSuchDeliveryChannelException");
static constexpr uint32_t MAX_NUMBER_OF_ORGANIZATION_CONFORMANCE_PACKS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfOrganizationConformancePacksExceededException");
static constexpr uint32_t NO_AVAILABLE_ORGANIZATION_HASH = ConstExprHashingUtils::HashString("NoAvailableOrganizationException");
static constexpr uint32_t ORGANIZATION_CONFORMANCE_PACK_TEMPLATE_VALIDATION_HASH = ConstExprHashingUtils::HashString("OrganizationConformancePackTemplateValidationException");
static constexpr uint32_t INVALID_RECORDING_GROUP_HASH = ConstExprHashingUtils::HashString("InvalidRecordingGroupException");
static constexpr uint32_t INVALID_S3_KEY_PREFIX_HASH = ConstExprHashingUtils::HashString("InvalidS3KeyPrefixException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t INVALID_CONFIGURATION_RECORDER_NAME_HASH = ConstExprHashingUtils::HashString("InvalidConfigurationRecorderNameException");
static constexpr uint32_t NO_RUNNING_CONFIGURATION_RECORDER_HASH = ConstExprHashingUtils::HashString("NoRunningConfigurationRecorderException");
static constexpr uint32_t INVALID_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidRoleException");
static constexpr uint32_t LAST_DELIVERY_CHANNEL_DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("LastDeliveryChannelDeleteFailedException");
static constexpr uint32_t ORGANIZATION_ALL_FEATURES_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("OrganizationAllFeaturesNotEnabledException");
static constexpr uint32_t MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfOrganizationConfigRulesExceededException");
static constexpr uint32_t NO_SUCH_ORGANIZATION_CONFORMANCE_PACK_HASH = ConstExprHashingUtils::HashString("NoSuchOrganizationConformancePackException");
static constexpr uint32_t NO_SUCH_REMEDIATION_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("NoSuchRemediationConfigurationException");
static constexpr uint32_t MAX_NUMBER_OF_RETENTION_CONFIGURATIONS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfRetentionConfigurationsExceededException");
static constexpr uint32_t NO_AVAILABLE_DELIVERY_CHANNEL_HASH = ConstExprHashingUtils::HashString("NoAvailableDeliveryChannelException");
static constexpr uint32_t MAX_NUMBER_OF_CONFORMANCE_PACKS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfConformancePacksExceededException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("InvalidTimeRangeException");
static constexpr uint32_t NO_SUCH_REMEDIATION_EXCEPTION_HASH = ConstExprHashingUtils::HashString("NoSuchRemediationExceptionException");
static constexpr uint32_t MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxNumberOfDeliveryChannelsExceededException");
static constexpr uint32_t NO_SUCH_CONFIG_RULE_IN_CONFORMANCE_PACK_HASH = ConstExprHashingUtils::HashString("NoSuchConfigRuleInConformancePackException");
static constexpr uint32_t NO_SUCH_CONFIG_RULE_HASH = ConstExprHashingUtils::HashString("NoSuchConfigRuleException");
static constexpr uint32_t NO_SUCH_RETENTION_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("NoSuchRetentionConfigurationException");
static constexpr uint32_t MAX_ACTIVE_RESOURCES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxActiveResourcesExceededException");
static constexpr uint32_t INVALID_EXPRESSION_HASH = ConstExprHashingUtils::HashString("InvalidExpressionException");
static constexpr uint32_t INVALID_S_N_S_TOPIC_A_R_N_HASH = ConstExprHashingUtils::HashString("InvalidSNSTopicARNException");
static constexpr uint32_t NO_SUCH_ORGANIZATION_CONFIG_RULE_HASH = ConstExprHashingUtils::HashString("NoSuchOrganizationConfigRuleException");
static constexpr uint32_t RESOURCE_NOT_DISCOVERED_HASH = ConstExprHashingUtils::HashString("ResourceNotDiscoveredException");
static constexpr uint32_t INVALID_RESULT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidResultTokenException");
static constexpr uint32_t IDEMPOTENT_PARAMETER_MISMATCH_HASH = ConstExprHashingUtils::HashString("IdempotentParameterMismatch");
static constexpr uint32_t INVALID_LIMIT_HASH = ConstExprHashingUtils::HashString("InvalidLimitException");
static constexpr uint32_t NO_SUCH_CONFIGURATION_RECORDER_HASH = ConstExprHashingUtils::HashString("NoSuchConfigurationRecorderException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_CONFIG_RULES_EXCEEDED), false);
  }
  else if (hashCode == OVERSIZED_CONFIGURATION_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::OVERSIZED_CONFIGURATION_ITEM), false);
  }
  else if (hashCode == NO_SUCH_CONFORMANCE_PACK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFORMANCE_PACK), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_S3_KMS_KEY_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_S3_KMS_KEY_ARN), false);
  }
  else if (hashCode == CONFORMANCE_PACK_TEMPLATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::CONFORMANCE_PACK_TEMPLATE_VALIDATION), false);
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
  else if (hashCode == RESOURCE_CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::RESOURCE_CONCURRENT_MODIFICATION), false);
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
  else if (hashCode == NO_SUCH_DELIVERY_CHANNEL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_DELIVERY_CHANNEL), false);
  }
  else if (hashCode == MAX_NUMBER_OF_ORGANIZATION_CONFORMANCE_PACKS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_ORGANIZATION_CONFORMANCE_PACKS_EXCEEDED), false);
  }
  else if (hashCode == NO_AVAILABLE_ORGANIZATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_AVAILABLE_ORGANIZATION), false);
  }
  else if (hashCode == ORGANIZATION_CONFORMANCE_PACK_TEMPLATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::ORGANIZATION_CONFORMANCE_PACK_TEMPLATE_VALIDATION), false);
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
  else if (hashCode == INVALID_CONFIGURATION_RECORDER_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_CONFIGURATION_RECORDER_NAME), false);
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
  else if (hashCode == ORGANIZATION_ALL_FEATURES_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::ORGANIZATION_ALL_FEATURES_NOT_ENABLED), false);
  }
  else if (hashCode == MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_ORGANIZATION_CONFIG_RULES_EXCEEDED), false);
  }
  else if (hashCode == NO_SUCH_ORGANIZATION_CONFORMANCE_PACK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_ORGANIZATION_CONFORMANCE_PACK), false);
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
  else if (hashCode == MAX_NUMBER_OF_CONFORMANCE_PACKS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_CONFORMANCE_PACKS_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == NO_SUCH_REMEDIATION_EXCEPTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_REMEDIATION_EXCEPTION), false);
  }
  else if (hashCode == MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_NUMBER_OF_DELIVERY_CHANNELS_EXCEEDED), false);
  }
  else if (hashCode == NO_SUCH_CONFIG_RULE_IN_CONFORMANCE_PACK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIG_RULE_IN_CONFORMANCE_PACK), false);
  }
  else if (hashCode == NO_SUCH_CONFIG_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIG_RULE), false);
  }
  else if (hashCode == NO_SUCH_RETENTION_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_RETENTION_CONFIGURATION), false);
  }
  else if (hashCode == MAX_ACTIVE_RESOURCES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::MAX_ACTIVE_RESOURCES_EXCEEDED), false);
  }
  else if (hashCode == INVALID_EXPRESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_EXPRESSION), false);
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
  else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::IDEMPOTENT_PARAMETER_MISMATCH), false);
  }
  else if (hashCode == INVALID_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::INVALID_LIMIT), false);
  }
  else if (hashCode == NO_SUCH_CONFIGURATION_RECORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ConfigServiceErrors::NO_SUCH_CONFIGURATION_RECORDER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ConfigServiceErrorMapper
} // namespace ConfigService
} // namespace Aws
