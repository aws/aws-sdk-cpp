/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>
#include <aws/iot-jobs-data/model/ConflictException.h>
#include <aws/iot-jobs-data/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTJobsDataPlane;
using namespace Aws::IoTJobsDataPlane::Model;

namespace Aws
{
namespace IoTJobsDataPlane
{
template<> AWS_IOTJOBSDATAPLANE_API ConflictException IoTJobsDataPlaneError::GetModeledError()
{
  assert(this->GetErrorType() == IoTJobsDataPlaneErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOTJOBSDATAPLANE_API ThrottlingException IoTJobsDataPlaneError::GetModeledError()
{
  assert(this->GetErrorType() == IoTJobsDataPlaneErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace IoTJobsDataPlaneErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TERMINAL_STATE_HASH = HashingUtils::HashString("TerminalStateException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int CERTIFICATE_VALIDATION_HASH = HashingUtils::HashString("CertificateValidationException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == TERMINAL_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::TERMINAL_STATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CERTIFICATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::CERTIFICATE_VALIDATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::INVALID_STATE_TRANSITION), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTJobsDataPlaneErrorMapper
} // namespace IoTJobsDataPlane
} // namespace Aws
