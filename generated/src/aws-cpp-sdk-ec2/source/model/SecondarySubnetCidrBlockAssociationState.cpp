/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondarySubnetCidrBlockAssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondarySubnetCidrBlockAssociationStateMapper {

static const int associating_HASH = HashingUtils::HashString("associating");
static const int associated_HASH = HashingUtils::HashString("associated");
static const int association_failed_HASH = HashingUtils::HashString("association-failed");
static const int disassociating_HASH = HashingUtils::HashString("disassociating");
static const int disassociated_HASH = HashingUtils::HashString("disassociated");
static const int disassociation_failed_HASH = HashingUtils::HashString("disassociation-failed");

SecondarySubnetCidrBlockAssociationState GetSecondarySubnetCidrBlockAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == associating_HASH) {
    return SecondarySubnetCidrBlockAssociationState::associating;
  } else if (hashCode == associated_HASH) {
    return SecondarySubnetCidrBlockAssociationState::associated;
  } else if (hashCode == association_failed_HASH) {
    return SecondarySubnetCidrBlockAssociationState::association_failed;
  } else if (hashCode == disassociating_HASH) {
    return SecondarySubnetCidrBlockAssociationState::disassociating;
  } else if (hashCode == disassociated_HASH) {
    return SecondarySubnetCidrBlockAssociationState::disassociated;
  } else if (hashCode == disassociation_failed_HASH) {
    return SecondarySubnetCidrBlockAssociationState::disassociation_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondarySubnetCidrBlockAssociationState>(hashCode);
  }

  return SecondarySubnetCidrBlockAssociationState::NOT_SET;
}

Aws::String GetNameForSecondarySubnetCidrBlockAssociationState(SecondarySubnetCidrBlockAssociationState enumValue) {
  switch (enumValue) {
    case SecondarySubnetCidrBlockAssociationState::NOT_SET:
      return {};
    case SecondarySubnetCidrBlockAssociationState::associating:
      return "associating";
    case SecondarySubnetCidrBlockAssociationState::associated:
      return "associated";
    case SecondarySubnetCidrBlockAssociationState::association_failed:
      return "association-failed";
    case SecondarySubnetCidrBlockAssociationState::disassociating:
      return "disassociating";
    case SecondarySubnetCidrBlockAssociationState::disassociated:
      return "disassociated";
    case SecondarySubnetCidrBlockAssociationState::disassociation_failed:
      return "disassociation-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondarySubnetCidrBlockAssociationStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
