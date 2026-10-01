/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateTextParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

UpdateTextParameters::UpdateTextParameters(JsonView jsonValue) { *this = jsonValue; }

UpdateTextParameters& UpdateTextParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inlineTemplateBody")) {
    m_inlineTemplateBody = jsonValue.GetString("inlineTemplateBody");
    m_inlineTemplateBodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationCountryParameters")) {
    Aws::Map<Aws::String, JsonView> destinationCountryParametersJsonMap =
        jsonValue.GetObject("destinationCountryParameters").GetAllObjects();
    for (auto& destinationCountryParametersItem : destinationCountryParametersJsonMap) {
      m_destinationCountryParameters[destinationCountryParametersItem.first] = destinationCountryParametersItem.second.AsString();
    }
    m_destinationCountryParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTextParameters::Jsonize() const {
  JsonValue payload;

  if (m_inlineTemplateBodyHasBeenSet) {
    payload.WithString("inlineTemplateBody", m_inlineTemplateBody);
  }

  if (m_destinationCountryParametersHasBeenSet) {
    JsonValue destinationCountryParametersJsonMap;
    for (auto& destinationCountryParametersItem : m_destinationCountryParameters) {
      destinationCountryParametersJsonMap.WithString(destinationCountryParametersItem.first, destinationCountryParametersItem.second);
    }
    payload.WithObject("destinationCountryParameters", std::move(destinationCountryParametersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
