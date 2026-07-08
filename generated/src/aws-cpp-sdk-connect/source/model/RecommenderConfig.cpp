/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecommenderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RecommenderConfig::RecommenderConfig(JsonView jsonValue) { *this = jsonValue; }

RecommenderConfig& RecommenderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderName")) {
    m_recommenderName = jsonValue.GetString("RecommenderName");
    m_recommenderNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Context")) {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("Context").GetAllObjects();
    for (auto& contextItem : contextJsonMap) {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderConfig::Jsonize() const {
  JsonValue payload;

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  if (m_recommenderNameHasBeenSet) {
    payload.WithString("RecommenderName", m_recommenderName);
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithString(contextItem.first, contextItem.second);
    }
    payload.WithObject("Context", std::move(contextJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
