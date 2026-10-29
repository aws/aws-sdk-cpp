/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/InstanceHealthStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

InstanceHealthStatus::InstanceHealthStatus(JsonView jsonValue) { *this = jsonValue; }

InstanceHealthStatus& InstanceHealthStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = InstanceHealthStatusValueMapper::GetInstanceHealthStatusValueForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for (unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex) {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceHealthStatus::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", InstanceHealthStatusValueMapper::GetNameForInstanceHealthStatusValue(m_status));
  }

  if (m_detailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
    for (unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex) {
      detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
    }
    payload.WithArray("details", std::move(detailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
