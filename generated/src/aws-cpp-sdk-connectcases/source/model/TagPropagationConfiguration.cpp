/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TagPropagationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

TagPropagationConfiguration::TagPropagationConfiguration(JsonView jsonValue) { *this = jsonValue; }

TagPropagationConfiguration& TagPropagationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = TagPropagationResourceTypeMapper::GetTagPropagationResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tagMap")) {
    Aws::Map<Aws::String, JsonView> tagMapJsonMap = jsonValue.GetObject("tagMap").GetAllObjects();
    for (auto& tagMapItem : tagMapJsonMap) {
      m_tagMap[tagMapItem.first] = tagMapItem.second.AsString();
    }
    m_tagMapHasBeenSet = true;
  }
  return *this;
}

JsonValue TagPropagationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", TagPropagationResourceTypeMapper::GetNameForTagPropagationResourceType(m_resourceType));
  }

  if (m_tagMapHasBeenSet) {
    JsonValue tagMapJsonMap;
    for (auto& tagMapItem : m_tagMap) {
      tagMapJsonMap.WithString(tagMapItem.first, tagMapItem.second);
    }
    payload.WithObject("tagMap", std::move(tagMapJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
