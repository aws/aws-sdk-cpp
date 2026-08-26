/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class ToolClassification { NOT_SET, READ_ONLY, MUTATIVE, DESTRUCTIVE };

namespace ToolClassificationMapper {
AWS_DEVOPSAGENT_API ToolClassification GetToolClassificationForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForToolClassification(ToolClassification value);
}  // namespace ToolClassificationMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
