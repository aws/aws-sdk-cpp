/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ScoringStrategyConstraints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ScoringStrategyConstraints::ScoringStrategyConstraints(JsonView jsonValue) { *this = jsonValue; }

ScoringStrategyConstraints& ScoringStrategyConstraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scoringStrategy")) {
    m_scoringStrategy = jsonValue.GetObject("scoringStrategy");
    m_scoringStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resources")) {
    m_resources = jsonValue.GetObject("resources");
    m_resourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue ScoringStrategyConstraints::Jsonize() const {
  JsonValue payload;

  if (m_scoringStrategyHasBeenSet) {
    payload.WithObject("scoringStrategy", m_scoringStrategy.Jsonize());
  }

  if (m_resourcesHasBeenSet) {
    payload.WithObject("resources", m_resources.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
