/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FallbackError.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace FallbackErrorMapper {

static const int CONNECTION_ERROR_HASH = HashingUtils::HashString("CONNECTION_ERROR");
static const int FIRST_BYTE_TIMEOUT_HASH = HashingUtils::HashString("FIRST_BYTE_TIMEOUT");
static const int UNROUTABLE_HASH = HashingUtils::HashString("UNROUTABLE");

FallbackError GetFallbackErrorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTION_ERROR_HASH) {
    return FallbackError::CONNECTION_ERROR;
  } else if (hashCode == FIRST_BYTE_TIMEOUT_HASH) {
    return FallbackError::FIRST_BYTE_TIMEOUT;
  } else if (hashCode == UNROUTABLE_HASH) {
    return FallbackError::UNROUTABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FallbackError>(hashCode);
  }

  return FallbackError::NOT_SET;
}

Aws::String GetNameForFallbackError(FallbackError enumValue) {
  switch (enumValue) {
    case FallbackError::NOT_SET:
      return {};
    case FallbackError::CONNECTION_ERROR:
      return "CONNECTION_ERROR";
    case FallbackError::FIRST_BYTE_TIMEOUT:
      return "FIRST_BYTE_TIMEOUT";
    case FallbackError::UNROUTABLE:
      return "UNROUTABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FallbackErrorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
