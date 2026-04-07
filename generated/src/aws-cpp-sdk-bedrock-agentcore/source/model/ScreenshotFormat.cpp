/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ScreenshotFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ScreenshotFormatMapper {

static const int PNG_HASH = HashingUtils::HashString("PNG");

ScreenshotFormat GetScreenshotFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PNG_HASH) {
    return ScreenshotFormat::PNG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScreenshotFormat>(hashCode);
  }

  return ScreenshotFormat::NOT_SET;
}

Aws::String GetNameForScreenshotFormat(ScreenshotFormat enumValue) {
  switch (enumValue) {
    case ScreenshotFormat::NOT_SET:
      return {};
    case ScreenshotFormat::PNG:
      return "PNG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScreenshotFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
