/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/GovernanceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace GovernanceModeMapper {

static const int IAM_ONLY_HASH = HashingUtils::HashString("IAM_ONLY");
static const int LAKE_FORMATION_HASH = HashingUtils::HashString("LAKE_FORMATION");

GovernanceMode GetGovernanceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IAM_ONLY_HASH) {
    return GovernanceMode::IAM_ONLY;
  } else if (hashCode == LAKE_FORMATION_HASH) {
    return GovernanceMode::LAKE_FORMATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GovernanceMode>(hashCode);
  }

  return GovernanceMode::NOT_SET;
}

Aws::String GetNameForGovernanceMode(GovernanceMode enumValue) {
  switch (enumValue) {
    case GovernanceMode::NOT_SET:
      return {};
    case GovernanceMode::IAM_ONLY:
      return "IAM_ONLY";
    case GovernanceMode::LAKE_FORMATION:
      return "LAKE_FORMATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GovernanceModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
