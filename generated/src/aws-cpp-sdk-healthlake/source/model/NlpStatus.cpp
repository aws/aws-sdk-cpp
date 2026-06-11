/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/NlpStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace NlpStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");

NlpStatus GetNlpStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return NlpStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return NlpStatus::DISABLED;
  } else if (hashCode == ENABLING_HASH) {
    return NlpStatus::ENABLING;
  } else if (hashCode == DISABLING_HASH) {
    return NlpStatus::DISABLING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NlpStatus>(hashCode);
  }

  return NlpStatus::NOT_SET;
}

Aws::String GetNameForNlpStatus(NlpStatus enumValue) {
  switch (enumValue) {
    case NlpStatus::NOT_SET:
      return {};
    case NlpStatus::ENABLED:
      return "ENABLED";
    case NlpStatus::DISABLED:
      return "DISABLED";
    case NlpStatus::ENABLING:
      return "ENABLING";
    case NlpStatus::DISABLING:
      return "DISABLING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NlpStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
