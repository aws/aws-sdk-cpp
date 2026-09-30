/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksAccessEntryDesiredState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {
namespace EksAccessEntryDesiredStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int INHERIT_FROM_CLUSTER_HASH = HashingUtils::HashString("INHERIT_FROM_CLUSTER");

EksAccessEntryDesiredState GetEksAccessEntryDesiredStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EksAccessEntryDesiredState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return EksAccessEntryDesiredState::DISABLED;
  } else if (hashCode == INHERIT_FROM_CLUSTER_HASH) {
    return EksAccessEntryDesiredState::INHERIT_FROM_CLUSTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EksAccessEntryDesiredState>(hashCode);
  }

  return EksAccessEntryDesiredState::NOT_SET;
}

Aws::String GetNameForEksAccessEntryDesiredState(EksAccessEntryDesiredState enumValue) {
  switch (enumValue) {
    case EksAccessEntryDesiredState::NOT_SET:
      return {};
    case EksAccessEntryDesiredState::ENABLED:
      return "ENABLED";
    case EksAccessEntryDesiredState::DISABLED:
      return "DISABLED";
    case EksAccessEntryDesiredState::INHERIT_FROM_CLUSTER:
      return "INHERIT_FROM_CLUSTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EksAccessEntryDesiredStateMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
