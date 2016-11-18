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
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>

using namespace Aws::Client;
using namespace Aws::ElasticBeanstalk;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace ElasticBeanstalkErrorMapper
{

static const int TOO_MANY_APPLICATION_VERSIONS_HASH = HashingUtils::HashString("TooManyApplicationVersionsException");
static const int TOO_MANY_APPLICATIONS_HASH = HashingUtils::HashString("TooManyApplicationsException");
static const int TOO_MANY_BUCKETS_HASH = HashingUtils::HashString("TooManyBucketsException");
static const int ELASTIC_BEANSTALK_SERVICE_HASH = HashingUtils::HashString("ElasticBeanstalkServiceException");
static const int TOO_MANY_ENVIRONMENTS_HASH = HashingUtils::HashString("TooManyEnvironmentsException");
static const int MANAGED_ACTION_INVALID_STATE_HASH = HashingUtils::HashString("ManagedActionInvalidStateException");
static const int SOURCE_BUNDLE_DELETION_HASH = HashingUtils::HashString("SourceBundleDeletionFailure");
static const int INSUFFICIENT_PRIVILEGES_HASH = HashingUtils::HashString("InsufficientPrivilegesException");
static const int S3_LOCATION_NOT_IN_SERVICE_REGION_HASH = HashingUtils::HashString("S3LocationNotInServiceRegionException");
static const int TOO_MANY_CONFIGURATION_TEMPLATES_HASH = HashingUtils::HashString("TooManyConfigurationTemplatesException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressFailure");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int S3_SUBSCRIPTION_REQUIRED_HASH = HashingUtils::HashString("S3SubscriptionRequiredException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TOO_MANY_APPLICATION_VERSIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATION_VERSIONS), false);
  }
  else if (hashCode == TOO_MANY_APPLICATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_APPLICATIONS), false);
  }
  else if (hashCode == TOO_MANY_BUCKETS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_BUCKETS), false);
  }
  else if (hashCode == ELASTIC_BEANSTALK_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::ELASTIC_BEANSTALK_SERVICE), false);
  }
  else if (hashCode == TOO_MANY_ENVIRONMENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_ENVIRONMENTS), false);
  }
  else if (hashCode == MANAGED_ACTION_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::MANAGED_ACTION_INVALID_STATE), false);
  }
  else if (hashCode == SOURCE_BUNDLE_DELETION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::SOURCE_BUNDLE_DELETION), false);
  }
  else if (hashCode == INSUFFICIENT_PRIVILEGES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INSUFFICIENT_PRIVILEGES), false);
  }
  else if (hashCode == S3_LOCATION_NOT_IN_SERVICE_REGION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_LOCATION_NOT_IN_SERVICE_REGION), false);
  }
  else if (hashCode == TOO_MANY_CONFIGURATION_TEMPLATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::TOO_MANY_CONFIGURATION_TEMPLATES), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == S3_SUBSCRIPTION_REQUIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ElasticBeanstalkErrors::S3_SUBSCRIPTION_REQUIRED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ElasticBeanstalkErrorMapper
} // namespace ElasticBeanstalk
} // namespace Aws
