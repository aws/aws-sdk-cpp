/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/TrafficPercents.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

TrafficPercents::TrafficPercents(JsonView jsonValue) { *this = jsonValue; }

TrafficPercents& TrafficPercents::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryReadTrafficPercent")) {
    m_primaryReadTrafficPercent = jsonValue.GetInteger("PrimaryReadTrafficPercent");
    m_primaryReadTrafficPercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloneReadTrafficPercent")) {
    m_cloneReadTrafficPercent = jsonValue.GetInteger("CloneReadTrafficPercent");
    m_cloneReadTrafficPercentHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficPercents::Jsonize() const {
  JsonValue payload;

  if (m_primaryReadTrafficPercentHasBeenSet) {
    payload.WithInteger("PrimaryReadTrafficPercent", m_primaryReadTrafficPercent);
  }

  if (m_cloneReadTrafficPercentHasBeenSet) {
    payload.WithInteger("CloneReadTrafficPercent", m_cloneReadTrafficPercent);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
