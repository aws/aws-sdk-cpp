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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");
static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::CONFLICT), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::BAD_REQUEST), false);
  }
  else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GuardDutyErrors::INTERNAL_SERVER_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GuardDutyErrorMapper
} // namespace GuardDuty
} // namespace Aws
