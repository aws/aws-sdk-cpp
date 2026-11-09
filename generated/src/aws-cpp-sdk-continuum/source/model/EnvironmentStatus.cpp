/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace EnvironmentStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return EnvironmentStatus::ACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnvironmentStatus>(hashCode);
  }

  return EnvironmentStatus::NOT_SET;
}

Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue) {
  switch (enumValue) {
    case EnvironmentStatus::NOT_SET:
      return {};
    case EnvironmentStatus::ACTIVE:
      return "ACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnvironmentStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
