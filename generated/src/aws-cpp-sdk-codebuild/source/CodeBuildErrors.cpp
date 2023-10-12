/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codebuild/CodeBuildErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeBuild;

namespace Aws
{
namespace CodeBuild
{
namespace CodeBuildErrorMapper
{

static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t O_AUTH_PROVIDER_HASH = ConstExprHashingUtils::HashString("OAuthProviderException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t ACCOUNT_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("AccountLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == O_AUTH_PROVIDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::O_AUTH_PROVIDER), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::INVALID_INPUT), false);
  }
  else if (hashCode == ACCOUNT_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeBuildErrors::ACCOUNT_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeBuildErrorMapper
} // namespace CodeBuild
} // namespace Aws
