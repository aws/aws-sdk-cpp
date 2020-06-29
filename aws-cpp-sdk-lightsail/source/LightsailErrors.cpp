/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/LightsailErrors.h>

using namespace Aws::Client;
using namespace Aws::Lightsail;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace LightsailErrorMapper
{

static const int OPERATION_FAILURE_HASH = HashingUtils::HashString("OperationFailureException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int UNAUTHENTICATED_HASH = HashingUtils::HashString("UnauthenticatedException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");
static const int SERVICE_HASH = HashingUtils::HashString("ServiceException");
static const int ACCOUNT_SETUP_IN_PROGRESS_HASH = HashingUtils::HashString("AccountSetupInProgressException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == OPERATION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::OPERATION_FAILURE), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::NOT_FOUND), false);
  }
  else if (hashCode == UNAUTHENTICATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::UNAUTHENTICATED), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::INVALID_INPUT), false);
  }
  else if (hashCode == SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::SERVICE), false);
  }
  else if (hashCode == ACCOUNT_SETUP_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LightsailErrors::ACCOUNT_SETUP_IN_PROGRESS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LightsailErrorMapper
} // namespace Lightsail
} // namespace Aws
