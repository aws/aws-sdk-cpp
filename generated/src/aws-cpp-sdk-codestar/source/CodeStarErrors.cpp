/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codestar/CodeStarErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeStar;

namespace Aws
{
namespace CodeStar
{
namespace CodeStarErrorMapper
{

static constexpr uint32_t PROJECT_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("ProjectConfigurationException");
static constexpr uint32_t USER_PROFILE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("UserProfileNotFoundException");
static constexpr uint32_t PROJECT_CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("ProjectCreationFailedException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t PROJECT_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ProjectNotFoundException");
static constexpr uint32_t TEAM_MEMBER_ALREADY_ASSOCIATED_HASH = ConstExprHashingUtils::HashString("TeamMemberAlreadyAssociatedException");
static constexpr uint32_t USER_PROFILE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("UserProfileAlreadyExistsException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t TEAM_MEMBER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TeamMemberNotFoundException");
static constexpr uint32_t INVALID_SERVICE_ROLE_HASH = ConstExprHashingUtils::HashString("InvalidServiceRoleException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t PROJECT_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ProjectAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeStarErrors::LIMIT_EXCEEDED), true);
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
