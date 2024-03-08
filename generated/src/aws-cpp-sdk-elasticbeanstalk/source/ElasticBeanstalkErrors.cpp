/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ElasticBeanstalk;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace ElasticBeanstalkErrorMapper
{

static const int ELASTIC_BEANSTALK_SERVICE_HASH = HashingUtils::HashString("ElasticBeanstalkServiceException");
static const int S3_LOCATION_NOT_IN_SERVICE_REGION_HASH = HashingUtils::HashString("S3LocationNotInServiceRegionException");
static const int TOO_MANY_APPLICATIONS_HASH = HashingUtils::HashString("TooManyApplicationsException");
static const int CODE_BUILD_NOT_IN_SERVICE_REGION_HASH = HashingUtils::HashString("CodeBuildNotInServiceRegionException");
static const int PLATFORM_VERSION_STILL_REFERENCED_HASH = HashingUtils::HashString("PlatformVersionStillReferencedException");
static const int TOO_MANY_CONFIGURATION_TEMPLATES_HASH = HashingUtils::HashString("TooManyConfigurationTemplatesException");
static const int MANAGED_ACTION_INVALID_STATE_HASH = HashingUtils::HashString("ManagedActionInvalidStateException");
static const int TOO_MANY_APPLICATION_VERSIONS_HASH = HashingUtils::HashString("TooManyApplicationVersionsException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressFailure");
static const int S3_SUBSCRIPTION_REQUIRED_HASH = HashingUtils::HashString("S3SubscriptionRequiredException");
static const int INSUFFICIENT_PRIVILEGES_HASH = HashingUtils::HashString("InsufficientPrivilegesException");
static const int RESOURCE_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("ResourceTypeNotSupportedException");
static const int TOO_MANY_ENVIRONMENTS_HASH = HashingUtils::HashString("TooManyEnvironmentsException");
static const int TOO_MANY_BUCKETS_HASH = HashingUtils::HashString("TooManyBucketsException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int SOURCE_BUNDLE_DELETION_HASH = HashingUtils::HashString("SourceBundleDeletionFailure");
static const int TOO_MANY_PLATFORMS_HASH = HashingUtils::HashString("TooManyPlatformsException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ELASTIC_BEANSTALK_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::ELASTIC_BEANSTALK_SERVICE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S3_LOCATION_NOT_IN_SERVICE_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_LOCATION_NOT_IN_SERVICE_REGION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_APPLICATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CODE_BUILD_NOT_IN_SERVICE_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::CODE_BUILD_NOT_IN_SERVICE_REGION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PLATFORM_VERSION_STILL_REFERENCED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::PLATFORM_VERSION_STILL_REFERENCED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_CONFIGURATION_TEMPLATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_CONFIGURATION_TEMPLATES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MANAGED_ACTION_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::MANAGED_ACTION_INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_APPLICATION_VERSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATION_VERSIONS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::OPERATION_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == S3_SUBSCRIPTION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_SUBSCRIPTION_REQUIRED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_PRIVILEGES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INSUFFICIENT_PRIVILEGES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::RESOURCE_TYPE_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_ENVIRONMENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_ENVIRONMENTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_BUCKETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_BUCKETS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_TAGS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SOURCE_BUNDLE_DELETION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::SOURCE_BUNDLE_DELETION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOO_MANY_PLATFORMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_PLATFORMS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticBeanstalkErrorMapper
} // namespace ElasticBeanstalk
} // namespace Aws
