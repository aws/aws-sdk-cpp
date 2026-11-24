/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/Identifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

Identifier::Identifier(JsonView jsonValue) { *this = jsonValue; }

Identifier& Identifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  return *this;
}

JsonValue Identifier::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
