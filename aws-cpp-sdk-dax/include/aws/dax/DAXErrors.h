/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/dax/DAX_EXPORTS.h>

namespace Aws
{
namespace DAX
{
enum class DAXErrors
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

  CLUSTER_ALREADY_EXISTS_FAULT= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CLUSTER_NOT_FOUND_FAULT,
  CLUSTER_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT,
  INSUFFICIENT_CLUSTER_CAPACITY_FAULT,
  INVALID_A_R_N_FAULT,
  INVALID_CLUSTER_STATE_FAULT,
  INVALID_PARAMETER_GROUP_STATE_FAULT,
  INVALID_SUBNET,
  INVALID_V_P_C_NETWORK_STATE_FAULT,
  NODE_NOT_FOUND_FAULT,
  NODE_QUOTA_FOR_CLUSTER_EXCEEDED_FAULT,
  NODE_QUOTA_FOR_CUSTOMER_EXCEEDED_FAULT,
  PARAMETER_GROUP_ALREADY_EXISTS_FAULT,
  PARAMETER_GROUP_NOT_FOUND_FAULT,
  PARAMETER_GROUP_QUOTA_EXCEEDED_FAULT,
  SERVICE_LINKED_ROLE_NOT_FOUND_FAULT,
  SUBNET_GROUP_ALREADY_EXISTS_FAULT,
  SUBNET_GROUP_IN_USE_FAULT,
  SUBNET_GROUP_NOT_FOUND_FAULT,
  SUBNET_GROUP_QUOTA_EXCEEDED_FAULT,
  SUBNET_IN_USE,
  SUBNET_QUOTA_EXCEEDED_FAULT,
  TAG_NOT_FOUND_FAULT,
  TAG_QUOTA_PER_RESOURCE_EXCEEDED
};

class AWS_DAX_API DAXError : public Aws::Client::AWSError<DAXErrors>
{
public:
  DAXError() {}
  DAXError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<DAXErrors>(rhs) {}
  DAXError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<DAXErrors>(rhs) {}
  DAXError(const Aws::Client::AWSError<DAXErrors>& rhs) : Aws::Client::AWSError<DAXErrors>(rhs) {}
  DAXError(Aws::Client::AWSError<DAXErrors>&& rhs) : Aws::Client::AWSError<DAXErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace DAXErrorMapper
{
  AWS_DAX_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DAX
} // namespace Aws
