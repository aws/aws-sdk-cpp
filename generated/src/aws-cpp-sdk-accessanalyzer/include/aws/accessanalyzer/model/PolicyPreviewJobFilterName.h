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
enum class PolicyPreviewJobFilterName { NOT_SET, jobStatus, targetId };

namespace PolicyPreviewJobFilterNameMapper {
AWS_ACCESSANALYZER_API PolicyPreviewJobFilterName GetPolicyPreviewJobFilterNameForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForPolicyPreviewJobFilterName(PolicyPreviewJobFilterName value);
}  // namespace PolicyPreviewJobFilterNameMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
