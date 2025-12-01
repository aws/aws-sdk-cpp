/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateDataTablePrimaryValuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDataTablePrimaryValuesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_primaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryValuesJsonList(m_primaryValues.size());
    for (unsigned primaryValuesIndex = 0; primaryValuesIndex < primaryValuesJsonList.GetLength(); ++primaryValuesIndex) {
      primaryValuesJsonList[primaryValuesIndex].AsObject(m_primaryValues[primaryValuesIndex].Jsonize());
    }
    payload.WithArray("PrimaryValues", std::move(primaryValuesJsonList));
  }

  if (m_newPrimaryValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> newPrimaryValuesJsonList(m_newPrimaryValues.size());
    for (unsigned newPrimaryValuesIndex = 0; newPrimaryValuesIndex < newPrimaryValuesJsonList.GetLength(); ++newPrimaryValuesIndex) {
      newPrimaryValuesJsonList[newPrimaryValuesIndex].AsObject(m_newPrimaryValues[newPrimaryValuesIndex].Jsonize());
    }
    payload.WithArray("NewPrimaryValues", std::move(newPrimaryValuesJsonList));
  }

  if (m_lockVersionHasBeenSet) {
    payload.WithObject("LockVersion", m_lockVersion.Jsonize());
  }

  return payload.View().WriteReadable();
}
