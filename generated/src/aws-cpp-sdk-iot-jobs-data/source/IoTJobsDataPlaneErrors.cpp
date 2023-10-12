/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>
#include <aws/iot-jobs-data/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTJobsDataPlane;
using namespace Aws::IoTJobsDataPlane::Model;

namespace Aws
{
namespace IoTJobsDataPlane
{
template<> AWS_IOTJOBSDATAPLANE_API ThrottlingException IoTJobsDataPlaneError::GetModeledError()
{
  assert(this->GetErrorType() == IoTJobsDataPlaneErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace IoTJobsDataPlaneErrorMapper
{

static constexpr uint32_t TERMINAL_STATE_HASH = ConstExprHashingUtils::HashString("TerminalStateException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");
static constexpr uint32_t CERTIFICATE_VALIDATION_HASH = ConstExprHashingUtils::HashString("CertificateValidationException");
static constexpr uint32_t INVALID_STATE_TRANSITION_HASH = ConstExprHashingUtils::HashString("InvalidStateTransitionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TERMINAL_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::TERMINAL_STATE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == CERTIFICATE_VALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::CERTIFICATE_VALIDATION), false);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTJobsDataPlaneErrors::INVALID_STATE_TRANSITION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTJobsDataPlaneErrorMapper
} // namespace IoTJobsDataPlane
} // namespace Aws
