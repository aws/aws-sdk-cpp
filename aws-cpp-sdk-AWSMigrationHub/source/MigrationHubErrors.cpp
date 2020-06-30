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

static const int DRY_RUN_OPERATION_HASH = HashingUtils::HashString("DryRunOperation");
static const int UNAUTHORIZED_OPERATION_HASH = HashingUtils::HashString("UnauthorizedOperation");
static const int POLICY_ERROR_HASH = HashingUtils::HashString("PolicyErrorException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int HOME_REGION_NOT_SET_HASH = HashingUtils::HashString("HomeRegionNotSetException");


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
  else if (hashCode == HOME_REGION_NOT_SET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubErrors::HOME_REGION_NOT_SET), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubErrorMapper
} // namespace MigrationHub
} // namespace Aws
