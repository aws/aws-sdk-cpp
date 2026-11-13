/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniErrors.h>
#include <aws/cloudwatchomni/model/ConflictException.h>
#include <aws/cloudwatchomni/model/InternalServerException.h>
#include <aws/cloudwatchomni/model/ResourceNotFoundException.h>
#include <aws/cloudwatchomni/model/ThrottlingException.h>
#include <aws/cloudwatchomni/model/ValidationException.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/cbor/CborValue.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchOmni;
using namespace Aws::CloudWatchOmni::Model;

namespace Aws {
namespace CloudWatchOmni {
template <>
AWS_CLOUDWATCHOMNI_API ConflictException CloudWatchOmniError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchOmniErrors::CONFLICT);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ConflictException(payload.GetDecoder());
}

template <>
AWS_CLOUDWATCHOMNI_API ThrottlingException CloudWatchOmniError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchOmniErrors::THROTTLING);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ThrottlingException(payload.GetDecoder());
}

template <>
AWS_CLOUDWATCHOMNI_API ResourceNotFoundException CloudWatchOmniError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchOmniErrors::RESOURCE_NOT_FOUND);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ResourceNotFoundException(payload.GetDecoder());
}

template <>
AWS_CLOUDWATCHOMNI_API InternalServerException CloudWatchOmniError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchOmniErrors::INTERNAL_SERVER);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return InternalServerException(payload.GetDecoder());
}

template <>
AWS_CLOUDWATCHOMNI_API ValidationException CloudWatchOmniError::GetModeledError() {
  assert(this->GetErrorType() == CloudWatchOmniErrors::VALIDATION);
  Aws::Utils::Cbor::CborValue payload(this->GetCborPayload());
  return ValidationException(payload.GetDecoder());
}

namespace CloudWatchOmniErrorMapper {

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int POLICY_TOO_LARGE_HASH = HashingUtils::HashString("PolicyTooLargeException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchOmniErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchOmniErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == POLICY_TOO_LARGE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchOmniErrors::POLICY_TOO_LARGE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchOmniErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace CloudWatchOmniErrorMapper
}  // namespace CloudWatchOmni
}  // namespace Aws
