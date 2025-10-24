/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class RuleScopeSelectionMode { NOT_SET, ALL, SPECIFIC };

namespace RuleScopeSelectionModeMapper {
AWS_DATAZONE_API RuleScopeSelectionMode GetRuleScopeSelectionModeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRuleScopeSelectionMode(RuleScopeSelectionMode value);
}  // namespace RuleScopeSelectionModeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
