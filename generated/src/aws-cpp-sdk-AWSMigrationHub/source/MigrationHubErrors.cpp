/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/AWSMigrationHub/MigrationHubErrors.h>
#include <aws/AWSMigrationHub/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MigrationHub;
using namespace Aws::MigrationHub::Model;

namespace Aws
{
namespace MigrationHub
{
template<> AWS_MIGRATIONHUB_API ThrottlingException MigrationHubError::GetModeledError()
{
  assert(this->GetErrorType() == MigrationHubErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace MigrationHubErrorMapper
{

static constexpr uint32_t DRY_RUN_OPERATION_HASH = ConstExprHashingUtils::HashString("DryRunOperation");
static constexpr uint32_t UNAUTHORIZED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnauthorizedOperation");
static constexpr uint32_t POLICY_ERROR_HASH = ConstExprHashingUtils::HashString("PolicyErrorException");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInputException");
static constexpr uint32_t HOME_REGION_NOT_SET_HASH = ConstExprHashingUtils::HashString("HomeRegionNotSetException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == HOME_REGION_NOT_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::HOME_REGION_NOT_SET), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubErrorMapper
} // namespace MigrationHub
} // namespace Aws
