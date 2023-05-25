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

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
