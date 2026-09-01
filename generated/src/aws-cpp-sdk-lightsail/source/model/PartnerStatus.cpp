/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/PartnerStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace PartnerStatusMapper {

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Suspended_HASH = HashingUtils::HashString("Suspended");

PartnerStatus GetPartnerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Active_HASH) {
    return PartnerStatus::Active;
  } else if (hashCode == Suspended_HASH) {
    return PartnerStatus::Suspended;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PartnerStatus>(hashCode);
  }

  return PartnerStatus::NOT_SET;
}

Aws::String GetNameForPartnerStatus(PartnerStatus enumValue) {
  switch (enumValue) {
    case PartnerStatus::NOT_SET:
      return {};
    case PartnerStatus::Active:
      return "Active";
    case PartnerStatus::Suspended:
      return "Suspended";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PartnerStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
