/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>

namespace Aws
{
namespace AlexaForBusiness
{
enum class AlexaForBusinessErrors
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
  CONCURRENT_MODIFICATION,
  DEVICE_NOT_REGISTERED,
  INVALID_CERTIFICATE_AUTHORITY,
  INVALID_DEVICE,
  INVALID_SECRETS_MANAGER_RESOURCE,
  INVALID_SERVICE_LINKED_ROLE_STATE,
  INVALID_USER_STATUS,
  LIMIT_EXCEEDED,
  NAME_IN_USE,
  NOT_FOUND,
  RESOURCE_ASSOCIATED,
  RESOURCE_IN_USE,
  SKILL_NOT_LINKED,
  UNAUTHORIZED
};

class AWS_ALEXAFORBUSINESS_API AlexaForBusinessError : public Aws::Client::AWSError<AlexaForBusinessErrors>
{
public:
  AlexaForBusinessError() {}
  AlexaForBusinessError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<AlexaForBusinessErrors>(rhs) {}
  AlexaForBusinessError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<AlexaForBusinessErrors>(rhs) {}
  AlexaForBusinessError(const Aws::Client::AWSError<AlexaForBusinessErrors>& rhs) : Aws::Client::AWSError<AlexaForBusinessErrors>(rhs) {}
  AlexaForBusinessError(Aws::Client::AWSError<AlexaForBusinessErrors>&& rhs) : Aws::Client::AWSError<AlexaForBusinessErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace AlexaForBusinessErrorMapper
{
  AWS_ALEXAFORBUSINESS_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace AlexaForBusiness
} // namespace Aws
