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

static const int TRAIL_ALREADY_EXISTS_HASH = HashingUtils::HashString("TrailAlreadyExistsException");
static const int CANNOT_DELEGATE_MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("CannotDelegateManagementAccountException");
static const int NO_MANAGEMENT_ACCOUNT_S_L_R_EXISTS_HASH = HashingUtils::HashString("NoManagementAccountSLRExistsException");
static const int KMS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("KmsKeyNotFoundException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int TAGS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagsLimitExceededException");
static const int CLOUD_TRAIL_ACCESS_NOT_ENABLED_HASH = HashingUtils::HashString("CloudTrailAccessNotEnabledException");
static const int CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE_HASH = HashingUtils::HashString("CloudWatchLogsDeliveryUnavailableException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_TRAIL_NAME_HASH = HashingUtils::HashString("InvalidTrailNameException");
static const int ORGANIZATIONS_NOT_IN_USE_HASH = HashingUtils::HashString("OrganizationsNotInUseException");
static const int INVALID_SNS_TOPIC_NAME_HASH = HashingUtils::HashString("InvalidSnsTopicNameException");
static const int TRAIL_NOT_FOUND_HASH = HashingUtils::HashString("TrailNotFoundException");
static const int NOT_ORGANIZATION_MASTER_ACCOUNT_HASH = HashingUtils::HashString("NotOrganizationMasterAccountException");
static const int INVALID_TAG_PARAMETER_HASH = HashingUtils::HashString("InvalidTagParameterException");
static const int INACTIVE_QUERY_HASH = HashingUtils::HashString("InactiveQueryException");
static const int INSUFFICIENT_ENCRYPTION_POLICY_HASH = HashingUtils::HashString("InsufficientEncryptionPolicyException");
static const int INVALID_IMPORT_SOURCE_HASH = HashingUtils::HashString("InvalidImportSourceException");
static const int CLOUD_TRAIL_INVALID_CLIENT_TOKEN_ID_HASH = HashingUtils::HashString("CloudTrailInvalidClientTokenIdException");
static const int INVALID_INSIGHT_SELECTORS_HASH = HashingUtils::HashString("InvalidInsightSelectorsException");
static const int ACCOUNT_HAS_ONGOING_IMPORT_HASH = HashingUtils::HashString("AccountHasOngoingImportException");
static const int INSUFFICIENT_S3_BUCKET_POLICY_HASH = HashingUtils::HashString("InsufficientS3BucketPolicyException");
static const int EVENT_DATA_STORE_HAS_ONGOING_IMPORT_HASH = HashingUtils::HashString("EventDataStoreHasOngoingImportException");
static const int EVENT_DATA_STORE_NOT_FOUND_HASH = HashingUtils::HashString("EventDataStoreNotFoundException");
static const int INVALID_LOOKUP_ATTRIBUTES_HASH = HashingUtils::HashString("InvalidLookupAttributesException");
static const int ACCOUNT_REGISTERED_HASH = HashingUtils::HashString("AccountRegisteredException");
static const int DELEGATED_ADMIN_ACCOUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DelegatedAdminAccountLimitExceededException");
static const int INVALID_DATE_RANGE_HASH = HashingUtils::HashString("InvalidDateRangeException");
static const int MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED_HASH = HashingUtils::HashString("MaximumNumberOfTrailsExceededException");
static const int INVALID_S3_PREFIX_HASH = HashingUtils::HashString("InvalidS3PrefixException");
static const int RESOURCE_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ResourceTypeNotSupportedException");
static const int CHANNEL_NOT_FOUND_HASH = HashingUtils::HashString("ChannelNotFoundException");
static const int INSIGHT_NOT_ENABLED_HASH = HashingUtils::HashString("InsightNotEnabledException");
static const int KMS_KEY_DISABLED_HASH = HashingUtils::HashString("KmsKeyDisabledException");
static const int INVALID_S3_BUCKET_NAME_HASH = HashingUtils::HashString("InvalidS3BucketNameException");
static const int INVALID_HOME_REGION_HASH = HashingUtils::HashString("InvalidHomeRegionException");
static const int NOT_ORGANIZATION_MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("NotOrganizationManagementAccountException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int CHANNEL_A_R_N_INVALID_HASH = HashingUtils::HashString("ChannelARNInvalidException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION_HASH = HashingUtils::HashString("InsufficientDependencyServiceAccessPermissionException");
static const int EVENT_DATA_STORE_TERMINATION_PROTECTED_HASH = HashingUtils::HashString("EventDataStoreTerminationProtectedException");
static const int EVENT_DATA_STORE_MAX_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EventDataStoreMaxLimitExceededException");
static const int INSUFFICIENT_SNS_TOPIC_POLICY_HASH = HashingUtils::HashString("InsufficientSnsTopicPolicyException");
static const int INVALID_CLOUD_WATCH_LOGS_ROLE_ARN_HASH = HashingUtils::HashString("InvalidCloudWatchLogsRoleArnException");
static const int MAX_CONCURRENT_QUERIES_HASH = HashingUtils::HashString("MaxConcurrentQueriesException");
static const int INVALID_QUERY_STATEMENT_HASH = HashingUtils::HashString("InvalidQueryStatementException");
static const int INVALID_KMS_KEY_ID_HASH = HashingUtils::HashString("InvalidKmsKeyIdException");
static const int EVENT_DATA_STORE_A_R_N_INVALID_HASH = HashingUtils::HashString("EventDataStoreARNInvalidException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_EVENT_SELECTORS_HASH = HashingUtils::HashString("InvalidEventSelectorsException");
static const int INVALID_TIME_RANGE_HASH = HashingUtils::HashString("InvalidTimeRangeException");
static const int QUERY_ID_NOT_FOUND_HASH = HashingUtils::HashString("QueryIdNotFoundException");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int ACCOUNT_NOT_FOUND_HASH = HashingUtils::HashString("AccountNotFoundException");
static const int INVALID_EVENT_DATA_STORE_STATUS_HASH = HashingUtils::HashString("InvalidEventDataStoreStatusException");
static const int TRAIL_NOT_PROVIDED_HASH = HashingUtils::HashString("TrailNotProvidedException");
static const int INVALID_QUERY_STATUS_HASH = HashingUtils::HashString("InvalidQueryStatusException");
static const int INACTIVE_EVENT_DATA_STORE_HASH = HashingUtils::HashString("InactiveEventDataStoreException");
static const int ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = HashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static const int ACCOUNT_NOT_REGISTERED_HASH = HashingUtils::HashString("AccountNotRegisteredException");
static const int INVALID_EVENT_DATA_STORE_CATEGORY_HASH = HashingUtils::HashString("InvalidEventDataStoreCategoryException");
static const int INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN_HASH = HashingUtils::HashString("InvalidCloudWatchLogsLogGroupArnException");
static const int S3_BUCKET_DOES_NOT_EXIST_HASH = HashingUtils::HashString("S3BucketDoesNotExistException");
static const int KMS_HASH = HashingUtils::HashString("KmsException");
static const int INVALID_EVENT_CATEGORY_HASH = HashingUtils::HashString("InvalidEventCategoryException");
static const int CLOUD_TRAIL_A_R_N_INVALID_HASH = HashingUtils::HashString("CloudTrailARNInvalidException");
static const int IMPORT_NOT_FOUND_HASH = HashingUtils::HashString("ImportNotFoundException");
static const int EVENT_DATA_STORE_ALREADY_EXISTS_HASH = HashingUtils::HashString("EventDataStoreAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_PARAMETER), false);
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
  else if (hashCode == ACCOUNT_NOT_REGISTERED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ACCOUNT_NOT_REGISTERED), false);
  }
  else if (hashCode == INVALID_EVENT_DATA_STORE_CATEGORY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_DATA_STORE_CATEGORY), false);
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
