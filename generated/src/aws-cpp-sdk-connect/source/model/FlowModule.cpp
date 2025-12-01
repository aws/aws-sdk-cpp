/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowModule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

FlowModule::FlowModule(JsonView jsonValue) { *this = jsonValue; }

FlowModule& FlowModule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = FlowModuleTypeMapper::GetFlowModuleTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowModuleId")) {
    m_flowModuleId = jsonValue.GetString("FlowModuleId");
    m_flowModuleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowModule::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", FlowModuleTypeMapper::GetNameForFlowModuleType(m_type));
  }

  if (m_flowModuleIdHasBeenSet) {
    payload.WithString("FlowModuleId", m_flowModuleId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
