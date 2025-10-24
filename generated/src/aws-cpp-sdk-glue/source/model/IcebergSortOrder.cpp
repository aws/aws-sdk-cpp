﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/IcebergSortOrder.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

IcebergSortOrder::IcebergSortOrder(JsonView jsonValue) { *this = jsonValue; }

IcebergSortOrder& IcebergSortOrder::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrderId")) {
    m_orderId = jsonValue.GetInteger("OrderId");
    m_orderIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergSortOrder::Jsonize() const {
  JsonValue payload;

  if (m_orderIdHasBeenSet) {
    payload.WithInteger("OrderId", m_orderId);
  }

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("Fields", std::move(fieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
