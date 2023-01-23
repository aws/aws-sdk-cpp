/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>

namespace Aws
{
namespace ECRPublic
{
enum class ECRPublicErrors
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

  EMPTY_UPLOAD= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  IMAGE_ALREADY_EXISTS,
  IMAGE_DIGEST_DOES_NOT_MATCH,
  IMAGE_NOT_FOUND,
  IMAGE_TAG_ALREADY_EXISTS,
  INVALID_LAYER,
  INVALID_LAYER_PART,
  INVALID_PARAMETER,
  INVALID_TAG_PARAMETER,
  LAYERS_NOT_FOUND,
  LAYER_ALREADY_EXISTS,
  LAYER_PART_TOO_SMALL,
  LIMIT_EXCEEDED,
  REFERENCED_IMAGES_NOT_FOUND,
  REGISTRY_NOT_FOUND,
  REPOSITORY_ALREADY_EXISTS,
  REPOSITORY_CATALOG_DATA_NOT_FOUND,
  REPOSITORY_NOT_EMPTY,
  REPOSITORY_NOT_FOUND,
  REPOSITORY_POLICY_NOT_FOUND,
  SERVER,
  TOO_MANY_TAGS,
  UNSUPPORTED_COMMAND,
  UPLOAD_NOT_FOUND
};

class AWS_ECRPUBLIC_API ECRPublicError : public Aws::Client::AWSError<ECRPublicErrors>
{
public:
  ECRPublicError() {}
  ECRPublicError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ECRPublicErrors>(rhs) {}
  ECRPublicError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ECRPublicErrors>(rhs) {}
  ECRPublicError(const Aws::Client::AWSError<ECRPublicErrors>& rhs) : Aws::Client::AWSError<ECRPublicErrors>(rhs) {}
  ECRPublicError(Aws::Client::AWSError<ECRPublicErrors>&& rhs) : Aws::Client::AWSError<ECRPublicErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ECRPublicErrorMapper
{
  AWS_ECRPUBLIC_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ECRPublic
} // namespace Aws
