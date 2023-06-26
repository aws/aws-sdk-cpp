/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/detective/DetectiveErrors.h>
#include <aws/detective/model/ServiceQuotaExceededException.h>
#include <aws/detective/model/ValidationException.h>
#include <aws/detective/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Detective;
using namespace Aws::Detective::Model;

namespace Aws
{
namespace Detective
{
template<> AWS_DETECTIVE_API ServiceQuotaExceededException DetectiveError::GetModeledError()
{
  assert(this->GetErrorType() == DetectiveErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_DETECTIVE_API ValidationException DetectiveError::GetModeledError()
{
  assert(this->GetErrorType() == DetectiveErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_DETECTIVE_API AccessDeniedException DetectiveError::GetModeledError()
{
  assert(this->GetErrorType() == DetectiveErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace DetectiveErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int TOO_MANY_REQUESTS_HASH = HashingUtils::HashString("TooManyRequestsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DetectiveErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DetectiveErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DetectiveErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == TOO_MANY_REQUESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DetectiveErrors::TOO_MANY_REQUESTS), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DetectiveErrorMapper
} // namespace Detective
} // namespace Aws
