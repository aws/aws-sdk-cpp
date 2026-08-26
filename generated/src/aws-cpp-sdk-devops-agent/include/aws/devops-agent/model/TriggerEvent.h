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
enum class TriggerEvent { NOT_SET, PULL_REQUEST_READY_FOR_REVIEW, PULL_REQUEST_DRAFT };

namespace TriggerEventMapper {
AWS_DEVOPSAGENT_API TriggerEvent GetTriggerEventForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForTriggerEvent(TriggerEvent value);
}  // namespace TriggerEventMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
