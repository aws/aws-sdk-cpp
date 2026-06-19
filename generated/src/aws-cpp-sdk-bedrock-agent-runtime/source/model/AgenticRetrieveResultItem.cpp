/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveResultItem::AgenticRetrieveResultItem(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveResultItem& AgenticRetrieveResultItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for (auto& metadataItem : metadataJsonMap) {
      m_metadata[metadataItem.first] = metadataItem.second.AsObject();
    }
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceRetriever")) {
    m_sourceRetriever = jsonValue.GetObject("sourceRetriever");
    m_sourceRetrieverHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveResultItem::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithObject(metadataItem.first, metadataItem.second.View());
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_sourceRetrieverHasBeenSet) {
    payload.WithObject("sourceRetriever", m_sourceRetriever.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
