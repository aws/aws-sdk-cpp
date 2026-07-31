/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/Catalog.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

Catalog::Catalog(JsonView jsonValue) { *this = jsonValue; }

Catalog& Catalog::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("catalogArn")) {
    m_catalogArn = jsonValue.GetString("catalogArn");
    m_catalogArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("warehouseLocation")) {
    m_warehouseLocation = jsonValue.GetString("warehouseLocation");
    m_warehouseLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue Catalog::Jsonize() const {
  JsonValue payload;

  if (m_catalogArnHasBeenSet) {
    payload.WithString("catalogArn", m_catalogArn);
  }

  if (m_warehouseLocationHasBeenSet) {
    payload.WithString("warehouseLocation", m_warehouseLocation);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
