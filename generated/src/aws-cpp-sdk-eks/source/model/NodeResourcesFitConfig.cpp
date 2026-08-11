/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/NodeResourcesFitConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

NodeResourcesFitConfig::NodeResourcesFitConfig(JsonView jsonValue) { *this = jsonValue; }

NodeResourcesFitConfig& NodeResourcesFitConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scoringStrategy")) {
    m_scoringStrategy = jsonValue.GetObject("scoringStrategy");
    m_scoringStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeResourcesFitConfig::Jsonize() const {
  JsonValue payload;

  if (m_scoringStrategyHasBeenSet) {
    payload.WithObject("scoringStrategy", m_scoringStrategy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
