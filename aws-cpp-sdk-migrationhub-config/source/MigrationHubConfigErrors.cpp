/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/migrationhub-config/MigrationHubConfigErrors.h>

using namespace Aws::Client;
using namespace Aws::MigrationHubConfig;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubConfig
{
namespace MigrationHubConfigErrorMapper
{

static const int DRY_RUN_OPERATION_HASH = HashingUtils::HashString("DryRunOperation");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubConfigErrors::DRY_RUN_OPERATION), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubConfigErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubConfigErrorMapper
} // namespace MigrationHubConfig
} // namespace Aws
