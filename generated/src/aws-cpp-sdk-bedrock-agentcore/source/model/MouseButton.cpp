/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MouseButton.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace MouseButtonMapper {

static const int LEFT_HASH = HashingUtils::HashString("LEFT");
static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");
static const int MIDDLE_HASH = HashingUtils::HashString("MIDDLE");

MouseButton GetMouseButtonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LEFT_HASH) {
    return MouseButton::LEFT;
  } else if (hashCode == RIGHT_HASH) {
    return MouseButton::RIGHT;
  } else if (hashCode == MIDDLE_HASH) {
    return MouseButton::MIDDLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MouseButton>(hashCode);
  }

  return MouseButton::NOT_SET;
}

Aws::String GetNameForMouseButton(MouseButton enumValue) {
  switch (enumValue) {
    case MouseButton::NOT_SET:
      return {};
    case MouseButton::LEFT:
      return "LEFT";
    case MouseButton::RIGHT:
      return "RIGHT";
    case MouseButton::MIDDLE:
      return "MIDDLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MouseButtonMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
