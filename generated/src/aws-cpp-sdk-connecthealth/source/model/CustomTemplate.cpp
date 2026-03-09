/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/CustomTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

CustomTemplate::CustomTemplate(JsonView jsonValue) { *this = jsonValue; }

CustomTemplate& CustomTemplate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateType")) {
    m_templateType = CustomTemplateBaseMapper::GetCustomTemplateBaseForName(jsonValue.GetString("templateType"));
    m_templateTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateInstructions")) {
    Aws::Utils::Array<JsonView> templateInstructionsJsonList = jsonValue.GetArray("templateInstructions");
    for (unsigned templateInstructionsIndex = 0; templateInstructionsIndex < templateInstructionsJsonList.GetLength();
         ++templateInstructionsIndex) {
      m_templateInstructions.push_back(templateInstructionsJsonList[templateInstructionsIndex].AsObject());
    }
    m_templateInstructionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomTemplate::Jsonize() const {
  JsonValue payload;

  if (m_templateTypeHasBeenSet) {
    payload.WithString("templateType", CustomTemplateBaseMapper::GetNameForCustomTemplateBase(m_templateType));
  }

  if (m_templateInstructionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> templateInstructionsJsonList(m_templateInstructions.size());
    for (unsigned templateInstructionsIndex = 0; templateInstructionsIndex < templateInstructionsJsonList.GetLength();
         ++templateInstructionsIndex) {
      templateInstructionsJsonList[templateInstructionsIndex].AsObject(m_templateInstructions[templateInstructionsIndex].Jsonize());
    }
    payload.WithArray("templateInstructions", std::move(templateInstructionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
