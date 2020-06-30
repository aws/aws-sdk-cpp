/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrors.h>
#include <aws/iot1click-projects/model/ResourceNotFoundException.h>
#include <aws/iot1click-projects/model/ResourceConflictException.h>
#include <aws/iot1click-projects/model/TooManyRequestsException.h>
#include <aws/iot1click-projects/model/InternalFailureException.h>
#include <aws/iot1click-projects/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoT1ClickProjects;
using namespace Aws::IoT1ClickProjects::Model;

namespace Aws
{
namespace IoT1ClickProjects
{
template<> AWS_IOT1CLICKPROJECTS_API ResourceNotFoundException IoT1ClickProjectsError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickProjectsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKPROJECTS_API ResourceConflictException IoT1ClickProjectsError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickProjectsErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKPROJECTS_API TooManyRequestsException IoT1ClickProjectsError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickProjectsErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKPROJECTS_API InternalFailureException IoT1ClickProjectsError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickProjectsErrors::INTERNAL_FAILURE);
  return InternalFailureException(this->GetJsonPayload().View());
}

template<> AWS_IOT1CLICKPROJECTS_API InvalidRequestException IoT1ClickProjectsError::GetModeledError()
{
  assert(this->GetErrorType() == IoT1ClickProjectsErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

namespace IoT1ClickProjectsErrorMapper
{

static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickProjectsErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickProjectsErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoT1ClickProjectsErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoT1ClickProjectsErrorMapper
} // namespace IoT1ClickProjects
} // namespace Aws
