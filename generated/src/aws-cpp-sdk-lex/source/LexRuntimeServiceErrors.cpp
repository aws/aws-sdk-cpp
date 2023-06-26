/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lex/LexRuntimeServiceErrors.h>
#include <aws/lex/model/LimitExceededException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LexRuntimeService;
using namespace Aws::LexRuntimeService::Model;

namespace Aws
{
namespace LexRuntimeService
{
template<> AWS_LEXRUNTIMESERVICE_API LimitExceededException LexRuntimeServiceError::GetModeledError()
{
  assert(this->GetErrorType() == LexRuntimeServiceErrors::LIMIT_EXCEEDED);
  return LimitExceededException(this->GetJsonPayload().View());
}

namespace LexRuntimeServiceErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BadGatewayException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNSUPPORTED_MEDIA_TYPE_HASH = HashingUtils::HashString("UnsupportedMediaTypeException");
static const int LOOP_DETECTED_HASH = HashingUtils::HashString("LoopDetectedException");
static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DependencyFailedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int NOT_ACCEPTABLE_HASH = HashingUtils::HashString("NotAcceptableException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::CONFLICT), false);
  }
  else if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::BAD_GATEWAY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNSUPPORTED_MEDIA_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::UNSUPPORTED_MEDIA_TYPE), false);
  }
  else if (hashCode == LOOP_DETECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::LOOP_DETECTED), false);
  }
  else if (hashCode == DEPENDENCY_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::DEPENDENCY_FAILED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == NOT_ACCEPTABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::NOT_ACCEPTABLE), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::BAD_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexRuntimeServiceErrorMapper
} // namespace LexRuntimeService
} // namespace Aws
