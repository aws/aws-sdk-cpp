/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/AdvancedConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

AdvancedConfiguration::AdvancedConfiguration(JsonView jsonValue) { *this = jsonValue; }

AdvancedConfiguration& AdvancedConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WiFiCellular")) {
    m_wiFiCellular = jsonValue.GetObject("WiFiCellular");
    m_wiFiCellularHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_wiFiCellularHasBeenSet) {
    payload.WithObject("WiFiCellular", m_wiFiCellular.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
