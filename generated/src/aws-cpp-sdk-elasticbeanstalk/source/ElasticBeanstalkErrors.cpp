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

static constexpr uint32_t ELASTIC_BEANSTALK_SERVICE_HASH = ConstExprHashingUtils::HashString("ElasticBeanstalkServiceException");
static constexpr uint32_t S3_LOCATION_NOT_IN_SERVICE_REGION_HASH = ConstExprHashingUtils::HashString("S3LocationNotInServiceRegionException");
static constexpr uint32_t TOO_MANY_APPLICATIONS_HASH = ConstExprHashingUtils::HashString("TooManyApplicationsException");
static constexpr uint32_t CODE_BUILD_NOT_IN_SERVICE_REGION_HASH = ConstExprHashingUtils::HashString("CodeBuildNotInServiceRegionException");
static constexpr uint32_t PLATFORM_VERSION_STILL_REFERENCED_HASH = ConstExprHashingUtils::HashString("PlatformVersionStillReferencedException");
static constexpr uint32_t TOO_MANY_CONFIGURATION_TEMPLATES_HASH = ConstExprHashingUtils::HashString("TooManyConfigurationTemplatesException");
static constexpr uint32_t MANAGED_ACTION_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("ManagedActionInvalidStateException");
static constexpr uint32_t TOO_MANY_APPLICATION_VERSIONS_HASH = ConstExprHashingUtils::HashString("TooManyApplicationVersionsException");
static constexpr uint32_t OPERATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("OperationInProgressFailure");
static constexpr uint32_t S3_SUBSCRIPTION_REQUIRED_HASH = ConstExprHashingUtils::HashString("S3SubscriptionRequiredException");
static constexpr uint32_t INSUFFICIENT_PRIVILEGES_HASH = ConstExprHashingUtils::HashString("InsufficientPrivilegesException");
static constexpr uint32_t RESOURCE_TYPE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("ResourceTypeNotSupportedException");
static constexpr uint32_t TOO_MANY_ENVIRONMENTS_HASH = ConstExprHashingUtils::HashString("TooManyEnvironmentsException");
static constexpr uint32_t TOO_MANY_BUCKETS_HASH = ConstExprHashingUtils::HashString("TooManyBucketsException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t SOURCE_BUNDLE_DELETION_HASH = ConstExprHashingUtils::HashString("SourceBundleDeletionFailure");
static constexpr uint32_t TOO_MANY_PLATFORMS_HASH = ConstExprHashingUtils::HashString("TooManyPlatformsException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ELASTIC_BEANSTALK_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::ELASTIC_BEANSTALK_SERVICE), false);
  }
  else if (hashCode == S3_LOCATION_NOT_IN_SERVICE_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_LOCATION_NOT_IN_SERVICE_REGION), false);
  }
  else if (hashCode == TOO_MANY_APPLICATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATIONS), false);
  }
  else if (hashCode == CODE_BUILD_NOT_IN_SERVICE_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::CODE_BUILD_NOT_IN_SERVICE_REGION), false);
  }
  else if (hashCode == PLATFORM_VERSION_STILL_REFERENCED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::PLATFORM_VERSION_STILL_REFERENCED), false);
  }
  else if (hashCode == TOO_MANY_CONFIGURATION_TEMPLATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_CONFIGURATION_TEMPLATES), false);
  }
  else if (hashCode == MANAGED_ACTION_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::MANAGED_ACTION_INVALID_STATE), false);
  }
  else if (hashCode == TOO_MANY_APPLICATION_VERSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATION_VERSIONS), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == S3_SUBSCRIPTION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_SUBSCRIPTION_REQUIRED), false);
  }
  else if (hashCode == INSUFFICIENT_PRIVILEGES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INSUFFICIENT_PRIVILEGES), false);
  }
  else if (hashCode == RESOURCE_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::RESOURCE_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == TOO_MANY_ENVIRONMENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_ENVIRONMENTS), false);
  }
  else if (hashCode == TOO_MANY_BUCKETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_BUCKETS), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == SOURCE_BUNDLE_DELETION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::SOURCE_BUNDLE_DELETION), false);
  }
  else if (hashCode == TOO_MANY_PLATFORMS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_PLATFORMS), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticBeanstalkErrorMapper
} // namespace ElasticBeanstalk
} // namespace Aws
