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
enum class DatasetExportJobFilter { NOT_SET, ALL, SUBMITTED, RUNNING, COMPLETED, COMPLETED_WITH_ERRORS, FAILED };

namespace DatasetExportJobFilterMapper {
AWS_IOTSITEWISE_API DatasetExportJobFilter GetDatasetExportJobFilterForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetExportJobFilter(DatasetExportJobFilter value);
}  // namespace DatasetExportJobFilterMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
