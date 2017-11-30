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
#include <aws/alexaforbusiness/AlexaForBusinessErrors.h>

using namespace Aws::Client;
using namespace Aws::AlexaForBusiness;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace AlexaForBusinessErrorMapper
{

static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int INVALID_USER_STATUS_HASH = HashingUtils::HashString("InvalidUserStatusException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int NAME_IN_USE_HASH = HashingUtils::HashString("NameInUseException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_USER_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::INVALID_USER_STATUS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AlexaForBusinessErrors::NAME_IN_USE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AlexaForBusinessErrorMapper
} // namespace AlexaForBusiness
} // namespace Aws
