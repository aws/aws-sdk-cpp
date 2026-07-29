/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/EnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace EnrichmentStatusMapper {

static const int ENRICHED_HASH = HashingUtils::HashString("ENRICHED");
static const int NOT_ENRICHED_HASH = HashingUtils::HashString("NOT_ENRICHED");

EnrichmentStatus GetEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENRICHED_HASH) {
    return EnrichmentStatus::ENRICHED;
  } else if (hashCode == NOT_ENRICHED_HASH) {
    return EnrichmentStatus::NOT_ENRICHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnrichmentStatus>(hashCode);
  }

  return EnrichmentStatus::NOT_SET;
}

Aws::String GetNameForEnrichmentStatus(EnrichmentStatus enumValue) {
  switch (enumValue) {
    case EnrichmentStatus::NOT_SET:
      return {};
    case EnrichmentStatus::ENRICHED:
      return "ENRICHED";
    case EnrichmentStatus::NOT_ENRICHED:
      return "NOT_ENRICHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnrichmentStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
