/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Model {
enum class ReportStatus { NOT_SET, PENDING, RUNNING, COMPLETED, SKIPPED, ERRORED };

namespace ReportStatusMapper {
AWS_DEVICEFARM_API ReportStatus GetReportStatusForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForReportStatus(ReportStatus value);
}  // namespace ReportStatusMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
