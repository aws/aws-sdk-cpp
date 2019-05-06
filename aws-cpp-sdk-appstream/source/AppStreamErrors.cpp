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
#include <aws/appstream/AppStreamErrors.h>

using namespace Aws::Client;
using namespace Aws::AppStream;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace AppStreamErrorMapper
{

static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OperationNotPermittedException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int INVALID_ROLE_HASH = HashingUtils::HashString("InvalidRoleException");
static const int INVALID_ACCOUNT_STATUS_HASH = HashingUtils::HashString("InvalidAccountStatusException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int RESOURCE_NOT_AVAILABLE_HASH = HashingUtils::HashString("ResourceNotAvailableException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INCOMPATIBLE_IMAGE_HASH = HashingUtils::HashString("IncompatibleImageException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_NOT_PERMITTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::OPERATION_NOT_PERMITTED), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ROLE), false);
  }
  else if (hashCode == INVALID_ACCOUNT_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INVALID_ACCOUNT_STATUS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == RESOURCE_NOT_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_NOT_AVAILABLE), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INCOMPATIBLE_IMAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppStreamErrors::INCOMPATIBLE_IMAGE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppStreamErrorMapper
} // namespace AppStream
} // namespace Aws
