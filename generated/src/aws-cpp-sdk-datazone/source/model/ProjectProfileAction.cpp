/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/ProjectProfileAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace ProjectProfileActionMapper {

static const int DISASSOCIATE_HASH = HashingUtils::HashString("DISASSOCIATE");

ProjectProfileAction GetProjectProfileActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISASSOCIATE_HASH) {
    return ProjectProfileAction::DISASSOCIATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProjectProfileAction>(hashCode);
  }

  return ProjectProfileAction::NOT_SET;
}

Aws::String GetNameForProjectProfileAction(ProjectProfileAction enumValue) {
  switch (enumValue) {
    case ProjectProfileAction::NOT_SET:
      return {};
    case ProjectProfileAction::DISASSOCIATE:
      return "DISASSOCIATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProjectProfileActionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
