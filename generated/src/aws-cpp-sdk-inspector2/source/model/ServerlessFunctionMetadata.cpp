/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ServerlessFunctionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ServerlessFunctionMetadata::ServerlessFunctionMetadata(JsonView jsonValue) { *this = jsonValue; }

ServerlessFunctionMetadata& ServerlessFunctionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serverlessFunctionName")) {
    m_serverlessFunctionName = jsonValue.GetString("serverlessFunctionName");
    m_serverlessFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtime")) {
    m_runtime = jsonValue.GetString("runtime");
    m_runtimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("functionTags")) {
    Aws::Map<Aws::String, JsonView> functionTagsJsonMap = jsonValue.GetObject("functionTags").GetAllObjects();
    for (auto& functionTagsItem : functionTagsJsonMap) {
      m_functionTags[functionTagsItem.first] = functionTagsItem.second.AsString();
    }
    m_functionTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerlessFunctionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serverlessFunctionNameHasBeenSet) {
    payload.WithString("serverlessFunctionName", m_serverlessFunctionName);
  }

  if (m_runtimeHasBeenSet) {
    payload.WithString("runtime", m_runtime);
  }

  if (m_functionTagsHasBeenSet) {
    JsonValue functionTagsJsonMap;
    for (auto& functionTagsItem : m_functionTags) {
      functionTagsJsonMap.WithString(functionTagsItem.first, functionTagsItem.second);
    }
    payload.WithObject("functionTags", std::move(functionTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
