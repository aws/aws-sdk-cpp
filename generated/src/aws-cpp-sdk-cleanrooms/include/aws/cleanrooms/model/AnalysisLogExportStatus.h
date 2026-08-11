/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class AnalysisLogExportStatus { NOT_SET, IN_PROGRESS, SUCCESS, FAILED };

namespace AnalysisLogExportStatusMapper {
AWS_CLEANROOMS_API AnalysisLogExportStatus GetAnalysisLogExportStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisLogExportStatus(AnalysisLogExportStatus value);
}  // namespace AnalysisLogExportStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
