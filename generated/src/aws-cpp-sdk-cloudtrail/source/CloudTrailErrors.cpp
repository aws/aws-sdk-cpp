/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudtrail/CloudTrailErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudTrail;

namespace Aws
{
namespace CloudTrail
{
namespace CloudTrailErrorMapper
{

static constexpr uint32_t TRAIL_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TrailAlreadyExistsException");
static constexpr uint32_t CANNOT_DELEGATE_MANAGEMENT_ACCOUNT_HASH = ConstExprHashingUtils::HashString("CannotDelegateManagementAccountException");
static constexpr uint32_t NO_MANAGEMENT_ACCOUNT_S_L_R_EXISTS_HASH = ConstExprHashingUtils::HashString("NoManagementAccountSLRExistsException");
static constexpr uint32_t KMS_KEY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("KmsKeyNotFoundException");
static constexpr uint32_t INVALID_MAX_RESULTS_HASH = ConstExprHashingUtils::HashString("InvalidMaxResultsException");
static constexpr uint32_t TAGS_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TagsLimitExceededException");
static constexpr uint32_t CLOUD_TRAIL_ACCESS_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("CloudTrailAccessNotEnabledException");
static constexpr uint32_t CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("CloudWatchLogsDeliveryUnavailableException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_TRAIL_NAME_HASH = ConstExprHashingUtils::HashString("InvalidTrailNameException");
static constexpr uint32_t ORGANIZATIONS_NOT_IN_USE_HASH = ConstExprHashingUtils::HashString("OrganizationsNotInUseException");
static constexpr uint32_t INVALID_SNS_TOPIC_NAME_HASH = ConstExprHashingUtils::HashString("InvalidSnsTopicNameException");
static constexpr uint32_t TRAIL_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TrailNotFoundException");
static constexpr uint32_t NOT_ORGANIZATION_MASTER_ACCOUNT_HASH = ConstExprHashingUtils::HashString("NotOrganizationMasterAccountException");
static constexpr uint32_t INVALID_TAG_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidTagParameterException");
static constexpr uint32_t INACTIVE_QUERY_HASH = ConstExprHashingUtils::HashString("InactiveQueryException");
static constexpr uint32_t CHANNEL_EXISTS_FOR_E_D_S_HASH = ConstExprHashingUtils::HashString("ChannelExistsForEDSException");
static constexpr uint32_t INSUFFICIENT_ENCRYPTION_POLICY_HASH = ConstExprHashingUtils::HashString("InsufficientEncryptionPolicyException");
static constexpr uint32_t INVALID_IMPORT_SOURCE_HASH = ConstExprHashingUtils::HashString("InvalidImportSourceException");
static constexpr uint32_t CLOUD_TRAIL_INVALID_CLIENT_TOKEN_ID_HASH = ConstExprHashingUtils::HashString("CloudTrailInvalidClientTokenIdException");
static constexpr uint32_t INVALID_INSIGHT_SELECTORS_HASH = ConstExprHashingUtils::HashString("InvalidInsightSelectorsException");
static constexpr uint32_t ACCOUNT_HAS_ONGOING_IMPORT_HASH = ConstExprHashingUtils::HashString("AccountHasOngoingImportException");
static constexpr uint32_t INSUFFICIENT_S3_BUCKET_POLICY_HASH = ConstExprHashingUtils::HashString("InsufficientS3BucketPolicyException");
static constexpr uint32_t EVENT_DATA_STORE_HAS_ONGOING_IMPORT_HASH = ConstExprHashingUtils::HashString("EventDataStoreHasOngoingImportException");
static constexpr uint32_t EVENT_DATA_STORE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("EventDataStoreNotFoundException");
static constexpr uint32_t INVALID_LOOKUP_ATTRIBUTES_HASH = ConstExprHashingUtils::HashString("InvalidLookupAttributesException");
static constexpr uint32_t ACCOUNT_REGISTERED_HASH = ConstExprHashingUtils::HashString("AccountRegisteredException");
static constexpr uint32_t DELEGATED_ADMIN_ACCOUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DelegatedAdminAccountLimitExceededException");
static constexpr uint32_t INVALID_DATE_RANGE_HASH = ConstExprHashingUtils::HashString("InvalidDateRangeException");
static constexpr uint32_t MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaximumNumberOfTrailsExceededException");
static constexpr uint32_t INVALID_S3_PREFIX_HASH = ConstExprHashingUtils::HashString("InvalidS3PrefixException");
static constexpr uint32_t RESOURCE_TYPE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ResourceTypeNotSupportedException");
static constexpr uint32_t CHANNEL_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ChannelNotFoundException");
static constexpr uint32_t INSIGHT_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("InsightNotEnabledException");
static constexpr uint32_t CHANNEL_MAX_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ChannelMaxLimitExceededException");
static constexpr uint32_t KMS_KEY_DISABLED_HASH = ConstExprHashingUtils::HashString("KmsKeyDisabledException");
static constexpr uint32_t INVALID_S3_BUCKET_NAME_HASH = ConstExprHashingUtils::HashString("InvalidS3BucketNameException");
static constexpr uint32_t INVALID_HOME_REGION_HASH = ConstExprHashingUtils::HashString("InvalidHomeRegionException");
static constexpr uint32_t NOT_ORGANIZATION_MANAGEMENT_ACCOUNT_HASH = ConstExprHashingUtils::HashString("NotOrganizationManagementAccountException");
static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t CHANNEL_A_R_N_INVALID_HASH = ConstExprHashingUtils::HashString("ChannelARNInvalidException");
static constexpr uint32_t INVALID_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidTokenException");
static constexpr uint32_t INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION_HASH = ConstExprHashingUtils::HashString("InsufficientDependencyServiceAccessPermissionException");
static constexpr uint32_t EVENT_DATA_STORE_TERMINATION_PROTECTED_HASH = ConstExprHashingUtils::HashString("EventDataStoreTerminationProtectedException");
static constexpr uint32_t EVENT_DATA_STORE_MAX_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("EventDataStoreMaxLimitExceededException");
static constexpr uint32_t INSUFFICIENT_SNS_TOPIC_POLICY_HASH = ConstExprHashingUtils::HashString("InsufficientSnsTopicPolicyException");
static constexpr uint32_t INVALID_CLOUD_WATCH_LOGS_ROLE_ARN_HASH = ConstExprHashingUtils::HashString("InvalidCloudWatchLogsRoleArnException");
static constexpr uint32_t MAX_CONCURRENT_QUERIES_HASH = ConstExprHashingUtils::HashString("MaxConcurrentQueriesException");
static constexpr uint32_t CHANNEL_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ChannelAlreadyExistsException");
static constexpr uint32_t INVALID_QUERY_STATEMENT_HASH = ConstExprHashingUtils::HashString("InvalidQueryStatementException");
static constexpr uint32_t INVALID_KMS_KEY_ID_HASH = ConstExprHashingUtils::HashString("InvalidKmsKeyIdException");
static constexpr uint32_t EVENT_DATA_STORE_A_R_N_INVALID_HASH = ConstExprHashingUtils::HashString("EventDataStoreARNInvalidException");
static constexpr uint32_t RESOURCE_A_R_N_NOT_VALID_HASH = ConstExprHashingUtils::HashString("ResourceARNNotValidException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t RESOURCE_POLICY_NOT_VALID_HASH = ConstExprHashingUtils::HashString("ResourcePolicyNotValidException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t INVALID_EVENT_SELECTORS_HASH = ConstExprHashingUtils::HashString("InvalidEventSelectorsException");
static constexpr uint32_t INVALID_TIME_RANGE_HASH = ConstExprHashingUtils::HashString("InvalidTimeRangeException");
static constexpr uint32_t QUERY_ID_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("QueryIdNotFoundException");
static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OperationNotPermittedException");
static constexpr uint32_t ACCOUNT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("AccountNotFoundException");
static constexpr uint32_t INVALID_EVENT_DATA_STORE_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidEventDataStoreStatusException");
static constexpr uint32_t TRAIL_NOT_PROVIDED_HASH = ConstExprHashingUtils::HashString("TrailNotProvidedException");
static constexpr uint32_t RESOURCE_POLICY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ResourcePolicyNotFoundException");
static constexpr uint32_t INVALID_QUERY_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidQueryStatusException");
static constexpr uint32_t INACTIVE_EVENT_DATA_STORE_HASH = ConstExprHashingUtils::HashString("InactiveEventDataStoreException");
static constexpr uint32_t ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = ConstExprHashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static constexpr uint32_t INVALID_EVENT_DATA_STORE_CATEGORY_HASH = ConstExprHashingUtils::HashString("InvalidEventDataStoreCategoryException");
static constexpr uint32_t ACCOUNT_NOT_REGISTERED_HASH = ConstExprHashingUtils::HashString("AccountNotRegisteredException");
static constexpr uint32_t INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN_HASH = ConstExprHashingUtils::HashString("InvalidCloudWatchLogsLogGroupArnException");
static constexpr uint32_t S3_BUCKET_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("S3BucketDoesNotExistException");
static constexpr uint32_t KMS_HASH = ConstExprHashingUtils::HashString("KmsException");
static constexpr uint32_t INVALID_SOURCE_HASH = ConstExprHashingUtils::HashString("InvalidSourceException");
static constexpr uint32_t INVALID_EVENT_CATEGORY_HASH = ConstExprHashingUtils::HashString("InvalidEventCategoryException");
static constexpr uint32_t CLOUD_TRAIL_A_R_N_INVALID_HASH = ConstExprHashingUtils::HashString("CloudTrailARNInvalidException");
static constexpr uint32_t IMPORT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ImportNotFoundException");
static constexpr uint32_t EVENT_DATA_STORE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EventDataStoreAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TRAIL_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TRAIL_ALREADY_EXISTS), false);
  }
  else if (hashCode == CANNOT_DELEGATE_MANAGEMENT_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CANNOT_DELEGATE_MANAGEMENT_ACCOUNT), false);
  }
  else if (hashCode == NO_MANAGEMENT_ACCOUNT_S_L_R_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::NO_MANAGEMENT_ACCOUNT_S_L_R_EXISTS), false);
  }
  else if (hashCode == KMS_KEY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::KMS_KEY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_MAX_RESULTS), false);
  }
  else if (hashCode == TAGS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TAGS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CLOUD_TRAIL_ACCESS_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_TRAIL_ACCESS_NOT_ENABLED), false);
  }
  else if (hashCode == CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_TRAIL_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TRAIL_NAME), false);
  }
  else if (hashCode == ORGANIZATIONS_NOT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ORGANIZATIONS_NOT_IN_USE), false);
  }
  else if (hashCode == INVALID_SNS_TOPIC_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_SNS_TOPIC_NAME), false);
  }
  else if (hashCode == TRAIL_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TRAIL_NOT_FOUND), false);
  }
  else if (hashCode == NOT_ORGANIZATION_MASTER_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::NOT_ORGANIZATION_MASTER_ACCOUNT), false);
  }
  else if (hashCode == INVALID_TAG_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TAG_PARAMETER), false);
  }
  else if (hashCode == INACTIVE_QUERY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INACTIVE_QUERY), false);
  }
  else if (hashCode == CHANNEL_EXISTS_FOR_E_D_S_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CHANNEL_EXISTS_FOR_E_D_S), false);
  }
  else if (hashCode == INSUFFICIENT_ENCRYPTION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_ENCRYPTION_POLICY), false);
  }
  else if (hashCode == INVALID_IMPORT_SOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_IMPORT_SOURCE), false);
  }
  else if (hashCode == CLOUD_TRAIL_INVALID_CLIENT_TOKEN_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_TRAIL_INVALID_CLIENT_TOKEN_ID), false);
  }
  else if (hashCode == INVALID_INSIGHT_SELECTORS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_INSIGHT_SELECTORS), false);
  }
  else if (hashCode == ACCOUNT_HAS_ONGOING_IMPORT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ACCOUNT_HAS_ONGOING_IMPORT), false);
  }
  else if (hashCode == INSUFFICIENT_S3_BUCKET_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_S3_BUCKET_POLICY), false);
  }
  else if (hashCode == EVENT_DATA_STORE_HAS_ONGOING_IMPORT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_HAS_ONGOING_IMPORT), false);
  }
  else if (hashCode == EVENT_DATA_STORE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_LOOKUP_ATTRIBUTES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_LOOKUP_ATTRIBUTES), false);
  }
  else if (hashCode == ACCOUNT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ACCOUNT_REGISTERED), false);
  }
  else if (hashCode == DELEGATED_ADMIN_ACCOUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::DELEGATED_ADMIN_ACCOUNT_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_DATE_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_DATE_RANGE), false);
  }
  else if (hashCode == MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_S3_PREFIX_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_S3_PREFIX), false);
  }
  else if (hashCode == RESOURCE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::RESOURCE_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == CHANNEL_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CHANNEL_NOT_FOUND), false);
  }
  else if (hashCode == INSIGHT_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSIGHT_NOT_ENABLED), false);
  }
  else if (hashCode == CHANNEL_MAX_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CHANNEL_MAX_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == KMS_KEY_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::KMS_KEY_DISABLED), false);
  }
  else if (hashCode == INVALID_S3_BUCKET_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_S3_BUCKET_NAME), false);
  }
  else if (hashCode == INVALID_HOME_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_HOME_REGION), false);
  }
  else if (hashCode == NOT_ORGANIZATION_MANAGEMENT_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::NOT_ORGANIZATION_MANAGEMENT_ACCOUNT), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CONFLICT), false);
  }
  else if (hashCode == CHANNEL_A_R_N_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CHANNEL_A_R_N_INVALID), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION), false);
  }
  else if (hashCode == EVENT_DATA_STORE_TERMINATION_PROTECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_TERMINATION_PROTECTED), false);
  }
  else if (hashCode == EVENT_DATA_STORE_MAX_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_MAX_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INSUFFICIENT_SNS_TOPIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_SNS_TOPIC_POLICY), false);
  }
  else if (hashCode == INVALID_CLOUD_WATCH_LOGS_ROLE_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_CLOUD_WATCH_LOGS_ROLE_ARN), false);
  }
  else if (hashCode == MAX_CONCURRENT_QUERIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::MAX_CONCURRENT_QUERIES), false);
  }
  else if (hashCode == CHANNEL_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CHANNEL_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_QUERY_STATEMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_QUERY_STATEMENT), false);
  }
  else if (hashCode == INVALID_KMS_KEY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_KMS_KEY_ID), false);
  }
  else if (hashCode == EVENT_DATA_STORE_A_R_N_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_A_R_N_INVALID), false);
  }
  else if (hashCode == RESOURCE_A_R_N_NOT_VALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::RESOURCE_A_R_N_NOT_VALID), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_POLICY_NOT_VALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::RESOURCE_POLICY_NOT_VALID), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_EVENT_SELECTORS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_SELECTORS), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == QUERY_ID_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::QUERY_ID_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == ACCOUNT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ACCOUNT_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_EVENT_DATA_STORE_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_DATA_STORE_STATUS), false);
  }
  else if (hashCode == TRAIL_NOT_PROVIDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TRAIL_NOT_PROVIDED), false);
  }
  else if (hashCode == RESOURCE_POLICY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::RESOURCE_POLICY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_QUERY_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_QUERY_STATUS), false);
  }
  else if (hashCode == INACTIVE_EVENT_DATA_STORE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INACTIVE_EVENT_DATA_STORE), false);
  }
  else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE), false);
  }
  else if (hashCode == INVALID_EVENT_DATA_STORE_CATEGORY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_DATA_STORE_CATEGORY), false);
  }
  else if (hashCode == ACCOUNT_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ACCOUNT_NOT_REGISTERED), false);
  }
  else if (hashCode == INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN), false);
  }
  else if (hashCode == S3_BUCKET_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::S3_BUCKET_DOES_NOT_EXIST), false);
  }
  else if (hashCode == KMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::KMS), false);
  }
  else if (hashCode == INVALID_SOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_SOURCE), false);
  }
  else if (hashCode == INVALID_EVENT_CATEGORY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_CATEGORY), false);
  }
  else if (hashCode == CLOUD_TRAIL_A_R_N_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_TRAIL_A_R_N_INVALID), false);
  }
  else if (hashCode == IMPORT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::IMPORT_NOT_FOUND), false);
  }
  else if (hashCode == EVENT_DATA_STORE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::EVENT_DATA_STORE_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudTrailErrorMapper
} // namespace CloudTrail
} // namespace Aws
