/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class RegistryRecordFilterName { NOT_SET, name, status, recordType };

namespace RegistryRecordFilterNameMapper {
AWS_AGENTREGISTRYCONTROL_API RegistryRecordFilterName GetRegistryRecordFilterNameForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForRegistryRecordFilterName(RegistryRecordFilterName value);
}  // namespace RegistryRecordFilterNameMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
