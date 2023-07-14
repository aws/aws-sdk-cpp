/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/SecurityHubErrors.h>
#include <aws/securityhub/model/InternalException.h>
#include <aws/securityhub/model/InvalidAccessException.h>
#include <aws/securityhub/model/ResourceNotFoundException.h>
#include <aws/securityhub/model/LimitExceededException.h>
#include <aws/securityhub/model/ResourceConflictException.h>
#include <aws/securityhub/model/AccessDeniedException.h>
#include <aws/securityhub/model/InvalidInputException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecurityHub;
using namespace Aws::SecurityHub::Model;

namespace Aws
{
namespace SecurityHub
{
template<> AWS_SECURITYHUB_API InternalException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::INTERNAL);
  return InternalException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API InvalidAccessException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::INVALID_ACCESS);
  return InvalidAccessException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API ResourceNotFoundException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API LimitExceededException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API ResourceConflictException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::RESOURCE_CONFLICT);
  return ResourceConflictException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API AccessDeniedException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_SECURITYHUB_API InvalidInputException SecurityHubError::GetModeledError()
{
  assert(this->GetErrorType() == SecurityHubErrors::INVALID_INPUT);
  return InvalidInputException(this->GetJsonPayload().View());
}

namespace SecurityHubErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_ACCESS_HASH = HashingUtils::HashString("InvalidAccessException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_CONFLICT_HASH = HashingUtils::HashString("ResourceConflictException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INTERNAL), false);
  }
  else if (hashCode == INVALID_ACCESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_ACCESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::RESOURCE_CONFLICT), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecurityHubErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecurityHubErrorMapper
} // namespace SecurityHub
} // namespace Aws
