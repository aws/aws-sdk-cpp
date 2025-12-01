/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/SyntheticDataEvaluationScores.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

SyntheticDataEvaluationScores::SyntheticDataEvaluationScores(JsonView jsonValue) { *this = jsonValue; }

SyntheticDataEvaluationScores& SyntheticDataEvaluationScores::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataPrivacyScores")) {
    m_dataPrivacyScores = jsonValue.GetObject("dataPrivacyScores");
    m_dataPrivacyScoresHasBeenSet = true;
  }
  return *this;
}

JsonValue SyntheticDataEvaluationScores::Jsonize() const {
  JsonValue payload;

  if (m_dataPrivacyScoresHasBeenSet) {
    payload.WithObject("dataPrivacyScores", m_dataPrivacyScores.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
