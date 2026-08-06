/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedCustomDescriptorFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedCustomDescriptorFields::UpdatedCustomDescriptorFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedCustomDescriptorFields& UpdatedCustomDescriptorFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedCustomDescriptorFields::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithObject("data", m_data.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
