/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibraryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibraryConfiguration::DataAutomationLibraryConfiguration(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibraryConfiguration& DataAutomationLibraryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("libraries")) {
    Aws::Utils::Array<JsonView> librariesJsonList = jsonValue.GetArray("libraries");
    for (unsigned librariesIndex = 0; librariesIndex < librariesJsonList.GetLength(); ++librariesIndex) {
      m_libraries.push_back(librariesJsonList[librariesIndex].AsObject());
    }
    m_librariesHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibraryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_librariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> librariesJsonList(m_libraries.size());
    for (unsigned librariesIndex = 0; librariesIndex < librariesJsonList.GetLength(); ++librariesIndex) {
      librariesJsonList[librariesIndex].AsObject(m_libraries[librariesIndex].Jsonize());
    }
    payload.WithArray("libraries", std::move(librariesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
