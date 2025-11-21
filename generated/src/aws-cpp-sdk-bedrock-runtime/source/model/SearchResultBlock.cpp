/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/SearchResultBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

SearchResultBlock::SearchResultBlock(JsonView jsonValue) { *this = jsonValue; }

SearchResultBlock& SearchResultBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("citations")) {
    m_citations = jsonValue.GetObject("citations");
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchResultBlock::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("source", m_source);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_contentHasBeenSet) {
    Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
    for (unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex) {
      contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
    }
    payload.WithArray("content", std::move(contentJsonList));
  }

  if (m_citationsHasBeenSet) {
    payload.WithObject("citations", m_citations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
