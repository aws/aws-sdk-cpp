/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/ProvenanceLink.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {

ProvenanceLink::ProvenanceLink(JsonView jsonValue) { *this = jsonValue; }

ProvenanceLink& ProvenanceLink::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("relation")) {
    m_relation = ProvenanceRelationMapper::GetProvenanceRelationForName(jsonValue.GetString("relation"));
    m_relationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvenanceLink::Jsonize() const {
  JsonValue payload;

  if (m_relationHasBeenSet) {
    payload.WithString("relation", ProvenanceRelationMapper::GetNameForProvenanceRelation(m_relation));
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
