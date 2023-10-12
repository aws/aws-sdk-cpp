/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ivschat/IvschatErrors.h>
#include <aws/ivschat/model/ConflictException.h>
#include <aws/ivschat/model/ServiceQuotaExceededException.h>
#include <aws/ivschat/model/ThrottlingException.h>
#include <aws/ivschat/model/ResourceNotFoundException.h>
#include <aws/ivschat/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ivschat;
using namespace Aws::ivschat::Model;

namespace Aws
{
namespace ivschat
{
template<> AWS_IVSCHAT_API ConflictException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ServiceQuotaExceededException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ThrottlingException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ResourceNotFoundException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IVSCHAT_API ValidationException IvschatError::GetModeledError()
{
  assert(this->GetErrorType() == IvschatErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace IvschatErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t PENDING_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PendingVerification");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == PENDING_VERIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IvschatErrors::PENDING_VERIFICATION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IvschatErrorMapper
} // namespace ivschat
} // namespace Aws
