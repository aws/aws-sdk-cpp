/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExecutionSummaryCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExecutionSummaryCluster::ExecutionSummaryCluster(JsonView jsonValue) { *this = jsonValue; }

ExecutionSummaryCluster& ExecutionSummaryCluster::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clusterId")) {
    m_clusterId = jsonValue.GetInteger("clusterId");
    m_clusterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessionCount")) {
    m_affectedSessionCount = jsonValue.GetInteger("affectedSessionCount");
    m_affectedSessionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("affectedSessions")) {
    Aws::Utils::Array<JsonView> affectedSessionsJsonList = jsonValue.GetArray("affectedSessions");
    for (unsigned affectedSessionsIndex = 0; affectedSessionsIndex < affectedSessionsJsonList.GetLength(); ++affectedSessionsIndex) {
      m_affectedSessions.push_back(affectedSessionsJsonList[affectedSessionsIndex].AsObject());
    }
    m_affectedSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionSummaryCluster::Jsonize() const {
  JsonValue payload;

  if (m_clusterIdHasBeenSet) {
    payload.WithInteger("clusterId", m_clusterId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_affectedSessionCountHasBeenSet) {
    payload.WithInteger("affectedSessionCount", m_affectedSessionCount);
  }

  if (m_affectedSessionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> affectedSessionsJsonList(m_affectedSessions.size());
    for (unsigned affectedSessionsIndex = 0; affectedSessionsIndex < affectedSessionsJsonList.GetLength(); ++affectedSessionsIndex) {
      affectedSessionsJsonList[affectedSessionsIndex].AsObject(m_affectedSessions[affectedSessionsIndex].Jsonize());
    }
    payload.WithArray("affectedSessions", std::move(affectedSessionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
