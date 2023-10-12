/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codeguru-security/CodeGuruSecurityErrors.h>
#include <aws/codeguru-security/model/ConflictException.h>
#include <aws/codeguru-security/model/ThrottlingException.h>
#include <aws/codeguru-security/model/InternalServerException.h>
#include <aws/codeguru-security/model/ResourceNotFoundException.h>
#include <aws/codeguru-security/model/ValidationException.h>
#include <aws/codeguru-security/model/AccessDeniedException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeGuruSecurity;
using namespace Aws::CodeGuruSecurity::Model;

namespace Aws
{
namespace CodeGuruSecurity
{
template<> AWS_CODEGURUSECURITY_API ConflictException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

template<> AWS_CODEGURUSECURITY_API ThrottlingException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_CODEGURUSECURITY_API InternalServerException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_CODEGURUSECURITY_API ResourceNotFoundException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_CODEGURUSECURITY_API ValidationException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

template<> AWS_CODEGURUSECURITY_API AccessDeniedException CodeGuruSecurityError::GetModeledError()
{
  assert(this->GetErrorType() == CodeGuruSecurityErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

namespace CodeGuruSecurityErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeGuruSecurityErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeGuruSecurityErrors::INTERNAL_SERVER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeGuruSecurityErrorMapper
} // namespace CodeGuruSecurity
} // namespace Aws
