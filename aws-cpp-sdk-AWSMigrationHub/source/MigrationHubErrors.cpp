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
#include <aws/AWSMigrationHub/MigrationHubErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHub;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHub
{
namespace MigrationHubErrorMapper
{

static const int DRY_RUN_OPERATION_HASH = HashingUtils::HashString("DryRunOperation");
static const int UNAUTHORIZED_OPERATION_HASH = HashingUtils::HashString("UnauthorizedOperation");
static const int POLICY_ERROR_HASH = HashingUtils::HashString("PolicyErrorException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::DRY_RUN_OPERATION), false);
  }
  else if (hashCode == UNAUTHORIZED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::UNAUTHORIZED_OPERATION), false);
  }
  else if (hashCode == POLICY_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::POLICY_ERROR), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubErrorMapper
} // namespace MigrationHub
} // namespace Aws
