/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondaryNetworkCidrBlockAssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondaryNetworkCidrBlockAssociationStateMapper {

static const int associating_HASH = HashingUtils::HashString("associating");
static const int associated_HASH = HashingUtils::HashString("associated");
static const int association_failed_HASH = HashingUtils::HashString("association-failed");
static const int disassociating_HASH = HashingUtils::HashString("disassociating");
static const int disassociated_HASH = HashingUtils::HashString("disassociated");
static const int disassociation_failed_HASH = HashingUtils::HashString("disassociation-failed");

SecondaryNetworkCidrBlockAssociationState GetSecondaryNetworkCidrBlockAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == associating_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::associating;
  } else if (hashCode == associated_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::associated;
  } else if (hashCode == association_failed_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::association_failed;
  } else if (hashCode == disassociating_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::disassociating;
  } else if (hashCode == disassociated_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::disassociated;
  } else if (hashCode == disassociation_failed_HASH) {
    return SecondaryNetworkCidrBlockAssociationState::disassociation_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondaryNetworkCidrBlockAssociationState>(hashCode);
  }

  return SecondaryNetworkCidrBlockAssociationState::NOT_SET;
}

Aws::String GetNameForSecondaryNetworkCidrBlockAssociationState(SecondaryNetworkCidrBlockAssociationState enumValue) {
  switch (enumValue) {
    case SecondaryNetworkCidrBlockAssociationState::NOT_SET:
      return {};
    case SecondaryNetworkCidrBlockAssociationState::associating:
      return "associating";
    case SecondaryNetworkCidrBlockAssociationState::associated:
      return "associated";
    case SecondaryNetworkCidrBlockAssociationState::association_failed:
      return "association-failed";
    case SecondaryNetworkCidrBlockAssociationState::disassociating:
      return "disassociating";
    case SecondaryNetworkCidrBlockAssociationState::disassociated:
      return "disassociated";
    case SecondaryNetworkCidrBlockAssociationState::disassociation_failed:
      return "disassociation-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondaryNetworkCidrBlockAssociationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
