/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {

ControlFilter::ControlFilter(JsonView jsonValue) { *this = jsonValue; }

ControlFilter& ControlFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Implementations")) {
    m_implementations = jsonValue.GetObject("Implementations");
    m_implementationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GovernedProviders")) {
    Aws::Utils::Array<JsonView> governedProvidersJsonList = jsonValue.GetArray("GovernedProviders");
    for (unsigned governedProvidersIndex = 0; governedProvidersIndex < governedProvidersJsonList.GetLength(); ++governedProvidersIndex) {
      m_governedProviders.push_back(governedProvidersJsonList[governedProvidersIndex].AsString());
    }
    m_governedProvidersHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlFilter::Jsonize() const {
  JsonValue payload;

  if (m_implementationsHasBeenSet) {
    payload.WithObject("Implementations", m_implementations.Jsonize());
  }

  if (m_governedProvidersHasBeenSet) {
    Aws::Utils::Array<JsonValue> governedProvidersJsonList(m_governedProviders.size());
    for (unsigned governedProvidersIndex = 0; governedProvidersIndex < governedProvidersJsonList.GetLength(); ++governedProvidersIndex) {
      governedProvidersJsonList[governedProvidersIndex].AsString(m_governedProviders[governedProvidersIndex]);
    }
    payload.WithArray("GovernedProviders", std::move(governedProvidersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
