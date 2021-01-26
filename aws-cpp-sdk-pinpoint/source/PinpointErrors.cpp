/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint/PinpointErrors.h>
#include <aws/pinpoint/model/ConflictException.h>
#include <aws/pinpoint/model/NotFoundException.h>
#include <aws/pinpoint/model/ForbiddenException.h>
#include <aws/pinpoint/model/PayloadTooLargeException.h>
#include <aws/pinpoint/model/TooManyRequestsException.h>
#include <aws/pinpoint/model/BadRequestException.h>
#include <aws/pinpoint/model/InternalServerErrorException.h>
#include <aws/pinpoint/model/MethodNotAllowedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Pinpoint;
using namespace Aws::Pinpoint::Model;

namespace Aws
{
namespace Pinpoint
{
template<> AWS_PINPOINT_API ConflictException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API NotFoundException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::NOT_FOUND);
  return NotFoundException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API ForbiddenException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::FORBIDDEN);
  return ForbiddenException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API PayloadTooLargeException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::PAYLOAD_TOO_LARGE);
  return PayloadTooLargeException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API TooManyRequestsException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::TOO_MANY_REQUESTS);
  return TooManyRequestsException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API BadRequestException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API InternalServerErrorException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

template<> AWS_PINPOINT_API MethodNotAllowedException PinpointError::GetModeledError()
{
  assert(this->GetErrorType() == PinpointErrors::METHOD_NOT_ALLOWED);
  return MethodNotAllowedException(this->GetJsonPayload().View());
}

namespace PinpointErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int FORBIDDEN_HASH = HashingUtils::HashString("ForbiddenException");
static const int PAYLOAD_TOO_LARGE_HASH = HashingUtils::HashString("PayloadTooLargeException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");
static const int METHOD_NOT_ALLOWED_HASH = HashingUtils::HashString("MethodNotAllowedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::NOT_FOUND), false);
  }
  else if (hashCode == FORBIDDEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::FORBIDDEN), false);
  }
  else if (hashCode == PAYLOAD_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::PAYLOAD_TOO_LARGE), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::TOO_MANY_REQUESTS), true);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::INTERNAL_SERVER_ERROR), false);
  }
  else if (hashCode == METHOD_NOT_ALLOWED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PinpointErrors::METHOD_NOT_ALLOWED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PinpointErrorMapper
} // namespace Pinpoint
} // namespace Aws
