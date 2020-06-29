/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glacier/GlacierErrors.h>

using namespace Aws::Client;
using namespace Aws::Glacier;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace GlacierErrorMapper
{

static const int INSUFFICIENT_CAPACITY_HASH = HashingUtils::HashString("InsufficientCapacityException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int POLICY_ENFORCED_HASH = HashingUtils::HashString("PolicyEnforcedException");
static const int MISSING_PARAMETER_VALUE_HASH = HashingUtils::HashString("MissingParameterValueException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INSUFFICIENT_CAPACITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::INSUFFICIENT_CAPACITY), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == POLICY_ENFORCED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::POLICY_ENFORCED), false);
  }
  else if (hashCode == MISSING_PARAMETER_VALUE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(GlacierErrors::MISSING_PARAMETER_VALUE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace GlacierErrorMapper
} // namespace Glacier
} // namespace Aws
