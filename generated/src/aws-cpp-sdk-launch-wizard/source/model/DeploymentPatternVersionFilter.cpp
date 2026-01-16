/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

DeploymentPatternVersionFilter::DeploymentPatternVersionFilter(JsonView jsonValue) { *this = jsonValue; }

DeploymentPatternVersionFilter& DeploymentPatternVersionFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = DeploymentPatternVersionFilterKeyMapper::GetDeploymentPatternVersionFilterKeyForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentPatternVersionFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", DeploymentPatternVersionFilterKeyMapper::GetNameForDeploymentPatternVersionFilterKey(m_name));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
