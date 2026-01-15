/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ProtectedJobParameters::ProtectedJobParameters(JsonView jsonValue) { *this = jsonValue; }

ProtectedJobParameters& ProtectedJobParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("analysisTemplateArn")) {
    m_analysisTemplateArn = jsonValue.GetString("analysisTemplateArn");
    m_analysisTemplateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parameters")) {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for (auto& parametersItem : parametersJsonMap) {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedJobParameters::Jsonize() const {
  JsonValue payload;

  if (m_analysisTemplateArnHasBeenSet) {
    payload.WithString("analysisTemplateArn", m_analysisTemplateArn);
  }

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
