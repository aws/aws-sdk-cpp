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
enum class ExportSetting { NOT_SET, ENABLED, DISABLED };

namespace ExportSettingMapper {
AWS_GLUE_API ExportSetting GetExportSettingForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForExportSetting(ExportSetting value);
}  // namespace ExportSettingMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
