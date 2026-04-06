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
enum class PolicyPreviewScope { NOT_SET, GLOBAL };

namespace PolicyPreviewScopeMapper {
AWS_ACCESSANALYZER_API PolicyPreviewScope GetPolicyPreviewScopeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForPolicyPreviewScope(PolicyPreviewScope value);
}  // namespace PolicyPreviewScopeMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
