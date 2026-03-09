/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyGenerationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PolicyGenerationDetails::PolicyGenerationDetails(JsonView jsonValue) { *this = jsonValue; }

PolicyGenerationDetails& PolicyGenerationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyGenerationId")) {
    m_policyGenerationId = jsonValue.GetString("policyGenerationId");
    m_policyGenerationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyGenerationAssetId")) {
    m_policyGenerationAssetId = jsonValue.GetString("policyGenerationAssetId");
    m_policyGenerationAssetIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyGenerationDetails::Jsonize() const {
  JsonValue payload;

  if (m_policyGenerationIdHasBeenSet) {
    payload.WithString("policyGenerationId", m_policyGenerationId);
  }

  if (m_policyGenerationAssetIdHasBeenSet) {
    payload.WithString("policyGenerationAssetId", m_policyGenerationAssetId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
