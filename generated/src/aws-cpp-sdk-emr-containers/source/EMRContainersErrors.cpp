/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/emr-containers/EMRContainersErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EMRContainers;

namespace Aws
{
namespace EMRContainers
{
namespace EMRContainersErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int E_K_S_REQUEST_THROTTLED_HASH = HashingUtils::HashString("EKSRequestThrottledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EMRContainersErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == E_K_S_REQUEST_THROTTLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EMRContainersErrors::E_K_S_REQUEST_THROTTLED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EMRContainersErrorMapper
} // namespace EMRContainers
} // namespace Aws
