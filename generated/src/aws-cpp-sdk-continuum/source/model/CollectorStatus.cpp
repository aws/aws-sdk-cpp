/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/CollectorStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace CollectorStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");

CollectorStatus GetCollectorStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return CollectorStatus::ACTIVE;
  } else if (hashCode == PENDING_DELETION_HASH) {
    return CollectorStatus::PENDING_DELETION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CollectorStatus>(hashCode);
  }

  return CollectorStatus::NOT_SET;
}

Aws::String GetNameForCollectorStatus(CollectorStatus enumValue) {
  switch (enumValue) {
    case CollectorStatus::NOT_SET:
      return {};
    case CollectorStatus::ACTIVE:
      return "ACTIVE";
    case CollectorStatus::PENDING_DELETION:
      return "PENDING_DELETION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CollectorStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
