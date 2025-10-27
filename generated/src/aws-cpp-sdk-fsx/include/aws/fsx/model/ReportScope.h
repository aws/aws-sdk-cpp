/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class ReportScope { NOT_SET, FAILED_FILES_ONLY };

namespace ReportScopeMapper {
AWS_FSX_API ReportScope GetReportScopeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForReportScope(ReportScope value);
}  // namespace ReportScopeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
