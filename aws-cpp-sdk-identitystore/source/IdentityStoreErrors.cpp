/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/IdentityStoreErrors.h>
#include <aws/identitystore/model/ConflictException.h>
#include <aws/identitystore/model/ThrottlingException.h>
#include <aws/identitystore/model/ServiceQuotaExceededException.h>
#include <aws/identitystore/model/ResourceNotFoundException.h>
#include <aws/identitystore/model/InternalServerException.h>
#include <aws/identitystore/model/ValidationException.h>
#include <aws/identitystore/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IdentityStore;
using namespace Aws::IdentityStore::Model;

namespace Aws
{
namespace IdentityStore
{
template<> AWS_IDENTITYSTORE_API ConflictException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API ThrottlingException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API ServiceQuotaExceededException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API ResourceNotFoundException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API InternalServerException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API ValidationException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_IDENTITYSTORE_API AccessDeniedException IdentityStoreError::GetModeledError()
{
  assert(this->GetErrorType() == IdentityStoreErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace IdentityStoreErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IdentityStoreErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IdentityStoreErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IdentityStoreErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IdentityStoreErrorMapper
} // namespace IdentityStore
} // namespace Aws
