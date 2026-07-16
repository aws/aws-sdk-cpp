/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/drs/model/RecoveryMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {
namespace RecoveryModeMapper {

static const int FAST_HASH = HashingUtils::HashString("FAST");
static const int OPTIMAL_HASH = HashingUtils::HashString("OPTIMAL");

RecoveryMode GetRecoveryModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAST_HASH) {
    return RecoveryMode::FAST;
  } else if (hashCode == OPTIMAL_HASH) {
    return RecoveryMode::OPTIMAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecoveryMode>(hashCode);
  }

  return RecoveryMode::NOT_SET;
}

Aws::String GetNameForRecoveryMode(RecoveryMode enumValue) {
  switch (enumValue) {
    case RecoveryMode::NOT_SET:
      return {};
    case RecoveryMode::FAST:
      return "FAST";
    case RecoveryMode::OPTIMAL:
      return "OPTIMAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecoveryModeMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
