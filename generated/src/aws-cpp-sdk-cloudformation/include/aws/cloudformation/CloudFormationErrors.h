/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/cloudformation/CloudFormation_EXPORTS.h>

namespace Aws
{
namespace CloudFormation
{
enum class CloudFormationErrors
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

  ALREADY_EXISTS= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CHANGE_SET_NOT_FOUND,
  CONCURRENT_RESOURCES_LIMIT_EXCEEDED,
  CREATED_BUT_MODIFIED,
  C_F_N_REGISTRY,
  GENERATED_TEMPLATE_NOT_FOUND,
  INSUFFICIENT_CAPABILITIES,
  INVALID_CHANGE_SET_STATUS,
  INVALID_OPERATION,
  INVALID_STATE_TRANSITION,
  LIMIT_EXCEEDED,
  NAME_ALREADY_EXISTS,
  OPERATION_ID_ALREADY_EXISTS,
  OPERATION_IN_PROGRESS,
  OPERATION_NOT_FOUND,
  OPERATION_STATUS_CHECK_FAILED,
  RESOURCE_SCAN_IN_PROGRESS,
  RESOURCE_SCAN_LIMIT_EXCEEDED,
  RESOURCE_SCAN_NOT_FOUND,
  STACK_INSTANCE_NOT_FOUND,
  STACK_NOT_FOUND,
  STACK_SET_NOT_EMPTY,
  STACK_SET_NOT_FOUND,
  STALE_REQUEST,
  TOKEN_ALREADY_EXISTS,
  TYPE_CONFIGURATION_NOT_FOUND,
  TYPE_NOT_FOUND
};

class AWS_CLOUDFORMATION_API CloudFormationError : public Aws::Client::AWSError<CloudFormationErrors>
{
public:
  CloudFormationError() {}
  CloudFormationError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<CloudFormationErrors>(rhs) {}
  CloudFormationError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<CloudFormationErrors>(rhs) {}
  CloudFormationError(const Aws::Client::AWSError<CloudFormationErrors>& rhs) : Aws::Client::AWSError<CloudFormationErrors>(rhs) {}
  CloudFormationError(Aws::Client::AWSError<CloudFormationErrors>&& rhs) : Aws::Client::AWSError<CloudFormationErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace CloudFormationErrorMapper
{
  AWS_CLOUDFORMATION_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CloudFormation
} // namespace Aws
