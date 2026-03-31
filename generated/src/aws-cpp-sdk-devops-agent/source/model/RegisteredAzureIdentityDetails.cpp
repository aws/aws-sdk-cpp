/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredAzureIdentityDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredAzureIdentityDetails::RegisteredAzureIdentityDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredAzureIdentityDetails& RegisteredAzureIdentityDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tenantId")) {
    m_tenantId = jsonValue.GetString("tenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webIdentityRoleArn")) {
    m_webIdentityRoleArn = jsonValue.GetString("webIdentityRoleArn");
    m_webIdentityRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webIdentityTokenAudiences")) {
    Aws::Utils::Array<JsonView> webIdentityTokenAudiencesJsonList = jsonValue.GetArray("webIdentityTokenAudiences");
    for (unsigned webIdentityTokenAudiencesIndex = 0; webIdentityTokenAudiencesIndex < webIdentityTokenAudiencesJsonList.GetLength();
         ++webIdentityTokenAudiencesIndex) {
      m_webIdentityTokenAudiences.push_back(webIdentityTokenAudiencesJsonList[webIdentityTokenAudiencesIndex].AsString());
    }
    m_webIdentityTokenAudiencesHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredAzureIdentityDetails::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdHasBeenSet) {
    payload.WithString("tenantId", m_tenantId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_webIdentityRoleArnHasBeenSet) {
    payload.WithString("webIdentityRoleArn", m_webIdentityRoleArn);
  }

  if (m_webIdentityTokenAudiencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> webIdentityTokenAudiencesJsonList(m_webIdentityTokenAudiences.size());
    for (unsigned webIdentityTokenAudiencesIndex = 0; webIdentityTokenAudiencesIndex < webIdentityTokenAudiencesJsonList.GetLength();
         ++webIdentityTokenAudiencesIndex) {
      webIdentityTokenAudiencesJsonList[webIdentityTokenAudiencesIndex].AsString(
          m_webIdentityTokenAudiences[webIdentityTokenAudiencesIndex]);
    }
    payload.WithArray("webIdentityTokenAudiences", std::move(webIdentityTokenAudiencesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
