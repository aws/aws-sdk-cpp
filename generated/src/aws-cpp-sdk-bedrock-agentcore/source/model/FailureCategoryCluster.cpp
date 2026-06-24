/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FailureCategoryCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

FailureCategoryCluster::FailureCategoryCluster(JsonView jsonValue) { *this = jsonValue; }

FailureCategoryCluster& FailureCategoryCluster::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("subCategories")) {
    Aws::Utils::Array<JsonView> subCategoriesJsonList = jsonValue.GetArray("subCategories");
    for (unsigned subCategoriesIndex = 0; subCategoriesIndex < subCategoriesJsonList.GetLength(); ++subCategoriesIndex) {
      m_subCategories.push_back(subCategoriesJsonList[subCategoriesIndex].AsObject());
    }
    m_subCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureCategoryCluster::Jsonize() const {
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

  if (m_subCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> subCategoriesJsonList(m_subCategories.size());
    for (unsigned subCategoriesIndex = 0; subCategoriesIndex < subCategoriesJsonList.GetLength(); ++subCategoriesIndex) {
      subCategoriesJsonList[subCategoriesIndex].AsObject(m_subCategories[subCategoriesIndex].Jsonize());
    }
    payload.WithArray("subCategories", std::move(subCategoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
