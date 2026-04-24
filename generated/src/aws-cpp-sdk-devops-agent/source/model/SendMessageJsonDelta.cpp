/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageJsonDelta.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageJsonDelta::SendMessageJsonDelta(JsonView jsonValue) { *this = jsonValue; }

SendMessageJsonDelta& SendMessageJsonDelta::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("partialJson")) {
    m_partialJson = jsonValue.GetString("partialJson");
    m_partialJsonHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageJsonDelta::Jsonize() const {
  JsonValue payload;

  if (m_partialJsonHasBeenSet) {
    payload.WithString("partialJson", m_partialJson);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
