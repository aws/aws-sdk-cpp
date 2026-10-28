/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateContactHooks.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

TaskTemplateContactHooks::TaskTemplateContactHooks(JsonView jsonValue) { *this = jsonValue; }

TaskTemplateContactHooks& TaskTemplateContactHooks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WrapUpFlowId")) {
    m_wrapUpFlowId = jsonValue.GetString("WrapUpFlowId");
    m_wrapUpFlowIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskTemplateContactHooks::Jsonize() const {
  JsonValue payload;

  if (m_wrapUpFlowIdHasBeenSet) {
    payload.WithString("WrapUpFlowId", m_wrapUpFlowId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
