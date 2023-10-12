/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lex-models/LexModelBuildingServiceErrors.h>
#include <aws/lex-models/model/LimitExceededException.h>
#include <aws/lex-models/model/ResourceInUseException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LexModelBuildingService;
using namespace Aws::LexModelBuildingService::Model;

namespace Aws
{
namespace LexModelBuildingService
{
template<> AWS_LEXMODELBUILDINGSERVICE_API LimitExceededException LexModelBuildingServiceError::GetModeledError()
{
  assert(this->GetErrorType() == LexModelBuildingServiceErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

template<> AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException LexModelBuildingServiceError::GetModeledError()
{
  assert(this->GetErrorType() == LexModelBuildingServiceErrors::RESOURCE_IN_USE);
  return ResourceInUseException(this->GetJsonPayload().View());
}

namespace LexModelBuildingServiceErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::NOT_FOUND), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexModelBuildingServiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexModelBuildingServiceErrorMapper
} // namespace LexModelBuildingService
} // namespace Aws
