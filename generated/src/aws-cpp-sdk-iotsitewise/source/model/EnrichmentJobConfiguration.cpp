/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/EnrichmentJobConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

EnrichmentJobConfiguration::EnrichmentJobConfiguration(JsonView jsonValue) { *this = jsonValue; }

EnrichmentJobConfiguration& EnrichmentJobConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventDetection")) {
    m_eventDetection = jsonValue.GetObject("eventDetection");
    m_eventDetectionHasBeenSet = true;
  }
  return *this;
}

JsonValue EnrichmentJobConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_eventDetectionHasBeenSet) {
    payload.WithObject("eventDetection", m_eventDetection.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
