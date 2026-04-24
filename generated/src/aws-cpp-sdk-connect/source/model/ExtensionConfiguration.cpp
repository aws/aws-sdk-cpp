/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ExtensionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ExtensionConfiguration::ExtensionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExtensionConfiguration& ExtensionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllowedExtensions")) {
    Aws::Utils::Array<JsonView> allowedExtensionsJsonList = jsonValue.GetArray("AllowedExtensions");
    for (unsigned allowedExtensionsIndex = 0; allowedExtensionsIndex < allowedExtensionsJsonList.GetLength(); ++allowedExtensionsIndex) {
      m_allowedExtensions.push_back(allowedExtensionsJsonList[allowedExtensionsIndex].AsObject());
    }
    m_allowedExtensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_allowedExtensionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedExtensionsJsonList(m_allowedExtensions.size());
    for (unsigned allowedExtensionsIndex = 0; allowedExtensionsIndex < allowedExtensionsJsonList.GetLength(); ++allowedExtensionsIndex) {
      allowedExtensionsJsonList[allowedExtensionsIndex].AsObject(m_allowedExtensions[allowedExtensionsIndex].Jsonize());
    }
    payload.WithArray("AllowedExtensions", std::move(allowedExtensionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
