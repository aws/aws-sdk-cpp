/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssuePatchDeliveryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssuePatchDeliveryStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");

IssuePatchDeliveryStatus GetIssuePatchDeliveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return IssuePatchDeliveryStatus::PENDING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return IssuePatchDeliveryStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return IssuePatchDeliveryStatus::FAILED;
  } else if (hashCode == SKIPPED_HASH) {
    return IssuePatchDeliveryStatus::SKIPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssuePatchDeliveryStatus>(hashCode);
  }

  return IssuePatchDeliveryStatus::NOT_SET;
}

Aws::String GetNameForIssuePatchDeliveryStatus(IssuePatchDeliveryStatus enumValue) {
  switch (enumValue) {
    case IssuePatchDeliveryStatus::NOT_SET:
      return {};
    case IssuePatchDeliveryStatus::PENDING:
      return "PENDING";
    case IssuePatchDeliveryStatus::SUCCEEDED:
      return "SUCCEEDED";
    case IssuePatchDeliveryStatus::FAILED:
      return "FAILED";
    case IssuePatchDeliveryStatus::SKIPPED:
      return "SKIPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssuePatchDeliveryStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
