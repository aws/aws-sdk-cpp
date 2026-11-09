/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/WebSearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

WebSearchResult::WebSearchResult(JsonView jsonValue) { *this = jsonValue; }

WebSearchResult& WebSearchResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishedAt")) {
    m_publishedAt = jsonValue.GetString("publishedAt");
    m_publishedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue WebSearchResult::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_publishedAtHasBeenSet) {
    payload.WithString("publishedAt", m_publishedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
