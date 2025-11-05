/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/GroundStationErrors.h>
#include <aws/groundstation/model/DependencyException.h>
#include <aws/groundstation/model/InvalidParameterException.h>
#include <aws/groundstation/model/ResourceLimitExceededException.h>
#include <aws/groundstation/model/ServiceQuotaExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GroundStation;
using namespace Aws::GroundStation::Model;

namespace Aws {
namespace GroundStation {
template <>
AWS_GROUNDSTATION_API ServiceQuotaExceededException GroundStationError::GetModeledError() {
  assert(this->GetErrorType() == GroundStationErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template <>
AWS_GROUNDSTATION_API InvalidParameterException GroundStationError::GetModeledError() {
  assert(this->GetErrorType() == GroundStationErrors::INVALID_PARAMETER);
  return InvalidParameterException(this->GetJsonPayload().View());
}

template <>
AWS_GROUNDSTATION_API ResourceLimitExceededException GroundStationError::GetModeledError() {
  assert(this->GetErrorType() == GroundStationErrors::RESOURCE_LIMIT_EXCEEDED);
  return ResourceLimitExceededException(this->GetJsonPayload().View());
}

template <>
AWS_GROUNDSTATION_API DependencyException GroundStationError::GetModeledError() {
  assert(this->GetErrorType() == GroundStationErrors::DEPENDENCY);
  return DependencyException(this->GetJsonPayload().View());
}

namespace GroundStationErrorMapper {

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int RESOURCE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceLimitExceededException");
static const int DEPENDENCY_HASH = HashingUtils::HashString("DependencyException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GroundStationErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_PARAMETER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GroundStationErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == RESOURCE_LIMIT_EXCEEDED_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GroundStationErrors::RESOURCE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == DEPENDENCY_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GroundStationErrors::DEPENDENCY), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == RESOURCE_IN_USE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GroundStationErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace GroundStationErrorMapper
}  // namespace GroundStation
}  // namespace Aws
