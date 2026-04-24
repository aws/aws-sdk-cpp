/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/RestConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

RestConfiguration::RestConfiguration(JsonView jsonValue) { *this = jsonValue; }

RestConfiguration& RestConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GlobalSourceConfiguration")) {
    m_globalSourceConfiguration = jsonValue.GetObject("GlobalSourceConfiguration");
    m_globalSourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationEndpointConfiguration")) {
    m_validationEndpointConfiguration = jsonValue.GetObject("ValidationEndpointConfiguration");
    m_validationEndpointConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityConfigurations")) {
    Aws::Map<Aws::String, JsonView> entityConfigurationsJsonMap = jsonValue.GetObject("EntityConfigurations").GetAllObjects();
    for (auto& entityConfigurationsItem : entityConfigurationsJsonMap) {
      m_entityConfigurations[entityConfigurationsItem.first] = entityConfigurationsItem.second.AsObject();
    }
    m_entityConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue RestConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_globalSourceConfigurationHasBeenSet) {
    payload.WithObject("GlobalSourceConfiguration", m_globalSourceConfiguration.Jsonize());
  }

  if (m_validationEndpointConfigurationHasBeenSet) {
    payload.WithObject("ValidationEndpointConfiguration", m_validationEndpointConfiguration.Jsonize());
  }

  if (m_entityConfigurationsHasBeenSet) {
    JsonValue entityConfigurationsJsonMap;
    for (auto& entityConfigurationsItem : m_entityConfigurations) {
      entityConfigurationsJsonMap.WithObject(entityConfigurationsItem.first, entityConfigurationsItem.second.Jsonize());
    }
    payload.WithObject("EntityConfigurations", std::move(entityConfigurationsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
