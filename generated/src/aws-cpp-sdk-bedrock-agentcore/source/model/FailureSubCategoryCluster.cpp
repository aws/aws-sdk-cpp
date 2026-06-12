/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FailureSubCategoryCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

FailureSubCategoryCluster::FailureSubCategoryCluster(JsonView jsonValue) { *this = jsonValue; }

FailureSubCategoryCluster& FailureSubCategoryCluster::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("rootCauses")) {
    Aws::Utils::Array<JsonView> rootCausesJsonList = jsonValue.GetArray("rootCauses");
    for (unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex) {
      m_rootCauses.push_back(rootCausesJsonList[rootCausesIndex].AsObject());
    }
    m_rootCausesHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureSubCategoryCluster::Jsonize() const {
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

  if (m_rootCausesHasBeenSet) {
    Aws::Utils::Array<JsonValue> rootCausesJsonList(m_rootCauses.size());
    for (unsigned rootCausesIndex = 0; rootCausesIndex < rootCausesJsonList.GetLength(); ++rootCausesIndex) {
      rootCausesJsonList[rootCausesIndex].AsObject(m_rootCauses[rootCausesIndex].Jsonize());
    }
    payload.WithArray("rootCauses", std::move(rootCausesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
