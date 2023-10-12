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

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t BAD_GATEWAY_HASH = ConstExprHashingUtils::HashString("BadGatewayException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t DEPENDENCY_FAILED_HASH = ConstExprHashingUtils::HashString("DependencyFailedException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::CONFLICT), false);
  }
  else if (hashCode == BAD_GATEWAY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::BAD_GATEWAY), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DEPENDENCY_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LexRuntimeV2Errors::DEPENDENCY_FAILED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace LexRuntimeV2ErrorMapper
} // namespace LexRuntimeV2
} // namespace Aws
