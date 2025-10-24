/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/Inspector_EXPORTS.h>

namespace Aws {
namespace Inspector {
namespace Model {
enum class ReportFileFormat { NOT_SET, HTML, PDF };

namespace ReportFileFormatMapper {
AWS_INSPECTOR_API ReportFileFormat GetReportFileFormatForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForReportFileFormat(ReportFileFormat value);
}  // namespace ReportFileFormatMapper
}  // namespace Model
}  // namespace Inspector
}  // namespace Aws
