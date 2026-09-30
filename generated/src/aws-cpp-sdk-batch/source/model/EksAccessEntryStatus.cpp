/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksAccessEntryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace EksAccessEntryStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

EksAccessEntryStatus GetEksAccessEntryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EksAccessEntryStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return EksAccessEntryStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EksAccessEntryStatus>(hashCode);
  }

  return EksAccessEntryStatus::NOT_SET;
}

Aws::String GetNameForEksAccessEntryStatus(EksAccessEntryStatus enumValue) {
  switch (enumValue) {
    case EksAccessEntryStatus::NOT_SET:
      return {};
    case EksAccessEntryStatus::ACTIVE:
      return "ACTIVE";
    case EksAccessEntryStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EksAccessEntryStatusMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
