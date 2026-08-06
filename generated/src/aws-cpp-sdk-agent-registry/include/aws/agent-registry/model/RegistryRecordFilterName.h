/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistry {
namespace Model {
enum class RegistryRecordFilterName { NOT_SET, recordType, descriptorType };

namespace RegistryRecordFilterNameMapper {
AWS_AGENTREGISTRY_API RegistryRecordFilterName GetRegistryRecordFilterNameForName(const Aws::String& name);

AWS_AGENTREGISTRY_API Aws::String GetNameForRegistryRecordFilterName(RegistryRecordFilterName value);
}  // namespace RegistryRecordFilterNameMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
