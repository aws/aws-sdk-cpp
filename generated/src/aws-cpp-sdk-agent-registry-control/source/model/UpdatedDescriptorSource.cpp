/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedDescriptorSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedDescriptorSource::UpdatedDescriptorSource(JsonView jsonValue) { *this = jsonValue; }

UpdatedDescriptorSource& UpdatedDescriptorSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionalValue")) {
    m_optionalValue = jsonValue.GetObject("optionalValue");
    m_optionalValueHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedDescriptorSource::Jsonize() const {
  JsonValue payload;

  if (m_optionalValueHasBeenSet) {
    payload.WithObject("optionalValue", m_optionalValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
