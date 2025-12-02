/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyGenerationAsset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PolicyGenerationAsset::PolicyGenerationAsset(JsonView jsonValue) { *this = jsonValue; }

PolicyGenerationAsset& PolicyGenerationAsset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyGenerationAssetId")) {
    m_policyGenerationAssetId = jsonValue.GetString("policyGenerationAssetId");
    m_policyGenerationAssetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("definition")) {
    m_definition = jsonValue.GetObject("definition");
    m_definitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rawTextFragment")) {
    m_rawTextFragment = jsonValue.GetString("rawTextFragment");
    m_rawTextFragmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("findings")) {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
    }
    m_findingsHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyGenerationAsset::Jsonize() const {
  JsonValue payload;

  if (m_policyGenerationAssetIdHasBeenSet) {
    payload.WithString("policyGenerationAssetId", m_policyGenerationAssetId);
  }

  if (m_definitionHasBeenSet) {
    payload.WithObject("definition", m_definition.Jsonize());
  }

  if (m_rawTextFragmentHasBeenSet) {
    payload.WithString("rawTextFragment", m_rawTextFragment);
  }

  if (m_findingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> findingsJsonList(m_findings.size());
    for (unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex) {
      findingsJsonList[findingsIndex].AsObject(m_findings[findingsIndex].Jsonize());
    }
    payload.WithArray("findings", std::move(findingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
