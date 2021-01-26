/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
enum class ResourceGroupsTaggingAPIErrors
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

  CONCURRENT_MODIFICATION= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CONSTRAINT_VIOLATION,
  INTERNAL_SERVICE,
  INVALID_PARAMETER,
  PAGINATION_TOKEN_EXPIRED
};

class AWS_RESOURCEGROUPSTAGGINGAPI_API ResourceGroupsTaggingAPIError : public Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>
{
public:
  ResourceGroupsTaggingAPIError() {}
  ResourceGroupsTaggingAPIError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>(rhs) {}
  ResourceGroupsTaggingAPIError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>(rhs) {}
  ResourceGroupsTaggingAPIError(const Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>& rhs) : Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>(rhs) {}
  ResourceGroupsTaggingAPIError(Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>&& rhs) : Aws::Client::AWSError<ResourceGroupsTaggingAPIErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ResourceGroupsTaggingAPIErrorMapper
{
  AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
