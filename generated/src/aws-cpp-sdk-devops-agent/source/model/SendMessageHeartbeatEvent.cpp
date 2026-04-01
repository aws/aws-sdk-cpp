/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageHeartbeatEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageHeartbeatEvent::SendMessageHeartbeatEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageHeartbeatEvent& SendMessageHeartbeatEvent::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SendMessageHeartbeatEvent::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
