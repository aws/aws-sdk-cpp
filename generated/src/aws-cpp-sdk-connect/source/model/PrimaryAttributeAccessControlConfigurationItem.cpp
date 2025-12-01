/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PrimaryAttributeAccessControlConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PrimaryAttributeAccessControlConfigurationItem::PrimaryAttributeAccessControlConfigurationItem(JsonView jsonValue) { *this = jsonValue; }

PrimaryAttributeAccessControlConfigurationItem& PrimaryAttributeAccessControlConfigurationItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryAttributeValues")) {
    Aws::Utils::Array<JsonView> primaryAttributeValuesJsonList = jsonValue.GetArray("PrimaryAttributeValues");
    for (unsigned primaryAttributeValuesIndex = 0; primaryAttributeValuesIndex < primaryAttributeValuesJsonList.GetLength();
         ++primaryAttributeValuesIndex) {
      m_primaryAttributeValues.push_back(primaryAttributeValuesJsonList[primaryAttributeValuesIndex].AsObject());
    }
    m_primaryAttributeValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue PrimaryAttributeAccessControlConfigurationItem::Jsonize() const {
  JsonValue payload;

  if (m_primaryAttributeValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryAttributeValuesJsonList(m_primaryAttributeValues.size());
    for (unsigned primaryAttributeValuesIndex = 0; primaryAttributeValuesIndex < primaryAttributeValuesJsonList.GetLength();
         ++primaryAttributeValuesIndex) {
      primaryAttributeValuesJsonList[primaryAttributeValuesIndex].AsObject(m_primaryAttributeValues[primaryAttributeValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryAttributeValues", std::move(primaryAttributeValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
