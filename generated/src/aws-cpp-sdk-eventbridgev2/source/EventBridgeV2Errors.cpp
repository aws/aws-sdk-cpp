/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/EventBridgeV2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EventBridgeV2;

namespace Aws {
namespace EventBridgeV2 {
namespace EventBridgeV2ErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int POLICY_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("PolicyLengthExceededException");
static const int IDEMPOTENT_PARAMETER_MISMATCH_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int PUBLIC_POLICY_HASH = HashingUtils::HashString("PublicPolicyException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int SCHEMA_REGISTRY_UNAVAILABLE_HASH = HashingUtils::HashString("SchemaRegistryUnavailableException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::INTERNAL), RetryableType::RETRYABLE);
  } else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::POLICY_LENGTH_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == IDEMPOTENT_PARAMETER_MISMATCH_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::IDEMPOTENT_PARAMETER_MISMATCH), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::LIMIT_EXCEEDED), RetryableType::RETRYABLE_THROTTLING);
  } else if (hashCode == CONCURRENT_MODIFICATION_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::CONCURRENT_MODIFICATION), RetryableType::RETRYABLE);
  } else if (hashCode == PUBLIC_POLICY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::PUBLIC_POLICY), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_INPUT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::INVALID_INPUT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == RESOURCE_IN_USE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SCHEMA_REGISTRY_UNAVAILABLE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::SCHEMA_REGISTRY_UNAVAILABLE), RetryableType::RETRYABLE);
  } else if (hashCode == INVALID_STATE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeV2Errors::INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace EventBridgeV2ErrorMapper
}  // namespace EventBridgeV2
}  // namespace Aws
