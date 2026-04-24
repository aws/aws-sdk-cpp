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
enum class Priority { NOT_SET, CRITICAL, HIGH, MEDIUM, LOW, MINIMAL };

namespace PriorityMapper {
AWS_DEVOPSAGENT_API Priority GetPriorityForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForPriority(Priority value);
}  // namespace PriorityMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
