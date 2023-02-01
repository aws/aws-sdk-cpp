/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/compute-optimizer/ComputeOptimizerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ComputeOptimizer;

namespace Aws
{
namespace ComputeOptimizer
{
namespace ComputeOptimizerErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ComputeOptimizerErrors::LIMIT_EXCEEDED), true);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ComputeOptimizerErrorMapper
} // namespace ComputeOptimizer
} // namespace Aws
