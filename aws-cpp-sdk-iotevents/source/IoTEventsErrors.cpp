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
#include <aws/iotevents/IoTEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::IoTEvents;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace IoTEventsErrorMapper
{

static const int TAGRIS_INVALID_ARN_HASH = HashingUtils::HashString("TagrisInvalidArnException");
static const int TAGRIS_INVALID_PARAMETER_HASH = HashingUtils::HashString("TagrisInvalidParameterException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int TAGRIS_PARTIAL_RESOURCES_EXIST_RESULTS_HASH = HashingUtils::HashString("TagrisPartialResourcesExistResultsException");
static const int TAGRIS_ACCESS_DENIED_HASH = HashingUtils::HashString("TagrisAccessDeniedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int TAGRIS_THROTTLED_HASH = HashingUtils::HashString("TagrisThrottledException");
static const int TAGRIS_INTERNAL_SERVICE_HASH = HashingUtils::HashString("TagrisInternalServiceException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == TAGRIS_INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_INVALID_ARN), false);
  }
  else if (hashCode == TAGRIS_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_INVALID_PARAMETER), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == TAGRIS_PARTIAL_RESOURCES_EXIST_RESULTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_PARTIAL_RESOURCES_EXIST_RESULTS), false);
  }
  else if (hashCode == TAGRIS_ACCESS_DENIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_ACCESS_DENIED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == TAGRIS_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_THROTTLED), false);
  }
  else if (hashCode == TAGRIS_INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::TAGRIS_INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTEventsErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTEventsErrorMapper
} // namespace IoTEvents
} // namespace Aws
