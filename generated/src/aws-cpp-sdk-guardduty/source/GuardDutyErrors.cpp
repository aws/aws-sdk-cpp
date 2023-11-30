/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/GuardDutyErrors.h>
#include <aws/guardduty/model/ConflictException.h>
#include <aws/guardduty/model/AccessDeniedException.h>
#include <aws/guardduty/model/BadRequestException.h>
#include <aws/guardduty/model/InternalServerErrorException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::GuardDuty;
using namespace Aws::GuardDuty::Model;

namespace Aws
{
namespace GuardDuty
{
template<> AWS_GUARDDUTY_API ConflictException GuardDutyError::GetModeledError()
{
  assert(this->GetErrorType() == GuardDutyErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_GUARDDUTY_API AccessDeniedException GuardDutyError::GetModeledError()
{
  assert(this->GetErrorType() == GuardDutyErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_GUARDDUTY_API BadRequestException GuardDutyError::GetModeledError()
{
  assert(this->GetErrorType() == GuardDutyErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

template<> AWS_GUARDDUTY_API InternalServerErrorException GuardDutyError::GetModeledError()
{
  assert(this->GetErrorType() == GuardDutyErrors::INTERNAL_SERVER_ERROR);
  return InternalServerErrorException(this->GetJsonPayload().View());
}

namespace GuardDutyErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::INTERNAL_SERVER_ERROR), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GuardDutyErrorMapper
} // namespace GuardDuty
} // namespace Aws
