/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws
{
namespace ECS
{
enum class ECSErrors
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

  ATTRIBUTE_LIMIT_EXCEEDED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BLOCKED,
  CLIENT,
  CLUSTER_CONTAINS_CONTAINER_INSTANCES,
  CLUSTER_CONTAINS_SERVICES,
  CLUSTER_CONTAINS_TASKS,
  CLUSTER_NOT_FOUND,
  INVALID_PARAMETER,
  LIMIT_EXCEEDED,
  MISSING_VERSION,
  NO_UPDATE_AVAILABLE,
  PLATFORM_TASK_DEFINITION_INCOMPATIBILITY,
  PLATFORM_UNKNOWN,
  RESOURCE_IN_USE,
  SERVER,
  SERVICE_NOT_ACTIVE,
  SERVICE_NOT_FOUND,
  TARGET_NOT_CONNECTED,
  TARGET_NOT_FOUND,
  TASK_SET_NOT_FOUND,
  UNSUPPORTED_FEATURE,
  UPDATE_IN_PROGRESS
};

class AWS_ECS_API ECSError : public Aws::Client::AWSError<ECSErrors>
{
public:
  ECSError() {}
  ECSError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ECSErrors>(rhs) {}
  ECSError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ECSErrors>(rhs) {}
  ECSError(const Aws::Client::AWSError<ECSErrors>& rhs) : Aws::Client::AWSError<ECSErrors>(rhs) {}
  ECSError(Aws::Client::AWSError<ECSErrors>&& rhs) : Aws::Client::AWSError<ECSErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ECSErrorMapper
{
  AWS_ECS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ECS
} // namespace Aws
