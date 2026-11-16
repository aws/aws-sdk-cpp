/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/TagKeyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace TagKeyStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

TagKeyStatus GetTagKeyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return TagKeyStatus::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return TagKeyStatus::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagKeyStatus>(hashCode);
  }

  return TagKeyStatus::NOT_SET;
}

Aws::String GetNameForTagKeyStatus(TagKeyStatus enumValue) {
  switch (enumValue) {
    case TagKeyStatus::NOT_SET:
      return {};
    case TagKeyStatus::PENDING:
      return "PENDING";
    case TagKeyStatus::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagKeyStatusMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
