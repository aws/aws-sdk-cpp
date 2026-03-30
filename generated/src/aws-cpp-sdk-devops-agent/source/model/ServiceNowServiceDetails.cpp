/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceNowServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceNowServiceDetails::ServiceNowServiceDetails(JsonView jsonValue) { *this = jsonValue; }

ServiceNowServiceDetails& ServiceNowServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceUrl")) {
    m_instanceUrl = jsonValue.GetString("instanceUrl");
    m_instanceUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationConfig")) {
    m_authorizationConfig = jsonValue.GetObject("authorizationConfig");
    m_authorizationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_instanceUrlHasBeenSet) {
    payload.WithString("instanceUrl", m_instanceUrl);
  }

  if (m_authorizationConfigHasBeenSet) {
    payload.WithObject("authorizationConfig", m_authorizationConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
