/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RulesConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

RulesConfiguration::RulesConfiguration(JsonView jsonValue) { *this = jsonValue; }

RulesConfiguration& RulesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Behavior")) {
    m_behavior = BehaviorMapper::GetBehaviorForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue RulesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("Behavior", BehaviorMapper::GetNameForBehavior(m_behavior));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
