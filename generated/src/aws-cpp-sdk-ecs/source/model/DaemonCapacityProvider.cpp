/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/DaemonCapacityProvider.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

DaemonCapacityProvider::DaemonCapacityProvider(JsonView jsonValue) { *this = jsonValue; }

DaemonCapacityProvider& DaemonCapacityProvider::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runningCount")) {
    m_runningCount = jsonValue.GetInteger("runningCount");
    m_runningCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DaemonCapacityProvider::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_runningCountHasBeenSet) {
    payload.WithInteger("runningCount", m_runningCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
