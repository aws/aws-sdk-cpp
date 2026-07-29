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
enum class EnrichmentStatus { NOT_SET, ENRICHED, NOT_ENRICHED };

namespace EnrichmentStatusMapper {
AWS_IOTSITEWISE_API EnrichmentStatus GetEnrichmentStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForEnrichmentStatus(EnrichmentStatus value);
}  // namespace EnrichmentStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
