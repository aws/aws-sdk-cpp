/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/GuardDutyErrors.h>
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

static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("InternalServerErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == BAD_REQUEST_HASH)
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
