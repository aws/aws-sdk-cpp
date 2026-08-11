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
enum class LogExportAnalysisType { NOT_SET, PROTECTED_QUERY };

namespace LogExportAnalysisTypeMapper {
AWS_CLEANROOMS_API LogExportAnalysisType GetLogExportAnalysisTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForLogExportAnalysisType(LogExportAnalysisType value);
}  // namespace LogExportAnalysisTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
