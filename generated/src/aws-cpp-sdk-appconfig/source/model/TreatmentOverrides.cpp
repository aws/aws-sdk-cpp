/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/TreatmentOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

TreatmentOverrides::TreatmentOverrides(JsonView jsonValue) { *this = jsonValue; }

TreatmentOverrides& TreatmentOverrides::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Inline")) {
    Aws::Map<Aws::String, JsonView> inlineJsonMap = jsonValue.GetObject("Inline").GetAllObjects();
    for (auto& inlineItem : inlineJsonMap) {
      m_inline[inlineItem.first] = inlineItem.second.AsString();
    }
    m_inlineHasBeenSet = true;
  }
  return *this;
}

JsonValue TreatmentOverrides::Jsonize() const {
  JsonValue payload;

  if (m_inlineHasBeenSet) {
    JsonValue inlineJsonMap;
    for (auto& inlineItem : m_inline) {
      inlineJsonMap.WithString(inlineItem.first, inlineItem.second);
    }
    payload.WithObject("Inline", std::move(inlineJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
