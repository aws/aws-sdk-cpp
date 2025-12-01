/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MembershipInferenceAttackScore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

MembershipInferenceAttackScore::MembershipInferenceAttackScore(JsonView jsonValue) { *this = jsonValue; }

MembershipInferenceAttackScore& MembershipInferenceAttackScore::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attackVersion")) {
    m_attackVersion =
        MembershipInferenceAttackVersionMapper::GetMembershipInferenceAttackVersionForName(jsonValue.GetString("attackVersion"));
    m_attackVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("score")) {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipInferenceAttackScore::Jsonize() const {
  JsonValue payload;

  if (m_attackVersionHasBeenSet) {
    payload.WithString("attackVersion",
                       MembershipInferenceAttackVersionMapper::GetNameForMembershipInferenceAttackVersion(m_attackVersion));
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
