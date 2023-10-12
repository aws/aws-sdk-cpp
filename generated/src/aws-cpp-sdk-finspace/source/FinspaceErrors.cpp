/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/finspace/FinspaceErrors.h>
#include <aws/finspace/model/ConflictException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::finspace;
using namespace Aws::finspace::Model;

namespace Aws
{
namespace finspace
{
template<> AWS_FINSPACE_API ConflictException FinspaceError::GetModeledError()
{
  assert(this->GetErrorType() == FinspaceErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

namespace FinspaceErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FinspaceErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FinspaceErrorMapper
} // namespace finspace
} // namespace Aws
