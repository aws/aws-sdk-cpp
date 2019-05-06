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
#include <aws/codestar/CodeStarErrors.h>

using namespace Aws::Client;
using namespace Aws::CodeStar;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace CodeStarErrorMapper
{

static const int PROJECT_CONFIGURATION_HASH = HashingUtils::HashString("ProjectConfigurationException");
static const int USER_PROFILE_NOT_FOUND_HASH = HashingUtils::HashString("UserProfileNotFoundException");
static const int PROJECT_CREATION_FAILED_HASH = HashingUtils::HashString("ProjectCreationFailedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int PROJECT_NOT_FOUND_HASH = HashingUtils::HashString("ProjectNotFoundException");
static const int TEAM_MEMBER_ALREADY_ASSOCIATED_HASH = HashingUtils::HashString("TeamMemberAlreadyAssociatedException");
static const int USER_PROFILE_ALREADY_EXISTS_HASH = HashingUtils::HashString("UserProfileAlreadyExistsException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int TEAM_MEMBER_NOT_FOUND_HASH = HashingUtils::HashString("TeamMemberNotFoundException");
static const int INVALID_SERVICE_ROLE_HASH = HashingUtils::HashString("InvalidServiceRoleException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int PROJECT_ALREADY_EXISTS_HASH = HashingUtils::HashString("ProjectAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == PROJECT_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::PROJECT_CONFIGURATION), false);
  }
  else if (hashCode == USER_PROFILE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::USER_PROFILE_NOT_FOUND), false);
  }
  else if (hashCode == PROJECT_CREATION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::PROJECT_CREATION_FAILED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == PROJECT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::PROJECT_NOT_FOUND), false);
  }
  else if (hashCode == TEAM_MEMBER_ALREADY_ASSOCIATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::TEAM_MEMBER_ALREADY_ASSOCIATED), false);
  }
  else if (hashCode == USER_PROFILE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::USER_PROFILE_ALREADY_EXISTS), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == TEAM_MEMBER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::TEAM_MEMBER_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SERVICE_ROLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::INVALID_SERVICE_ROLE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == PROJECT_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::PROJECT_ALREADY_EXISTS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeStarErrorMapper
} // namespace CodeStar
} // namespace Aws
