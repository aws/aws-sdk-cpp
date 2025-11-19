/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/BatchGetAttributeOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

BatchGetAttributeOutput::BatchGetAttributeOutput(JsonView jsonValue) { *this = jsonValue; }

BatchGetAttributeOutput& BatchGetAttributeOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeIdentifier")) {
    m_attributeIdentifier = jsonValue.GetString("attributeIdentifier");
    m_attributeIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forms")) {
    Aws::Utils::Array<JsonView> formsJsonList = jsonValue.GetArray("forms");
    for (unsigned formsIndex = 0; formsIndex < formsJsonList.GetLength(); ++formsIndex) {
      m_forms.push_back(formsJsonList[formsIndex].AsObject());
    }
    m_formsHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetAttributeOutput::Jsonize() const {
  JsonValue payload;

  if (m_attributeIdentifierHasBeenSet) {
    payload.WithString("attributeIdentifier", m_attributeIdentifier);
  }

  if (m_formsHasBeenSet) {
    Aws::Utils::Array<JsonValue> formsJsonList(m_forms.size());
    for (unsigned formsIndex = 0; formsIndex < formsJsonList.GetLength(); ++formsIndex) {
      formsJsonList[formsIndex].AsObject(m_forms[formsIndex].Jsonize());
    }
    payload.WithArray("forms", std::move(formsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
