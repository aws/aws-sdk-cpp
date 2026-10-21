/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/HeartbeatEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

HeartbeatEvent::HeartbeatEvent(JsonView jsonValue) { *this = jsonValue; }

HeartbeatEvent& HeartbeatEvent::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue HeartbeatEvent::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
