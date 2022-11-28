/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/MgnErrors.h>
#include <aws/mgn/model/ConflictException.h>
#include <aws/mgn/model/ServiceQuotaExceededException.h>
#include <aws/mgn/model/ThrottlingException.h>
#include <aws/mgn/model/ResourceNotFoundException.h>
#include <aws/mgn/model/InternalServerException.h>
#include <aws/mgn/model/UninitializedAccountException.h>
#include <aws/mgn/model/ValidationException.h>
#include <aws/mgn/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::mgn;
using namespace Aws::mgn::Model;

namespace Aws
{
namespace mgn
{
template<> AWS_MGN_API ConflictException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API ServiceQuotaExceededException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API ThrottlingException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API ResourceNotFoundException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API InternalServerException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API UninitializedAccountException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::UNINITIALIZED_ACCOUNT);
  return UninitializedAccountException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API ValidationException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_MGN_API AccessDeniedException MgnError::GetModeledError()
{
  assert(this->GetErrorType() == MgnErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace MgnErrorMapper
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MgnErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MgnErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MgnErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == UNINITIALIZED_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MgnErrors::UNINITIALIZED_ACCOUNT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MgnErrorMapper
} // namespace mgn
} // namespace Aws
