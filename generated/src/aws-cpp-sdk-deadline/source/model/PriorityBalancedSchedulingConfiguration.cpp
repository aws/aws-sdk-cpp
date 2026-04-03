/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/PriorityBalancedSchedulingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

PriorityBalancedSchedulingConfiguration::PriorityBalancedSchedulingConfiguration(JsonView jsonValue) { *this = jsonValue; }

PriorityBalancedSchedulingConfiguration& PriorityBalancedSchedulingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("renderingTaskBuffer")) {
    m_renderingTaskBuffer = jsonValue.GetInteger("renderingTaskBuffer");
    m_renderingTaskBufferHasBeenSet = true;
  }
  return *this;
}

JsonValue PriorityBalancedSchedulingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_renderingTaskBufferHasBeenSet) {
    payload.WithInteger("renderingTaskBuffer", m_renderingTaskBuffer);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
