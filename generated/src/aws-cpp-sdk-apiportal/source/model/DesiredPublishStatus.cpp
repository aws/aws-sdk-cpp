/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DesiredPublishStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace DesiredPublishStatusMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DesiredPublishStatus GetDesiredPublishStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return DesiredPublishStatus::PUBLISHED;
  } else if (hashCode == DISABLED_HASH) {
    return DesiredPublishStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DesiredPublishStatus>(hashCode);
  }

  return DesiredPublishStatus::NOT_SET;
}

Aws::String GetNameForDesiredPublishStatus(DesiredPublishStatus enumValue) {
  switch (enumValue) {
    case DesiredPublishStatus::NOT_SET:
      return {};
    case DesiredPublishStatus::PUBLISHED:
      return "PUBLISHED";
    case DesiredPublishStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DesiredPublishStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
