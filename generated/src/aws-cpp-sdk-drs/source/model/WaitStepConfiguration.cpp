/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/WaitStepConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace drs {
namespace Model {

WaitStepConfiguration::WaitStepConfiguration(JsonView jsonValue) { *this = jsonValue; }

WaitStepConfiguration& WaitStepConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("waitDurationMinutes")) {
    m_waitDurationMinutes = jsonValue.GetInteger("waitDurationMinutes");
    m_waitDurationMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue WaitStepConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_waitDurationMinutesHasBeenSet) {
    payload.WithInteger("waitDurationMinutes", m_waitDurationMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace drs
}  // namespace Aws
