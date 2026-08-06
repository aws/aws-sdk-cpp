/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityProviderStatusCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace CapacityProviderStatusCodeMapper {

static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
static const int INTERNAL_SERVER_EXCEPTION_HASH = HashingUtils::HashString("INTERNAL_SERVER_EXCEPTION");

CapacityProviderStatusCode GetCapacityProviderStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_ERROR_HASH) {
    return CapacityProviderStatusCode::VALIDATION_ERROR;
  } else if (hashCode == QUOTA_EXCEEDED_HASH) {
    return CapacityProviderStatusCode::QUOTA_EXCEEDED;
  } else if (hashCode == THROTTLED_HASH) {
    return CapacityProviderStatusCode::THROTTLED;
  } else if (hashCode == INTERNAL_SERVER_EXCEPTION_HASH) {
    return CapacityProviderStatusCode::INTERNAL_SERVER_EXCEPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderStatusCode>(hashCode);
  }

  return CapacityProviderStatusCode::NOT_SET;
}

Aws::String GetNameForCapacityProviderStatusCode(CapacityProviderStatusCode enumValue) {
  switch (enumValue) {
    case CapacityProviderStatusCode::NOT_SET:
      return {};
    case CapacityProviderStatusCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case CapacityProviderStatusCode::QUOTA_EXCEEDED:
      return "QUOTA_EXCEEDED";
    case CapacityProviderStatusCode::THROTTLED:
      return "THROTTLED";
    case CapacityProviderStatusCode::INTERNAL_SERVER_EXCEPTION:
      return "INTERNAL_SERVER_EXCEPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderStatusCodeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
