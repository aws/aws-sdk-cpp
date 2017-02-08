/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lex/LexRuntimeServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::LexRuntimeService;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace LexRuntimeServiceErrorMapper
{

static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int LOOP_DETECTED_HASH = HashingUtils::HashString("LoopDetectedException");
static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DependencyFailedException");
static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BadGatewayException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::BAD_REQUEST), false);
  }
  else if (hashCode == LOOP_DETECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::LOOP_DETECTED), false);
  }
  else if (hashCode == DEPENDENCY_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::DEPENDENCY_FAILED), false);
  }
  else if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::BAD_GATEWAY), false);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::CONFLICT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeServiceErrors::NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexRuntimeServiceErrorMapper
} // namespace LexRuntimeService
} // namespace Aws
