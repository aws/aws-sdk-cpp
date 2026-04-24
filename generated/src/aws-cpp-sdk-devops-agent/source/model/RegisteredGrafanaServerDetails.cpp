/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredGrafanaServerDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredGrafanaServerDetails::RegisteredGrafanaServerDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredGrafanaServerDetails& RegisteredGrafanaServerDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationMethod")) {
    m_authorizationMethod =
        MCPServerAuthorizationMethodMapper::GetMCPServerAuthorizationMethodForName(jsonValue.GetString("authorizationMethod"));
    m_authorizationMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredGrafanaServerDetails::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_authorizationMethodHasBeenSet) {
    payload.WithString("authorizationMethod",
                       MCPServerAuthorizationMethodMapper::GetNameForMCPServerAuthorizationMethod(m_authorizationMethod));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
