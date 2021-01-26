/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/qldb-session/QLDBSessionErrors.h>
#include <aws/qldb-session/model/InvalidSessionException.h>
#include <aws/qldb-session/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QLDBSession;
using namespace Aws::QLDBSession::Model;

namespace Aws
{
namespace QLDBSession
{
template<> AWS_QLDBSESSION_API InvalidSessionException QLDBSessionError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBSessionErrors::INVALID_SESSION);
  return InvalidSessionException(this->GetJsonPayload().View());
}

template<> AWS_QLDBSESSION_API BadRequestException QLDBSessionError::GetModeledError()
{
  assert(this->GetErrorType() == QLDBSessionErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace QLDBSessionErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_SESSION_HASH = HashingUtils::HashString("InvalidSessionException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int OCC_CONFLICT_HASH = HashingUtils::HashString("OccConflictException");
static const int RATE_EXCEEDED_HASH = HashingUtils::HashString("RateExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_SESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::INVALID_SESSION), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::BAD_REQUEST), false);
  }
  else if (hashCode == OCC_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::OCC_CONFLICT), false);
  }
  else if (hashCode == RATE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QLDBSessionErrors::RATE_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QLDBSessionErrorMapper
} // namespace QLDBSession
} // namespace Aws
