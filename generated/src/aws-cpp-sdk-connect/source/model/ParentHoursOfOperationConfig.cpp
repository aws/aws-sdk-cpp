/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParentHoursOfOperationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ParentHoursOfOperationConfig::ParentHoursOfOperationConfig(JsonView jsonValue) { *this = jsonValue; }

ParentHoursOfOperationConfig& ParentHoursOfOperationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HoursOfOperationId")) {
    m_hoursOfOperationId = jsonValue.GetString("HoursOfOperationId");
    m_hoursOfOperationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ParentHoursOfOperationConfig::Jsonize() const {
  JsonValue payload;

  if (m_hoursOfOperationIdHasBeenSet) {
    payload.WithString("HoursOfOperationId", m_hoursOfOperationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
