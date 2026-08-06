/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/AccessPointStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace AccessPointStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");
static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

AccessPointStatus GetAccessPointStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return AccessPointStatus::AVAILABLE;
  } else if (hashCode == CREATING_HASH) {
    return AccessPointStatus::CREATING;
  } else if (hashCode == DELETING_HASH) {
    return AccessPointStatus::DELETING;
  } else if (hashCode == DISASSOCIATED_HASH) {
    return AccessPointStatus::DISASSOCIATED;
  } else if (hashCode == DISASSOCIATING_HASH) {
    return AccessPointStatus::DISASSOCIATING;
  } else if (hashCode == EXPIRED_HASH) {
    return AccessPointStatus::EXPIRED;
  } else if (hashCode == FAILED_HASH) {
    return AccessPointStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessPointStatus>(hashCode);
  }

  return AccessPointStatus::NOT_SET;
}

Aws::String GetNameForAccessPointStatus(AccessPointStatus enumValue) {
  switch (enumValue) {
    case AccessPointStatus::NOT_SET:
      return {};
    case AccessPointStatus::AVAILABLE:
      return "AVAILABLE";
    case AccessPointStatus::CREATING:
      return "CREATING";
    case AccessPointStatus::DELETING:
      return "DELETING";
    case AccessPointStatus::DISASSOCIATED:
      return "DISASSOCIATED";
    case AccessPointStatus::DISASSOCIATING:
      return "DISASSOCIATING";
    case AccessPointStatus::EXPIRED:
      return "EXPIRED";
    case AccessPointStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessPointStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
