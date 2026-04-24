/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/IdpAuthConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

IdpAuthConfiguration::IdpAuthConfiguration(JsonView jsonValue) { *this = jsonValue; }

IdpAuthConfiguration& IdpAuthConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issuerUrl")) {
    m_issuerUrl = jsonValue.GetString("issuerUrl");
    m_issuerUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatorAppRoleArn")) {
    m_operatorAppRoleArn = jsonValue.GetString("operatorAppRoleArn");
    m_operatorAppRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = jsonValue.GetString("provider");
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IdpAuthConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_issuerUrlHasBeenSet) {
    payload.WithString("issuerUrl", m_issuerUrl);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_operatorAppRoleArnHasBeenSet) {
    payload.WithString("operatorAppRoleArn", m_operatorAppRoleArn);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", m_provider);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
