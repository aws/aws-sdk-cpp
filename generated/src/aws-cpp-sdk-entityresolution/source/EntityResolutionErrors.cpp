/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/entityresolution/EntityResolutionErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EntityResolution;

namespace Aws
{
namespace EntityResolution
{
namespace EntityResolutionErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int EXCEEDS_LIMIT_HASH = HashingUtils::HashString("ExceedsLimitException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::CONFLICT), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == EXCEEDS_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EntityResolutionErrors::EXCEEDS_LIMIT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EntityResolutionErrorMapper
} // namespace EntityResolution
} // namespace Aws
