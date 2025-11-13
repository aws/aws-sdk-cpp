/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/SidewalkPositioning.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

SidewalkPositioning::SidewalkPositioning(JsonView jsonValue) { *this = jsonValue; }

SidewalkPositioning& SidewalkPositioning::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DestinationName")) {
    m_destinationName = jsonValue.GetString("DestinationName");
    m_destinationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SidewalkPositioning::Jsonize() const {
  JsonValue payload;

  if (m_destinationNameHasBeenSet) {
    payload.WithString("DestinationName", m_destinationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
