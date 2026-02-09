/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot-managed-integrations/model/ManagedThingAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
namespace ManagedThingAssociationStatusMapper {

static const int PRE_ASSOCIATED_HASH = HashingUtils::HashString("PRE_ASSOCIATED");
static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");

ManagedThingAssociationStatus GetManagedThingAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_ASSOCIATED_HASH) {
    return ManagedThingAssociationStatus::PRE_ASSOCIATED;
  } else if (hashCode == ASSOCIATED_HASH) {
    return ManagedThingAssociationStatus::ASSOCIATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedThingAssociationStatus>(hashCode);
  }

  return ManagedThingAssociationStatus::NOT_SET;
}

Aws::String GetNameForManagedThingAssociationStatus(ManagedThingAssociationStatus enumValue) {
  switch (enumValue) {
    case ManagedThingAssociationStatus::NOT_SET:
      return {};
    case ManagedThingAssociationStatus::PRE_ASSOCIATED:
      return "PRE_ASSOCIATED";
    case ManagedThingAssociationStatus::ASSOCIATED:
      return "ASSOCIATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedThingAssociationStatusMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
