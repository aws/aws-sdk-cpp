/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

ModelConfiguration::ModelConfiguration(JsonView jsonValue) { *this = jsonValue; }

ModelConfiguration& ModelConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inferenceConfig")) {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");
    m_inferenceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalModelRequestFields")) {
    Aws::Map<Aws::String, JsonView> additionalModelRequestFieldsJsonMap =
        jsonValue.GetObject("additionalModelRequestFields").GetAllObjects();
    for (auto& additionalModelRequestFieldsItem : additionalModelRequestFieldsJsonMap) {
      m_additionalModelRequestFields[additionalModelRequestFieldsItem.first] = additionalModelRequestFieldsItem.second.AsObject();
    }
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_inferenceConfigHasBeenSet) {
    payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());
  }

  if (m_additionalModelRequestFieldsHasBeenSet) {
    JsonValue additionalModelRequestFieldsJsonMap;
    for (auto& additionalModelRequestFieldsItem : m_additionalModelRequestFields) {
      additionalModelRequestFieldsJsonMap.WithObject(additionalModelRequestFieldsItem.first,
                                                     additionalModelRequestFieldsItem.second.View());
    }
    payload.WithObject("additionalModelRequestFields", std::move(additionalModelRequestFieldsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
