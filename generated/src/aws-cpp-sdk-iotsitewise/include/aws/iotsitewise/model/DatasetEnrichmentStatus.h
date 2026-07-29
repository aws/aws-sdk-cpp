/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class DatasetEnrichmentStatus { NOT_SET, FULLY_ENRICHED, PARTIALLY_ENRICHED, NOT_ENRICHED };

namespace DatasetEnrichmentStatusMapper {
AWS_IOTSITEWISE_API DatasetEnrichmentStatus GetDatasetEnrichmentStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetEnrichmentStatus(DatasetEnrichmentStatus value);
}  // namespace DatasetEnrichmentStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
