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
#include <aws/cloudtrail/CloudTrailErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudTrail;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace CloudTrailErrorMapper
{

static const int TRAIL_ALREADY_EXISTS_HASH = HashingUtils::HashString("TrailAlreadyExistsException");
static const int KMS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("KmsKeyNotFoundException");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("InvalidMaxResultsException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION_HASH = HashingUtils::HashString("InsufficientDependencyServiceAccessPermissionException");
static const int TAGS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("TagsLimitExceededException");
static const int INSUFFICIENT_SNS_TOPIC_POLICY_HASH = HashingUtils::HashString("InsufficientSnsTopicPolicyException");
static const int INVALID_CLOUD_WATCH_LOGS_ROLE_ARN_HASH = HashingUtils::HashString("InvalidCloudWatchLogsRoleArnException");
static const int CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE_HASH = HashingUtils::HashString("CloudWatchLogsDeliveryUnavailableException");
static const int CLOUD_TRAIL_ACCESS_NOT_ENABLED_HASH = HashingUtils::HashString("CloudTrailAccessNotEnabledException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_TRAIL_NAME_HASH = HashingUtils::HashString("InvalidTrailNameException");
static const int ORGANIZATIONS_NOT_IN_USE_HASH = HashingUtils::HashString("OrganizationsNotInUseException");
static const int INVALID_KMS_KEY_ID_HASH = HashingUtils::HashString("InvalidKmsKeyIdException");
static const int INVALID_SNS_TOPIC_NAME_HASH = HashingUtils::HashString("InvalidSnsTopicNameException");
static const int TRAIL_NOT_FOUND_HASH = HashingUtils::HashString("TrailNotFoundException");
static const int NOT_ORGANIZATION_MASTER_ACCOUNT_HASH = HashingUtils::HashString("NotOrganizationMasterAccountException");
static const int INVALID_TAG_PARAMETER_HASH = HashingUtils::HashString("InvalidTagParameterException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int INVALID_TIME_RANGE_HASH = HashingUtils::HashString("InvalidTimeRangeException");
static const int INVALID_EVENT_SELECTORS_HASH = HashingUtils::HashString("InvalidEventSelectorsException");
static const int INSUFFICIENT_ENCRYPTION_POLICY_HASH = HashingUtils::HashString("InsufficientEncryptionPolicyException");
static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int TRAIL_NOT_PROVIDED_HASH = HashingUtils::HashString("TrailNotProvidedException");
static const int INSUFFICIENT_S3_BUCKET_POLICY_HASH = HashingUtils::HashString("InsufficientS3BucketPolicyException");
static const int ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH = HashingUtils::HashString("OrganizationNotInAllFeaturesModeException");
static const int INVALID_LOOKUP_ATTRIBUTES_HASH = HashingUtils::HashString("InvalidLookupAttributesException");
static const int MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED_HASH = HashingUtils::HashString("MaximumNumberOfTrailsExceededException");
static const int INVALID_S3_PREFIX_HASH = HashingUtils::HashString("InvalidS3PrefixException");
static const int INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN_HASH = HashingUtils::HashString("InvalidCloudWatchLogsLogGroupArnException");
static const int RESOURCE_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ResourceTypeNotSupportedException");
static const int S3_BUCKET_DOES_NOT_EXIST_HASH = HashingUtils::HashString("S3BucketDoesNotExistException");
static const int KMS_HASH = HashingUtils::HashString("KmsException");
static const int CLOUD_TRAIL_A_R_N_INVALID_HASH = HashingUtils::HashString("CloudTrailARNInvalidException");
static const int KMS_KEY_DISABLED_HASH = HashingUtils::HashString("KmsKeyDisabledException");
static const int INVALID_S3_BUCKET_NAME_HASH = HashingUtils::HashString("InvalidS3BucketNameException");
static const int INVALID_HOME_REGION_HASH = HashingUtils::HashString("InvalidHomeRegionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TRAIL_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TRAIL_ALREADY_EXISTS), false);
  }
  else if (hashCode == KMS_KEY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::KMS_KEY_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_MAX_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_MAX_RESULTS), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_DEPENDENCY_SERVICE_ACCESS_PERMISSION), false);
  }
  else if (hashCode == TAGS_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TAGS_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INSUFFICIENT_SNS_TOPIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_SNS_TOPIC_POLICY), false);
  }
  else if (hashCode == INVALID_CLOUD_WATCH_LOGS_ROLE_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_CLOUD_WATCH_LOGS_ROLE_ARN), false);
  }
  else if (hashCode == CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_WATCH_LOGS_DELIVERY_UNAVAILABLE), false);
  }
  else if (hashCode == CLOUD_TRAIL_ACCESS_NOT_ENABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_TRAIL_ACCESS_NOT_ENABLED), false);
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
  else if (hashCode == INVALID_KMS_KEY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_KMS_KEY_ID), false);
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
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == INVALID_TIME_RANGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_TIME_RANGE), false);
  }
  else if (hashCode == INVALID_EVENT_SELECTORS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_EVENT_SELECTORS), false);
  }
  else if (hashCode == INSUFFICIENT_ENCRYPTION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_ENCRYPTION_POLICY), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == TRAIL_NOT_PROVIDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::TRAIL_NOT_PROVIDED), false);
  }
  else if (hashCode == INSUFFICIENT_S3_BUCKET_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INSUFFICIENT_S3_BUCKET_POLICY), false);
  }
  else if (hashCode == ORGANIZATION_NOT_IN_ALL_FEATURES_MODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::ORGANIZATION_NOT_IN_ALL_FEATURES_MODE), false);
  }
  else if (hashCode == INVALID_LOOKUP_ATTRIBUTES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_LOOKUP_ATTRIBUTES), false);
  }
  else if (hashCode == MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::MAXIMUM_NUMBER_OF_TRAILS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_S3_PREFIX_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_S3_PREFIX), false);
  }
  else if (hashCode == INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::INVALID_CLOUD_WATCH_LOGS_LOG_GROUP_ARN), false);
  }
  else if (hashCode == RESOURCE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::RESOURCE_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == S3_BUCKET_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::S3_BUCKET_DOES_NOT_EXIST), false);
  }
  else if (hashCode == KMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::KMS), false);
  }
  else if (hashCode == CLOUD_TRAIL_A_R_N_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudTrailErrors::CLOUD_TRAIL_A_R_N_INVALID), false);
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
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudTrailErrorMapper
} // namespace CloudTrail
} // namespace Aws
