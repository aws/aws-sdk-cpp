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
#include <aws/quicksight/QuickSightErrors.h>

using namespace Aws::Client;
using namespace Aws::QuickSight;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace QuickSightErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int UNSUPPORTED_USER_EDITION_HASH = HashingUtils::HashString("UnsupportedUserEditionException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int QUICK_SIGHT_USER_NOT_FOUND_HASH = HashingUtils::HashString("QuickSightUserNotFoundException");
static const int SESSION_LIFETIME_IN_MINUTES_INVALID_HASH = HashingUtils::HashString("SessionLifetimeInMinutesInvalidException");
static const int IDENTITY_TYPE_NOT_SUPPORTED_HASH = HashingUtils::HashString("IdentityTypeNotSupportedException");
static const int PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("PreconditionNotMetException");
static const int RESOURCE_UNAVAILABLE_HASH = HashingUtils::HashString("ResourceUnavailableException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int DOMAIN_NOT_WHITELISTED_HASH = HashingUtils::HashString("DomainNotWhitelistedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == UNSUPPORTED_USER_EDITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::UNSUPPORTED_USER_EDITION), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == QUICK_SIGHT_USER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::QUICK_SIGHT_USER_NOT_FOUND), false);
  }
  else if (hashCode == SESSION_LIFETIME_IN_MINUTES_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::SESSION_LIFETIME_IN_MINUTES_INVALID), false);
  }
  else if (hashCode == IDENTITY_TYPE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::IDENTITY_TYPE_NOT_SUPPORTED), false);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == RESOURCE_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::RESOURCE_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == DOMAIN_NOT_WHITELISTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QuickSightErrors::DOMAIN_NOT_WHITELISTED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace QuickSightErrorMapper
} // namespace QuickSight
} // namespace Aws
