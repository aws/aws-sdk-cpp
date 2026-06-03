/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/NeptuneUngracefulBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace NeptuneUngracefulBehaviorMapper {

static const int failover_HASH = HashingUtils::HashString("failover");

NeptuneUngracefulBehavior GetNeptuneUngracefulBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == failover_HASH) {
    return NeptuneUngracefulBehavior::failover;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NeptuneUngracefulBehavior>(hashCode);
  }

  return NeptuneUngracefulBehavior::NOT_SET;
}

Aws::String GetNameForNeptuneUngracefulBehavior(NeptuneUngracefulBehavior enumValue) {
  switch (enumValue) {
    case NeptuneUngracefulBehavior::NOT_SET:
      return {};
    case NeptuneUngracefulBehavior::failover:
      return "failover";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NeptuneUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
