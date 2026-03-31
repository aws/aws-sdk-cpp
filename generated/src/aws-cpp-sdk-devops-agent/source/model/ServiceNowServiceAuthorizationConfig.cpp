/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceNowServiceAuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceNowServiceAuthorizationConfig::ServiceNowServiceAuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

ServiceNowServiceAuthorizationConfig& ServiceNowServiceAuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("oAuthClientCredentials")) {
    m_oAuthClientCredentials = jsonValue.GetObject("oAuthClientCredentials");
    m_oAuthClientCredentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowServiceAuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_oAuthClientCredentialsHasBeenSet) {
    payload.WithObject("oAuthClientCredentials", m_oAuthClientCredentials.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
