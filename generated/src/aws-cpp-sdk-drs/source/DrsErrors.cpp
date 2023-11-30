/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/DrsErrors.h>
#include <aws/drs/model/ConflictException.h>
#include <aws/drs/model/ServiceQuotaExceededException.h>
#include <aws/drs/model/ThrottlingException.h>
#include <aws/drs/model/ResourceNotFoundException.h>
#include <aws/drs/model/InternalServerException.h>
#include <aws/drs/model/ValidationException.h>
#include <aws/drs/model/UninitializedAccountException.h>
#include <aws/drs/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::drs;
using namespace Aws::drs::Model;

namespace Aws
{
namespace drs
{
template<> AWS_DRS_API ConflictException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API ServiceQuotaExceededException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API ThrottlingException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API ResourceNotFoundException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API InternalServerException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API ValidationException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API UninitializedAccountException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::UNINITIALIZED_ACCOUNT);
  return UninitializedAccountException(this->GetJsonPayload().View());
}

template<> AWS_DRS_API AccessDeniedException DrsError::GetModeledError()
{
  assert(this->GetErrorType() == DrsErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace DrsErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int UNINITIALIZED_ACCOUNT_HASH = HashingUtils::HashString("UninitializedAccountException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DrsErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DrsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DrsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNINITIALIZED_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DrsErrors::UNINITIALIZED_ACCOUNT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DrsErrorMapper
} // namespace drs
} // namespace Aws
