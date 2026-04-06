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
enum class ImpactAnalysisJobStatus { NOT_SET, SUBMITTED, IN_PROGRESS, COMPLETED, FAILED, CANCELED };

namespace ImpactAnalysisJobStatusMapper {
AWS_ACCESSANALYZER_API ImpactAnalysisJobStatus GetImpactAnalysisJobStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForImpactAnalysisJobStatus(ImpactAnalysisJobStatus value);
}  // namespace ImpactAnalysisJobStatusMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
