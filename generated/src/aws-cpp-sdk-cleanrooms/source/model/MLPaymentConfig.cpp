/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MLPaymentConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

MLPaymentConfig::MLPaymentConfig(JsonView jsonValue) { *this = jsonValue; }

MLPaymentConfig& MLPaymentConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelTraining")) {
    m_modelTraining = jsonValue.GetObject("modelTraining");
    m_modelTrainingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelInference")) {
    m_modelInference = jsonValue.GetObject("modelInference");
    m_modelInferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("syntheticDataGeneration")) {
    m_syntheticDataGeneration = jsonValue.GetObject("syntheticDataGeneration");
    m_syntheticDataGenerationHasBeenSet = true;
  }
  return *this;
}

JsonValue MLPaymentConfig::Jsonize() const {
  JsonValue payload;

  if (m_modelTrainingHasBeenSet) {
    payload.WithObject("modelTraining", m_modelTraining.Jsonize());
  }

  if (m_modelInferenceHasBeenSet) {
    payload.WithObject("modelInference", m_modelInference.Jsonize());
  }

  if (m_syntheticDataGenerationHasBeenSet) {
    payload.WithObject("syntheticDataGeneration", m_syntheticDataGeneration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
