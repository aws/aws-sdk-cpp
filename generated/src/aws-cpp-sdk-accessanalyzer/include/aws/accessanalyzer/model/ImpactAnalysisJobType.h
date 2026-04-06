/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
enum class ImpactAnalysisJobType { NOT_SET, SCP };

namespace ImpactAnalysisJobTypeMapper {
AWS_ACCESSANALYZER_API ImpactAnalysisJobType GetImpactAnalysisJobTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForImpactAnalysisJobType(ImpactAnalysisJobType value);
}  // namespace ImpactAnalysisJobTypeMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
