/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FixedIntervalTrigger.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FixedIntervalTrigger::FixedIntervalTrigger(JsonView jsonValue) { *this = jsonValue; }

FixedIntervalTrigger& FixedIntervalTrigger::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("intervalSeconds")) {
    m_intervalSeconds = jsonValue.GetInteger("intervalSeconds");
    m_intervalSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue FixedIntervalTrigger::Jsonize() const {
  JsonValue payload;

  if (m_intervalSecondsHasBeenSet) {
    payload.WithInteger("intervalSeconds", m_intervalSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
