/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/PreviewStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {
namespace PreviewStatusMapper {

static const int PREVIEW_IN_PROGRESS_HASH = HashingUtils::HashString("PREVIEW_IN_PROGRESS");
static const int PREVIEW_FAILED_HASH = HashingUtils::HashString("PREVIEW_FAILED");
static const int PREVIEW_READY_HASH = HashingUtils::HashString("PREVIEW_READY");

PreviewStatus GetPreviewStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREVIEW_IN_PROGRESS_HASH) {
    return PreviewStatus::PREVIEW_IN_PROGRESS;
  } else if (hashCode == PREVIEW_FAILED_HASH) {
    return PreviewStatus::PREVIEW_FAILED;
  } else if (hashCode == PREVIEW_READY_HASH) {
    return PreviewStatus::PREVIEW_READY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PreviewStatus>(hashCode);
  }

  return PreviewStatus::NOT_SET;
}

Aws::String GetNameForPreviewStatus(PreviewStatus enumValue) {
  switch (enumValue) {
    case PreviewStatus::NOT_SET:
      return {};
    case PreviewStatus::PREVIEW_IN_PROGRESS:
      return "PREVIEW_IN_PROGRESS";
    case PreviewStatus::PREVIEW_FAILED:
      return "PREVIEW_FAILED";
    case PreviewStatus::PREVIEW_READY:
      return "PREVIEW_READY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PreviewStatusMapper
}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
