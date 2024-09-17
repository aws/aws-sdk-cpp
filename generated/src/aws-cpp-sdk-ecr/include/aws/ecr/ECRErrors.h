/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/ecr/ECR_EXPORTS.h>

namespace Aws
{
namespace ECR
{
enum class ECRErrors
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
  KMS,
  LAYERS_NOT_FOUND,
  LAYER_ALREADY_EXISTS,
  LAYER_INACCESSIBLE,
  LAYER_PART_TOO_SMALL,
  LIFECYCLE_POLICY_NOT_FOUND,
  LIFECYCLE_POLICY_PREVIEW_IN_PROGRESS,
  LIFECYCLE_POLICY_PREVIEW_NOT_FOUND,
  LIMIT_EXCEEDED,
  PULL_THROUGH_CACHE_RULE_ALREADY_EXISTS,
  PULL_THROUGH_CACHE_RULE_NOT_FOUND,
  REFERENCED_IMAGES_NOT_FOUND,
  REGISTRY_POLICY_NOT_FOUND,
  REPOSITORY_ALREADY_EXISTS,
  REPOSITORY_NOT_EMPTY,
  REPOSITORY_NOT_FOUND,
  REPOSITORY_POLICY_NOT_FOUND,
  SCAN_NOT_FOUND,
  SECRET_NOT_FOUND,
  SERVER,
  TEMPLATE_ALREADY_EXISTS,
  TEMPLATE_NOT_FOUND,
  TOO_MANY_TAGS,
  UNABLE_TO_ACCESS_SECRET,
  UNABLE_TO_DECRYPT_SECRET_VALUE,
  UNABLE_TO_GET_UPSTREAM_IMAGE,
  UNABLE_TO_GET_UPSTREAM_LAYER,
  UNSUPPORTED_IMAGE_TYPE,
  UNSUPPORTED_UPSTREAM_REGISTRY,
  UPLOAD_NOT_FOUND
};

class AWS_ECR_API ECRError : public Aws::Client::AWSError<ECRErrors>
{
public:
  ECRError() {}
  ECRError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ECRErrors>(rhs) {}
  ECRError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ECRErrors>(rhs) {}
  ECRError(const Aws::Client::AWSError<ECRErrors>& rhs) : Aws::Client::AWSError<ECRErrors>(rhs) {}
  ECRError(Aws::Client::AWSError<ECRErrors>&& rhs) : Aws::Client::AWSError<ECRErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace ECRErrorMapper
{
  AWS_ECR_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace ECR
} // namespace Aws
