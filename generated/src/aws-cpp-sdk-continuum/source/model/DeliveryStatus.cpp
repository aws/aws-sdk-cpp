/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/DeliveryStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace DeliveryStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");
static const int ABANDONED_HASH = HashingUtils::HashString("ABANDONED");

DeliveryStatus GetDeliveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return DeliveryStatus::PENDING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return DeliveryStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return DeliveryStatus::FAILED;
  } else if (hashCode == SKIPPED_HASH) {
    return DeliveryStatus::SKIPPED;
  } else if (hashCode == ABANDONED_HASH) {
    return DeliveryStatus::ABANDONED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliveryStatus>(hashCode);
  }

  return DeliveryStatus::NOT_SET;
}

Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue) {
  switch (enumValue) {
    case DeliveryStatus::NOT_SET:
      return {};
    case DeliveryStatus::PENDING:
      return "PENDING";
    case DeliveryStatus::SUCCEEDED:
      return "SUCCEEDED";
    case DeliveryStatus::FAILED:
      return "FAILED";
    case DeliveryStatus::SKIPPED:
      return "SKIPPED";
    case DeliveryStatus::ABANDONED:
      return "ABANDONED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliveryStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
