/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/PropagateTags.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

PropagateTags::PropagateTags(JsonView jsonValue) { *this = jsonValue; }

PropagateTags& PropagateTags::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Mode")) {
    m_mode = PropagateTagsModeMapper::GetPropagateTagsModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExplicitTags")) {
    Aws::Map<Aws::String, JsonView> explicitTagsJsonMap = jsonValue.GetObject("ExplicitTags").GetAllObjects();
    for (auto& explicitTagsItem : explicitTagsJsonMap) {
      m_explicitTags[explicitTagsItem.first] = explicitTagsItem.second.AsString();
    }
    m_explicitTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue PropagateTags::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", PropagateTagsModeMapper::GetNameForPropagateTagsMode(m_mode));
  }

  if (m_explicitTagsHasBeenSet) {
    JsonValue explicitTagsJsonMap;
    for (auto& explicitTagsItem : m_explicitTags) {
      explicitTagsJsonMap.WithString(explicitTagsItem.first, explicitTagsItem.second);
    }
    payload.WithObject("ExplicitTags", std::move(explicitTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
