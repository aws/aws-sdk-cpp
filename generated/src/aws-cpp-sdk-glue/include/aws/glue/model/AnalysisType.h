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
enum class AnalysisType { NOT_SET, AUTO_UPGRADE };

namespace AnalysisTypeMapper {
AWS_GLUE_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAnalysisType(AnalysisType value);
}  // namespace AnalysisTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
