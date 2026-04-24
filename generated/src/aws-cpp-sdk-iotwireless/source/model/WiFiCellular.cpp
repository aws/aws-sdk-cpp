/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/WiFiCellular.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

WiFiCellular::WiFiCellular(JsonView jsonValue) { *this = jsonValue; }

WiFiCellular& WiFiCellular::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConfidencePercent")) {
    m_confidencePercent = jsonValue.GetInteger("ConfidencePercent");
    m_confidencePercentHasBeenSet = true;
  }
  return *this;
}

JsonValue WiFiCellular::Jsonize() const {
  JsonValue payload;

  if (m_confidencePercentHasBeenSet) {
    payload.WithInteger("ConfidencePercent", m_confidencePercent);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
