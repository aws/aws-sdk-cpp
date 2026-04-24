/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatedSynchronizationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

UpdatedSynchronizationType::UpdatedSynchronizationType(JsonView jsonValue) { *this = jsonValue; }

UpdatedSynchronizationType& UpdatedSynchronizationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("optionalValue")) {
    m_optionalValue = SynchronizationTypeMapper::GetSynchronizationTypeForName(jsonValue.GetString("optionalValue"));
    m_optionalValueHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedSynchronizationType::Jsonize() const {
  JsonValue payload;

  if (m_optionalValueHasBeenSet) {
    payload.WithString("optionalValue", SynchronizationTypeMapper::GetNameForSynchronizationType(m_optionalValue));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
