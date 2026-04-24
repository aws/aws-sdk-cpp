/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SelfManagedInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SelfManagedInput::SelfManagedInput(JsonView jsonValue) { *this = jsonValue; }

SelfManagedInput& SelfManagedInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceConfigurationId")) {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");
    m_resourceConfigurationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificate")) {
    m_certificate = jsonValue.GetString("certificate");
    m_certificateHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfManagedInput::Jsonize() const {
  JsonValue payload;

  if (m_resourceConfigurationIdHasBeenSet) {
    payload.WithString("resourceConfigurationId", m_resourceConfigurationId);
  }

  if (m_certificateHasBeenSet) {
    payload.WithString("certificate", m_certificate);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
