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
enum class ProvenanceRelation { NOT_SET, DETECTED_FROM };

namespace ProvenanceRelationMapper {
AWS_AGENTREGISTRYCONTROL_API ProvenanceRelation GetProvenanceRelationForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForProvenanceRelation(ProvenanceRelation value);
}  // namespace ProvenanceRelationMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
