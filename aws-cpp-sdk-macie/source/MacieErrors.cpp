/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/macie/MacieErrors.h>

using namespace Aws::Client;
using namespace Aws::Macie;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie
{
namespace MacieErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::INTERNAL), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MacieErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MacieErrorMapper
} // namespace Macie
} // namespace Aws
