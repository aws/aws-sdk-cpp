/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InputImageFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
namespace InputImageFormatMapper {

static const int png_HASH = HashingUtils::HashString("png");
static const int jpeg_HASH = HashingUtils::HashString("jpeg");
static const int gif_HASH = HashingUtils::HashString("gif");
static const int webp_HASH = HashingUtils::HashString("webp");

InputImageFormat GetInputImageFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == png_HASH) {
    return InputImageFormat::png;
  } else if (hashCode == jpeg_HASH) {
    return InputImageFormat::jpeg;
  } else if (hashCode == gif_HASH) {
    return InputImageFormat::gif;
  } else if (hashCode == webp_HASH) {
    return InputImageFormat::webp;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InputImageFormat>(hashCode);
  }

  return InputImageFormat::NOT_SET;
}

Aws::String GetNameForInputImageFormat(InputImageFormat enumValue) {
  switch (enumValue) {
    case InputImageFormat::NOT_SET:
      return {};
    case InputImageFormat::png:
      return "png";
    case InputImageFormat::jpeg:
      return "jpeg";
    case InputImageFormat::gif:
      return "gif";
    case InputImageFormat::webp:
      return "webp";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InputImageFormatMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
