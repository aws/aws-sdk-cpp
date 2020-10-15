/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/workmail/WorkMail_EXPORTS.h>

namespace Aws
{
namespace WorkMail
{
enum class WorkMailErrors
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

  DIRECTORY_IN_USE= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  DIRECTORY_SERVICE_AUTHENTICATION_FAILED,
  DIRECTORY_UNAVAILABLE,
  EMAIL_ADDRESS_IN_USE,
  ENTITY_ALREADY_REGISTERED,
  ENTITY_NOT_FOUND,
  ENTITY_STATE,
  INVALID_CONFIGURATION,
  INVALID_PARAMETER,
  INVALID_PASSWORD,
  LIMIT_EXCEEDED,
  MAIL_DOMAIN_NOT_FOUND,
  MAIL_DOMAIN_STATE,
  NAME_AVAILABILITY,
  ORGANIZATION_NOT_FOUND,
  ORGANIZATION_STATE,
  RESERVED_NAME,
  TOO_MANY_TAGS,
  UNSUPPORTED_OPERATION
};

class AWS_WORKMAIL_API WorkMailError : public Aws::Client::AWSError<WorkMailErrors>
{
public:
  WorkMailError() {}
  WorkMailError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<WorkMailErrors>(rhs) {}
  WorkMailError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<WorkMailErrors>(rhs) {}
  WorkMailError(const Aws::Client::AWSError<WorkMailErrors>& rhs) : Aws::Client::AWSError<WorkMailErrors>(rhs) {}
  WorkMailError(Aws::Client::AWSError<WorkMailErrors>&& rhs) : Aws::Client::AWSError<WorkMailErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace WorkMailErrorMapper
{
  AWS_WORKMAIL_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace WorkMail
} // namespace Aws
