/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RdsUngracefulBehavior.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace RdsUngracefulBehaviorMapper {

static const int promoteReadReplica_HASH = HashingUtils::HashString("promoteReadReplica");

RdsUngracefulBehavior GetRdsUngracefulBehaviorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == promoteReadReplica_HASH) {
    return RdsUngracefulBehavior::promoteReadReplica;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RdsUngracefulBehavior>(hashCode);
  }

  return RdsUngracefulBehavior::NOT_SET;
}

Aws::String GetNameForRdsUngracefulBehavior(RdsUngracefulBehavior enumValue) {
  switch (enumValue) {
    case RdsUngracefulBehavior::NOT_SET:
      return {};
    case RdsUngracefulBehavior::promoteReadReplica:
      return "promoteReadReplica";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RdsUngracefulBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
