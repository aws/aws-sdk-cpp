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
enum class DatasetExportJobStatus { NOT_SET, SUBMITTED, RUNNING, COMPLETED, COMPLETED_WITH_ERRORS, FAILED };

namespace DatasetExportJobStatusMapper {
AWS_IOTSITEWISE_API DatasetExportJobStatus GetDatasetExportJobStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetExportJobStatus(DatasetExportJobStatus value);
}  // namespace DatasetExportJobStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
