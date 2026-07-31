/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CroppingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

CroppingConfig::CroppingConfig(JsonView jsonValue) { *this = jsonValue; }

CroppingConfig& CroppingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateGroups")) {
    Aws::Utils::Array<JsonView> templateGroupsJsonList = jsonValue.GetArray("templateGroups");
    for (unsigned templateGroupsIndex = 0; templateGroupsIndex < templateGroupsJsonList.GetLength(); ++templateGroupsIndex) {
      m_templateGroups.push_back(templateGroupsJsonList[templateGroupsIndex].AsObject());
    }
    m_templateGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue CroppingConfig::Jsonize() const {
  JsonValue payload;

  if (m_templateGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> templateGroupsJsonList(m_templateGroups.size());
    for (unsigned templateGroupsIndex = 0; templateGroupsIndex < templateGroupsJsonList.GetLength(); ++templateGroupsIndex) {
      templateGroupsJsonList[templateGroupsIndex].AsObject(m_templateGroups[templateGroupsIndex].Jsonize());
    }
    payload.WithArray("templateGroups", std::move(templateGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
