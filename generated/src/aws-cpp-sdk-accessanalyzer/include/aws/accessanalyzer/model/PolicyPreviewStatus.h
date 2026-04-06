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
enum class PolicyPreviewStatus { NOT_SET, ACTIVE, PENDING_CREATION, FAILED };

namespace PolicyPreviewStatusMapper {
AWS_ACCESSANALYZER_API PolicyPreviewStatus GetPolicyPreviewStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForPolicyPreviewStatus(PolicyPreviewStatus value);
}  // namespace PolicyPreviewStatusMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
