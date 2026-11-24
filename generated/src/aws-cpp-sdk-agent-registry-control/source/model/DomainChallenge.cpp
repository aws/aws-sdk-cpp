/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/DomainChallenge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

DomainChallenge::DomainChallenge(JsonView jsonValue) { *this = jsonValue; }

DomainChallenge& DomainChallenge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordName")) {
    m_recordName = jsonValue.GetString("recordName");
    m_recordNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordValue")) {
    m_recordValue = jsonValue.GetString("recordValue");
    m_recordValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainChallenge::Jsonize() const {
  JsonValue payload;

  if (m_recordNameHasBeenSet) {
    payload.WithString("recordName", m_recordName);
  }

  if (m_recordValueHasBeenSet) {
    payload.WithString("recordValue", m_recordValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
