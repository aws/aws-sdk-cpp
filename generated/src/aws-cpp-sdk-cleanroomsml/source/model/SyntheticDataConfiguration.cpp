/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/SyntheticDataConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

SyntheticDataConfiguration::SyntheticDataConfiguration(JsonView jsonValue) { *this = jsonValue; }

SyntheticDataConfiguration& SyntheticDataConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("syntheticDataParameters")) {
    m_syntheticDataParameters = jsonValue.GetObject("syntheticDataParameters");
    m_syntheticDataParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("syntheticDataEvaluationScores")) {
    m_syntheticDataEvaluationScores = jsonValue.GetObject("syntheticDataEvaluationScores");
    m_syntheticDataEvaluationScoresHasBeenSet = true;
  }
  return *this;
}

JsonValue SyntheticDataConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_syntheticDataParametersHasBeenSet) {
    payload.WithObject("syntheticDataParameters", m_syntheticDataParameters.Jsonize());
  }

  if (m_syntheticDataEvaluationScoresHasBeenSet) {
    payload.WithObject("syntheticDataEvaluationScores", m_syntheticDataEvaluationScores.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
