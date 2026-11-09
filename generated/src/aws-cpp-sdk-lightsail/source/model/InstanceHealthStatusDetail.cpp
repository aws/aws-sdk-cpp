/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/InstanceHealthStatusDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

InstanceHealthStatusDetail::InstanceHealthStatusDetail(JsonView jsonValue) { *this = jsonValue; }

InstanceHealthStatusDetail& InstanceHealthStatusDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = InstanceHealthStatusDetailNameMapper::GetInstanceHealthStatusDetailNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = InstanceHealthStatusDetailValueMapper::GetInstanceHealthStatusDetailValueForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("impairedSince")) {
    m_impairedSince = jsonValue.GetDouble("impairedSince");
    m_impairedSinceHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceHealthStatusDetail::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", InstanceHealthStatusDetailNameMapper::GetNameForInstanceHealthStatusDetailName(m_name));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", InstanceHealthStatusDetailValueMapper::GetNameForInstanceHealthStatusDetailValue(m_status));
  }

  if (m_impairedSinceHasBeenSet) {
    payload.WithDouble("impairedSince", m_impairedSince.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
