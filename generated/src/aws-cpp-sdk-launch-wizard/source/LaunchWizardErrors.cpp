/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/launch-wizard/LaunchWizardErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LaunchWizard;

namespace Aws
{
namespace LaunchWizard
{
namespace LaunchWizardErrorMapper
{

static const int RESOURCE_LIMIT_HASH = HashingUtils::HashString("ResourceLimitException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LaunchWizardErrors::RESOURCE_LIMIT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LaunchWizardErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LaunchWizardErrorMapper
} // namespace LaunchWizard
} // namespace Aws
