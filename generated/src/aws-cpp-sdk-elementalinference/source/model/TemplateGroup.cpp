/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/TemplateGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

TemplateGroup::TemplateGroup(JsonView jsonValue) { *this = jsonValue; }

TemplateGroup& TemplateGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateUris")) {
    Aws::Utils::Array<JsonView> templateUrisJsonList = jsonValue.GetArray("templateUris");
    for (unsigned templateUrisIndex = 0; templateUrisIndex < templateUrisJsonList.GetLength(); ++templateUrisIndex) {
      m_templateUris.push_back(templateUrisJsonList[templateUrisIndex].AsString());
    }
    m_templateUrisHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateGroup::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_templateUrisHasBeenSet) {
    Aws::Utils::Array<JsonValue> templateUrisJsonList(m_templateUris.size());
    for (unsigned templateUrisIndex = 0; templateUrisIndex < templateUrisJsonList.GetLength(); ++templateUrisIndex) {
      templateUrisJsonList[templateUrisIndex].AsString(m_templateUris[templateUrisIndex]);
    }
    payload.WithArray("templateUris", std::move(templateUrisJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
