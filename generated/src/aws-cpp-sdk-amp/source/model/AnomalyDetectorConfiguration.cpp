/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AnomalyDetectorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

AnomalyDetectorConfiguration::AnomalyDetectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

AnomalyDetectorConfiguration& AnomalyDetectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("randomCutForest")) {
    m_randomCutForest = jsonValue.GetObject("randomCutForest");
    m_randomCutForestHasBeenSet = true;
  }
  return *this;
}

JsonValue AnomalyDetectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_randomCutForestHasBeenSet) {
    payload.WithObject("randomCutForest", m_randomCutForest.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
