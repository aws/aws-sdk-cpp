/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ebs/EBSErrors.h>
#include <aws/ebs/model/RequestThrottledException.h>
#include <aws/ebs/model/ServiceQuotaExceededException.h>
#include <aws/ebs/model/ResourceNotFoundException.h>
#include <aws/ebs/model/ValidationException.h>
#include <aws/ebs/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EBS;
using namespace Aws::EBS::Model;

namespace Aws
{
namespace EBS
{
template<> AWS_EBS_API RequestThrottledException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::THROTTLING);
  return RequestThrottledException(this->GetJsonPayload().View());
}

template<> AWS_EBS_API ServiceQuotaExceededException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_EBS_API ResourceNotFoundException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_EBS_API ValidationException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_EBS_API AccessDeniedException EBSError::GetModeledError()
{
  assert(this->GetErrorType() == EBSErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace EBSErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int CONCURRENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EBSErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EBSErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EBSErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == CONCURRENT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EBSErrors::CONCURRENT_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EBSErrorMapper
} // namespace EBS
} // namespace Aws
