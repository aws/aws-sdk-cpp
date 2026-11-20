/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdatedSignatureAgentCardAdditionalDataFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

UpdatedSignatureAgentCardAdditionalDataFields::UpdatedSignatureAgentCardAdditionalDataFields(JsonView jsonValue) { *this = jsonValue; }

UpdatedSignatureAgentCardAdditionalDataFields& UpdatedSignatureAgentCardAdditionalDataFields::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetObject("category");
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdatedSignatureAgentCardAdditionalDataFields::Jsonize() const {
  JsonValue payload;

  if (m_categoryHasBeenSet) {
    payload.WithObject("category", m_category.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
