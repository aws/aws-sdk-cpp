/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTJobsDataPlane;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace IoTJobsDataPlaneErrorMapper
{

static const int TERMINAL_STATE_HASH = HashingUtils::HashString("TerminalStateException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int CERTIFICATE_VALIDATION_HASH = HashingUtils::HashString("CertificateValidationException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransitionException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
