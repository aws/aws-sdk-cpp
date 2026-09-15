/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/ResiliencyGroupAssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace ResiliencyGroupAssociationStateMapper {

static const int associating_HASH = HashingUtils::HashString("associating");
static const int associated_HASH = HashingUtils::HashString("associated");
static const int disassociating_HASH = HashingUtils::HashString("disassociating");
static const int disassociated_HASH = HashingUtils::HashString("disassociated");

ResiliencyGroupAssociationState GetResiliencyGroupAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == associating_HASH) {
    return ResiliencyGroupAssociationState::associating;
  } else if (hashCode == associated_HASH) {
    return ResiliencyGroupAssociationState::associated;
  } else if (hashCode == disassociating_HASH) {
    return ResiliencyGroupAssociationState::disassociating;
  } else if (hashCode == disassociated_HASH) {
    return ResiliencyGroupAssociationState::disassociated;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResiliencyGroupAssociationState>(hashCode);
  }

  return ResiliencyGroupAssociationState::NOT_SET;
}

Aws::String GetNameForResiliencyGroupAssociationState(ResiliencyGroupAssociationState enumValue) {
  switch (enumValue) {
    case ResiliencyGroupAssociationState::NOT_SET:
      return {};
    case ResiliencyGroupAssociationState::associating:
      return "associating";
    case ResiliencyGroupAssociationState::associated:
      return "associated";
    case ResiliencyGroupAssociationState::disassociating:
      return "disassociating";
    case ResiliencyGroupAssociationState::disassociated:
      return "disassociated";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResiliencyGroupAssociationStateMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
