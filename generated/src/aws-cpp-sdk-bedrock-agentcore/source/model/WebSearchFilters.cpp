/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/WebSearchFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

WebSearchFilters::WebSearchFilters(JsonView jsonValue) { *this = jsonValue; }

WebSearchFilters& WebSearchFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainFilter")) {
    m_domainFilter = jsonValue.GetObject("domainFilter");
    m_domainFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishedDateFilter")) {
    m_publishedDateFilter = jsonValue.GetObject("publishedDateFilter");
    m_publishedDateFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue WebSearchFilters::Jsonize() const {
  JsonValue payload;

  if (m_domainFilterHasBeenSet) {
    payload.WithObject("domainFilter", m_domainFilter.Jsonize());
  }

  if (m_publishedDateFilterHasBeenSet) {
    payload.WithObject("publishedDateFilter", m_publishedDateFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
