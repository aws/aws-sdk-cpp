/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/ProvenanceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

ProvenanceSummary::ProvenanceSummary(JsonView jsonValue) { *this = jsonValue; }

ProvenanceSummary& ProvenanceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("relation")) {
    m_relation = ProvenanceRelationMapper::GetProvenanceRelationForName(jsonValue.GetString("relation"));
    m_relationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvenanceSummary::Jsonize() const {
  JsonValue payload;

  if (m_relationHasBeenSet) {
    payload.WithString("relation", ProvenanceRelationMapper::GetNameForProvenanceRelation(m_relation));
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
