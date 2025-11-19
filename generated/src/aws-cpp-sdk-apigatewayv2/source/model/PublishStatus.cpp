/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/PublishStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {
namespace PublishStatusMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int PUBLISH_IN_PROGRESS_HASH = HashingUtils::HashString("PUBLISH_IN_PROGRESS");
static const int PUBLISH_FAILED_HASH = HashingUtils::HashString("PUBLISH_FAILED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

PublishStatus GetPublishStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return PublishStatus::PUBLISHED;
  } else if (hashCode == PUBLISH_IN_PROGRESS_HASH) {
    return PublishStatus::PUBLISH_IN_PROGRESS;
  } else if (hashCode == PUBLISH_FAILED_HASH) {
    return PublishStatus::PUBLISH_FAILED;
  } else if (hashCode == DISABLED_HASH) {
    return PublishStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PublishStatus>(hashCode);
  }

  return PublishStatus::NOT_SET;
}

Aws::String GetNameForPublishStatus(PublishStatus enumValue) {
  switch (enumValue) {
    case PublishStatus::NOT_SET:
      return {};
    case PublishStatus::PUBLISHED:
      return "PUBLISHED";
    case PublishStatus::PUBLISH_IN_PROGRESS:
      return "PUBLISH_IN_PROGRESS";
    case PublishStatus::PUBLISH_FAILED:
      return "PUBLISH_FAILED";
    case PublishStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PublishStatusMapper
}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
