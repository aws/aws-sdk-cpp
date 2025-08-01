/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/arc-region-switch/ARCRegionswitchErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ARCRegionswitch;

namespace Aws
{
namespace ARCRegionswitch
{
namespace ARCRegionswitchErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("IllegalArgumentException");
static const int ILLEGAL_STATE_HASH = HashingUtils::HashString("IllegalStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ARCRegionswitchErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  else if (hashCode == ILLEGAL_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ARCRegionswitchErrors::ILLEGAL_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ARCRegionswitchErrors::ILLEGAL_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ARCRegionswitchErrorMapper
} // namespace ARCRegionswitch
} // namespace Aws
