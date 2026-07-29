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
enum class ExportDataType { NOT_SET, VIDEO, TELEMETRY, ANNOTATION };

namespace ExportDataTypeMapper {
AWS_IOTSITEWISE_API ExportDataType GetExportDataTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForExportDataType(ExportDataType value);
}  // namespace ExportDataTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
