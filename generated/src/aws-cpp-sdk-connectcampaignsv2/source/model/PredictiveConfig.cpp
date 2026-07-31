/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/PredictiveConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

PredictiveConfig::PredictiveConfig(JsonView jsonValue) { *this = jsonValue; }

PredictiveConfig& PredictiveConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bandwidthAllocation")) {
    m_bandwidthAllocation = jsonValue.GetDouble("bandwidthAllocation");
    m_bandwidthAllocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pacingStrategies")) {
    Aws::Utils::Array<JsonView> pacingStrategiesJsonList = jsonValue.GetArray("pacingStrategies");
    for (unsigned pacingStrategiesIndex = 0; pacingStrategiesIndex < pacingStrategiesJsonList.GetLength(); ++pacingStrategiesIndex) {
      m_pacingStrategies.push_back(pacingStrategiesJsonList[pacingStrategiesIndex].AsObject());
    }
    m_pacingStrategiesHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictiveConfig::Jsonize() const {
  JsonValue payload;

  if (m_bandwidthAllocationHasBeenSet) {
    payload.WithDouble("bandwidthAllocation", m_bandwidthAllocation);
  }

  if (m_pacingStrategiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> pacingStrategiesJsonList(m_pacingStrategies.size());
    for (unsigned pacingStrategiesIndex = 0; pacingStrategiesIndex < pacingStrategiesJsonList.GetLength(); ++pacingStrategiesIndex) {
      pacingStrategiesJsonList[pacingStrategiesIndex].AsObject(m_pacingStrategies[pacingStrategiesIndex].Jsonize());
    }
    payload.WithArray("pacingStrategies", std::move(pacingStrategiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
