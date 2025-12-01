/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowQuickConnectConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

FlowQuickConnectConfig::FlowQuickConnectConfig(JsonView jsonValue) { *this = jsonValue; }

FlowQuickConnectConfig& FlowQuickConnectConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactFlowId")) {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");
    m_contactFlowIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowQuickConnectConfig::Jsonize() const {
  JsonValue payload;

  if (m_contactFlowIdHasBeenSet) {
    payload.WithString("ContactFlowId", m_contactFlowId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
