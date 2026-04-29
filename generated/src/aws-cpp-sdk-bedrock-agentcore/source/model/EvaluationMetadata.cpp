/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EvaluationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

EvaluationMetadata::EvaluationMetadata(JsonView jsonValue) { *this = jsonValue; }

EvaluationMetadata& EvaluationMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionMetadata")) {
    Aws::Utils::Array<JsonView> sessionMetadataJsonList = jsonValue.GetArray("sessionMetadata");
    for (unsigned sessionMetadataIndex = 0; sessionMetadataIndex < sessionMetadataJsonList.GetLength(); ++sessionMetadataIndex) {
      m_sessionMetadata.push_back(sessionMetadataJsonList[sessionMetadataIndex].AsObject());
    }
    m_sessionMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationMetadata::Jsonize() const {
  JsonValue payload;

  if (m_sessionMetadataHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionMetadataJsonList(m_sessionMetadata.size());
    for (unsigned sessionMetadataIndex = 0; sessionMetadataIndex < sessionMetadataJsonList.GetLength(); ++sessionMetadataIndex) {
      sessionMetadataJsonList[sessionMetadataIndex].AsObject(m_sessionMetadata[sessionMetadataIndex].Jsonize());
    }
    payload.WithArray("sessionMetadata", std::move(sessionMetadataJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
