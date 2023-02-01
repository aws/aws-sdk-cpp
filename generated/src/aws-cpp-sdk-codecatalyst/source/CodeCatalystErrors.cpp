/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/codecatalyst/CodeCatalystErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CodeCatalyst;

namespace Aws
{
namespace CodeCatalyst
{
namespace CodeCatalystErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCatalystErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CodeCatalystErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CodeCatalystErrorMapper
} // namespace CodeCatalyst
} // namespace Aws
