/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MLSyntheticDataParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

MLSyntheticDataParameters::MLSyntheticDataParameters(JsonView jsonValue) { *this = jsonValue; }

MLSyntheticDataParameters& MLSyntheticDataParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("epsilon")) {
    m_epsilon = jsonValue.GetDouble("epsilon");
    m_epsilonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxMembershipInferenceAttackScore")) {
    m_maxMembershipInferenceAttackScore = jsonValue.GetDouble("maxMembershipInferenceAttackScore");
    m_maxMembershipInferenceAttackScoreHasBeenSet = true;
  }
  if (jsonValue.ValueExists("columnClassification")) {
    m_columnClassification = jsonValue.GetObject("columnClassification");
    m_columnClassificationHasBeenSet = true;
  }
  return *this;
}

JsonValue MLSyntheticDataParameters::Jsonize() const {
  JsonValue payload;

  if (m_epsilonHasBeenSet) {
    payload.WithDouble("epsilon", m_epsilon);
  }

  if (m_maxMembershipInferenceAttackScoreHasBeenSet) {
    payload.WithDouble("maxMembershipInferenceAttackScore", m_maxMembershipInferenceAttackScore);
  }

  if (m_columnClassificationHasBeenSet) {
    payload.WithObject("columnClassification", m_columnClassification.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
