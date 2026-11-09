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
enum class GovernanceMode { NOT_SET, IAM_ONLY, LAKE_FORMATION };

namespace GovernanceModeMapper {
AWS_GLUE_API GovernanceMode GetGovernanceModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForGovernanceMode(GovernanceMode value);
}  // namespace GovernanceModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
