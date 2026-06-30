/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SentimentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

SentimentConfiguration::SentimentConfiguration(JsonView jsonValue) { *this = jsonValue; }

SentimentConfiguration& SentimentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Behavior")) {
    m_behavior = BehaviorMapper::GetBehaviorForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue SentimentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("Behavior", BehaviorMapper::GetNameForBehavior(m_behavior));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
