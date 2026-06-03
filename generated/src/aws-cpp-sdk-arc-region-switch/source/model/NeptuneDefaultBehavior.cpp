/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/NeptuneDefaultBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace NeptuneDefaultBehaviorMapper {

static const int switchoverOnly_HASH = HashingUtils::HashString("switchoverOnly");
static const int failover_HASH = HashingUtils::HashString("failover");

NeptuneDefaultBehavior GetNeptuneDefaultBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == switchoverOnly_HASH) {
    return NeptuneDefaultBehavior::switchoverOnly;
  } else if (hashCode == failover_HASH) {
    return NeptuneDefaultBehavior::failover;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NeptuneDefaultBehavior>(hashCode);
  }

  return NeptuneDefaultBehavior::NOT_SET;
}

Aws::String GetNameForNeptuneDefaultBehavior(NeptuneDefaultBehavior enumValue) {
  switch (enumValue) {
    case NeptuneDefaultBehavior::NOT_SET:
      return {};
    case NeptuneDefaultBehavior::switchoverOnly:
      return "switchoverOnly";
    case NeptuneDefaultBehavior::failover:
      return "failover";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NeptuneDefaultBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
