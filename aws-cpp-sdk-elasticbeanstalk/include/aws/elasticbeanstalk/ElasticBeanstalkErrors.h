/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>

namespace Aws
{
namespace ElasticBeanstalk
{
enum class ElasticBeanstalkErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  CODE_BUILD_NOT_IN_SERVICE_REGION= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ELASTIC_BEANSTALK_SERVICE,
  INSUFFICIENT_PRIVILEGES,
  INVALID_REQUEST,
  MANAGED_ACTION_INVALID_STATE,
  OPERATION_IN_PROGRESS,
  PLATFORM_VERSION_STILL_REFERENCED,
  RESOURCE_TYPE_NOT_SUPPORTED,
  S3_LOCATION_NOT_IN_SERVICE_REGION,
  S3_SUBSCRIPTION_REQUIRED,
  SOURCE_BUNDLE_DELETION,
  TOO_MANY_APPLICATIONS,
  TOO_MANY_APPLICATION_VERSIONS,
  TOO_MANY_BUCKETS,
  TOO_MANY_CONFIGURATION_TEMPLATES,
  TOO_MANY_ENVIRONMENTS,
  TOO_MANY_PLATFORMS,
  TOO_MANY_TAGS
};

class AWS_ELASTICBEANSTALK_API ElasticBeanstalkError : public Aws::Client::AWSError<ElasticBeanstalkErrors>
{
public:
  ElasticBeanstalkError() {}
  ElasticBeanstalkError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ElasticBeanstalkErrors>(rhs) {}
  ElasticBeanstalkError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ElasticBeanstalkErrors>(rhs) {}
  ElasticBeanstalkError(const Aws::Client::AWSError<ElasticBeanstalkErrors>& rhs) : Aws::Client::AWSError<ElasticBeanstalkErrors>(rhs) {}
  ElasticBeanstalkError(Aws::Client::AWSError<ElasticBeanstalkErrors>&& rhs) : Aws::Client::AWSError<ElasticBeanstalkErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ElasticBeanstalkErrorMapper
{
  AWS_ELASTICBEANSTALK_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ElasticBeanstalk
} // namespace Aws
