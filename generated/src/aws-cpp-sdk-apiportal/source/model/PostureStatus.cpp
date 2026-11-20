/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PostureStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace PostureStatusMapper {

static const int TRUE_HASH = HashingUtils::HashString("TRUE");
static const int FALSE_HASH = HashingUtils::HashString("FALSE");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");

PostureStatus GetPostureStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TRUE_HASH) {
    return PostureStatus::TRUE;
  } else if (hashCode == FALSE_HASH) {
    return PostureStatus::FALSE;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return PostureStatus::NOT_APPLICABLE;
  } else if (hashCode == INSUFFICIENT_DATA_HASH) {
    return PostureStatus::INSUFFICIENT_DATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PostureStatus>(hashCode);
  }

  return PostureStatus::NOT_SET;
}

Aws::String GetNameForPostureStatus(PostureStatus enumValue) {
  switch (enumValue) {
    case PostureStatus::NOT_SET:
      return {};
    case PostureStatus::TRUE:
      return "TRUE";
    case PostureStatus::FALSE:
      return "FALSE";
    case PostureStatus::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    case PostureStatus::INSUFFICIENT_DATA:
      return "INSUFFICIENT_DATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PostureStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
