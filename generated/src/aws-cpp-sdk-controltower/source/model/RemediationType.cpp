/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/RemediationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ControlTower {
namespace Model {
namespace RemediationTypeMapper {

static const int INHERITANCE_DRIFT_HASH = HashingUtils::HashString("INHERITANCE_DRIFT");

RemediationType GetRemediationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INHERITANCE_DRIFT_HASH) {
    return RemediationType::INHERITANCE_DRIFT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemediationType>(hashCode);
  }

  return RemediationType::NOT_SET;
}

Aws::String GetNameForRemediationType(RemediationType enumValue) {
  switch (enumValue) {
    case RemediationType::NOT_SET:
      return {};
    case RemediationType::INHERITANCE_DRIFT:
      return "INHERITANCE_DRIFT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemediationTypeMapper
}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
