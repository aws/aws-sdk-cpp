/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ScheduleActionOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ScheduleActionOperation::ScheduleActionOperation(JsonView jsonValue) { *this = jsonValue; }

ScheduleActionOperation& ScheduleActionOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("updateOutputStatus")) {
    m_updateOutputStatus = jsonValue.GetObject("updateOutputStatus");
    m_updateOutputStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateClippingDataSourceConfiguration")) {
    m_updateClippingDataSourceConfiguration = jsonValue.GetObject("updateClippingDataSourceConfiguration");
    m_updateClippingDataSourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("removeClippingDataSourceConfiguration")) {
    m_removeClippingDataSourceConfiguration = jsonValue.GetObject("removeClippingDataSourceConfiguration");
    m_removeClippingDataSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleActionOperation::Jsonize() const {
  JsonValue payload;

  if (m_updateOutputStatusHasBeenSet) {
    payload.WithObject("updateOutputStatus", m_updateOutputStatus.Jsonize());
  }

  if (m_updateClippingDataSourceConfigurationHasBeenSet) {
    payload.WithObject("updateClippingDataSourceConfiguration", m_updateClippingDataSourceConfiguration.Jsonize());
  }

  if (m_removeClippingDataSourceConfigurationHasBeenSet) {
    payload.WithObject("removeClippingDataSourceConfiguration", m_removeClippingDataSourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
