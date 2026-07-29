/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/EnrichmentJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace EnrichmentJobStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");

EnrichmentJobStatus GetEnrichmentJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return EnrichmentJobStatus::PENDING;
  } else if (hashCode == RUNNING_HASH) {
    return EnrichmentJobStatus::RUNNING;
  } else if (hashCode == COMPLETED_HASH) {
    return EnrichmentJobStatus::COMPLETED;
  } else if (hashCode == FAILED_HASH) {
    return EnrichmentJobStatus::FAILED;
  } else if (hashCode == TIMED_OUT_HASH) {
    return EnrichmentJobStatus::TIMED_OUT;
  } else if (hashCode == CANCELLED_HASH) {
    return EnrichmentJobStatus::CANCELLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnrichmentJobStatus>(hashCode);
  }

  return EnrichmentJobStatus::NOT_SET;
}

Aws::String GetNameForEnrichmentJobStatus(EnrichmentJobStatus enumValue) {
  switch (enumValue) {
    case EnrichmentJobStatus::NOT_SET:
      return {};
    case EnrichmentJobStatus::PENDING:
      return "PENDING";
    case EnrichmentJobStatus::RUNNING:
      return "RUNNING";
    case EnrichmentJobStatus::COMPLETED:
      return "COMPLETED";
    case EnrichmentJobStatus::FAILED:
      return "FAILED";
    case EnrichmentJobStatus::TIMED_OUT:
      return "TIMED_OUT";
    case EnrichmentJobStatus::CANCELLED:
      return "CANCELLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnrichmentJobStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
