/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DataPrivacyScores.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

DataPrivacyScores::DataPrivacyScores(JsonView jsonValue) { *this = jsonValue; }

DataPrivacyScores& DataPrivacyScores::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("membershipInferenceAttackScores")) {
    Aws::Utils::Array<JsonView> membershipInferenceAttackScoresJsonList = jsonValue.GetArray("membershipInferenceAttackScores");
    for (unsigned membershipInferenceAttackScoresIndex = 0;
         membershipInferenceAttackScoresIndex < membershipInferenceAttackScoresJsonList.GetLength();
         ++membershipInferenceAttackScoresIndex) {
      m_membershipInferenceAttackScores.push_back(membershipInferenceAttackScoresJsonList[membershipInferenceAttackScoresIndex].AsObject());
    }
    m_membershipInferenceAttackScoresHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPrivacyScores::Jsonize() const {
  JsonValue payload;

  if (m_membershipInferenceAttackScoresHasBeenSet) {
    Aws::Utils::Array<JsonValue> membershipInferenceAttackScoresJsonList(m_membershipInferenceAttackScores.size());
    for (unsigned membershipInferenceAttackScoresIndex = 0;
         membershipInferenceAttackScoresIndex < membershipInferenceAttackScoresJsonList.GetLength();
         ++membershipInferenceAttackScoresIndex) {
      membershipInferenceAttackScoresJsonList[membershipInferenceAttackScoresIndex].AsObject(
          m_membershipInferenceAttackScores[membershipInferenceAttackScoresIndex].Jsonize());
    }
    payload.WithArray("membershipInferenceAttackScores", std::move(membershipInferenceAttackScoresJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
