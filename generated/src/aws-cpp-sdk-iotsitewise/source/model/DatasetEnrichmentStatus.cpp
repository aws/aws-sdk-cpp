/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DatasetEnrichmentStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DatasetEnrichmentStatusMapper {

static const int FULLY_ENRICHED_HASH = HashingUtils::HashString("FULLY_ENRICHED");
static const int PARTIALLY_ENRICHED_HASH = HashingUtils::HashString("PARTIALLY_ENRICHED");
static const int NOT_ENRICHED_HASH = HashingUtils::HashString("NOT_ENRICHED");

DatasetEnrichmentStatus GetDatasetEnrichmentStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULLY_ENRICHED_HASH) {
    return DatasetEnrichmentStatus::FULLY_ENRICHED;
  } else if (hashCode == PARTIALLY_ENRICHED_HASH) {
    return DatasetEnrichmentStatus::PARTIALLY_ENRICHED;
  } else if (hashCode == NOT_ENRICHED_HASH) {
    return DatasetEnrichmentStatus::NOT_ENRICHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetEnrichmentStatus>(hashCode);
  }

  return DatasetEnrichmentStatus::NOT_SET;
}

Aws::String GetNameForDatasetEnrichmentStatus(DatasetEnrichmentStatus enumValue) {
  switch (enumValue) {
    case DatasetEnrichmentStatus::NOT_SET:
      return {};
    case DatasetEnrichmentStatus::FULLY_ENRICHED:
      return "FULLY_ENRICHED";
    case DatasetEnrichmentStatus::PARTIALLY_ENRICHED:
      return "PARTIALLY_ENRICHED";
    case DatasetEnrichmentStatus::NOT_ENRICHED:
      return "NOT_ENRICHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetEnrichmentStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
