/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lakeformation/LakeFormationErrors.h>

using namespace Aws::Client;
using namespace Aws::LakeFormation;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace LakeFormationErrorMapper
{

static const int OPERATION_TIMEOUT_HASH = HashingUtils::HashString("OperationTimeoutException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int ENTITY_NOT_FOUND_HASH = HashingUtils::HashString("EntityNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::OPERATION_TIMEOUT), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::INVALID_INPUT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == ENTITY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LakeFormationErrors::ENTITY_NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LakeFormationErrorMapper
} // namespace LakeFormation
} // namespace Aws
