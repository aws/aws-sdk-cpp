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
enum class MonitorAccountType { NOT_SET, monitor };

namespace MonitorAccountTypeMapper {
AWS_DEVOPSAGENT_API MonitorAccountType GetMonitorAccountTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForMonitorAccountType(MonitorAccountType value);
}  // namespace MonitorAccountTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
