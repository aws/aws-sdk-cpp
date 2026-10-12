/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityConfigurationV2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityConfigurationV2::DataQualityConfigurationV2(JsonView jsonValue) { *this = jsonValue; }

DataQualityConfigurationV2& DataQualityConfigurationV2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ObservationsEnabled")) {
    m_observationsEnabled = ObservationConfigurationMapper::GetObservationConfigurationForName(jsonValue.GetString("ObservationsEnabled"));
    m_observationsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ObservationMode")) {
    m_observationMode = ObservationModeMapper::GetObservationModeForName(jsonValue.GetString("ObservationMode"));
    m_observationModeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityConfigurationV2::Jsonize() const {
  JsonValue payload;

  if (m_observationsEnabledHasBeenSet) {
    payload.WithString("ObservationsEnabled", ObservationConfigurationMapper::GetNameForObservationConfiguration(m_observationsEnabled));
  }

  if (m_observationModeHasBeenSet) {
    payload.WithString("ObservationMode", ObservationModeMapper::GetNameForObservationMode(m_observationMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
