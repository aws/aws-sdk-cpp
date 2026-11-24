/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class ProjectStatus { NOT_SET, active, archived };

namespace ProjectStatusMapper {
AWS_BEDROCK_API ProjectStatus GetProjectStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForProjectStatus(ProjectStatus value);
}  // namespace ProjectStatusMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
