/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentDiscovery {
namespace Model {
enum class ProvenanceRelation { NOT_SET, publishedFrom, discoveredFrom, federatedFrom };

namespace ProvenanceRelationMapper {
AWS_AGENTDISCOVERY_API ProvenanceRelation GetProvenanceRelationForName(const Aws::String& name);

AWS_AGENTDISCOVERY_API Aws::String GetNameForProvenanceRelation(ProvenanceRelation value);
}  // namespace ProvenanceRelationMapper
}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
