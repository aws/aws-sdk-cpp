/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ConnectionPropertiesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ConnectionPropertiesConfiguration::ConnectionPropertiesConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectionPropertiesConfiguration& ConnectionPropertiesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetObject("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalRequestParameters")) {
    Aws::Utils::Array<JsonView> additionalRequestParametersJsonList = jsonValue.GetArray("AdditionalRequestParameters");
    for (unsigned additionalRequestParametersIndex = 0; additionalRequestParametersIndex < additionalRequestParametersJsonList.GetLength();
         ++additionalRequestParametersIndex) {
      m_additionalRequestParameters.push_back(additionalRequestParametersJsonList[additionalRequestParametersIndex].AsObject());
    }
    m_additionalRequestParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionPropertiesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_urlHasBeenSet) {
    payload.WithObject("Url", m_url.Jsonize());
  }

  if (m_additionalRequestParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalRequestParametersJsonList(m_additionalRequestParameters.size());
    for (unsigned additionalRequestParametersIndex = 0; additionalRequestParametersIndex < additionalRequestParametersJsonList.GetLength();
         ++additionalRequestParametersIndex) {
      additionalRequestParametersJsonList[additionalRequestParametersIndex].AsObject(
          m_additionalRequestParameters[additionalRequestParametersIndex].Jsonize());
    }
    payload.WithArray("AdditionalRequestParameters", std::move(additionalRequestParametersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
