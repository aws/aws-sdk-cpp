/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ExportStatus { NOT_SET, ENABLING, ENABLED, DISABLING, DISABLED, FAILED };

namespace ExportStatusMapper {
AWS_GLUE_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForExportStatus(ExportStatus value);
}  // namespace ExportStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
