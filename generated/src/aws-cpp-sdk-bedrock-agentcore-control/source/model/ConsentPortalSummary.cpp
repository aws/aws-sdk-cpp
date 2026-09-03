/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConsentPortalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConsentPortalSummary::ConsentPortalSummary(JsonView jsonValue) { *this = jsonValue; }

ConsentPortalSummary& ConsentPortalSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sources")) {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consentPortalArn")) {
    m_consentPortalArn = jsonValue.GetString("consentPortalArn");
    m_consentPortalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consentPortalId")) {
    m_consentPortalId = jsonValue.GetString("consentPortalId");
    m_consentPortalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("portalUrl")) {
    m_portalUrl = jsonValue.GetString("portalUrl");
    m_portalUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ConsentPortalStatusMapper::GetConsentPortalStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsentPortalSummary::Jsonize() const {
  JsonValue payload;

  if (m_sourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
    for (unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex) {
      sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
    }
    payload.WithArray("sources", std::move(sourcesJsonList));
  }

  if (m_consentPortalArnHasBeenSet) {
    payload.WithString("consentPortalArn", m_consentPortalArn);
  }

  if (m_consentPortalIdHasBeenSet) {
    payload.WithString("consentPortalId", m_consentPortalId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_portalUrlHasBeenSet) {
    payload.WithString("portalUrl", m_portalUrl);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ConsentPortalStatusMapper::GetNameForConsentPortalStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
