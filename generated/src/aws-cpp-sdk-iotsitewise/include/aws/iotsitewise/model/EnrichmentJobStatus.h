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
enum class EnrichmentJobStatus { NOT_SET, PENDING, RUNNING, COMPLETED, FAILED, TIMED_OUT, CANCELLED };

namespace EnrichmentJobStatusMapper {
AWS_IOTSITEWISE_API EnrichmentJobStatus GetEnrichmentJobStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForEnrichmentJobStatus(EnrichmentJobStatus value);
}  // namespace EnrichmentJobStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
