/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RecommendationResultConfigurationBundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

RecommendationResultConfigurationBundle::RecommendationResultConfigurationBundle(JsonView jsonValue) { *this = jsonValue; }

RecommendationResultConfigurationBundle& RecommendationResultConfigurationBundle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bundleArn")) {
    m_bundleArn = jsonValue.GetString("bundleArn");
    m_bundleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationResultConfigurationBundle::Jsonize() const {
  JsonValue payload;

  if (m_bundleArnHasBeenSet) {
    payload.WithString("bundleArn", m_bundleArn);
  }

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
