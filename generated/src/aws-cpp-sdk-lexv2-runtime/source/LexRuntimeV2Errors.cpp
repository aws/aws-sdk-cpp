/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-runtime/LexRuntimeV2Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LexRuntimeV2;

namespace Aws
{
namespace LexRuntimeV2
{
namespace LexRuntimeV2ErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int BAD_GATEWAY_HASH = HashingUtils::HashString("BadGatewayException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int DEPENDENCY_FAILED_HASH = HashingUtils::HashString("DependencyFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::BAD_GATEWAY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == DEPENDENCY_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::DEPENDENCY_FAILED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexRuntimeV2ErrorMapper
} // namespace LexRuntimeV2
} // namespace Aws
