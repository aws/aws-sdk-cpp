/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BrowserProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

BrowserProfileSummary::BrowserProfileSummary(JsonView jsonValue) { *this = jsonValue; }

BrowserProfileSummary& BrowserProfileSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("profileId")) {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileArn")) {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BrowserProfileStatusMapper::GetBrowserProfileStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSavedAt")) {
    m_lastSavedAt = jsonValue.GetString("lastSavedAt");
    m_lastSavedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSavedBrowserSessionId")) {
    m_lastSavedBrowserSessionId = jsonValue.GetString("lastSavedBrowserSessionId");
    m_lastSavedBrowserSessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSavedBrowserId")) {
    m_lastSavedBrowserId = jsonValue.GetString("lastSavedBrowserId");
    m_lastSavedBrowserIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserProfileSummary::Jsonize() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("profileId", m_profileId);
  }

  if (m_profileArnHasBeenSet) {
    payload.WithString("profileArn", m_profileArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", BrowserProfileStatusMapper::GetNameForBrowserProfileStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastSavedAtHasBeenSet) {
    payload.WithString("lastSavedAt", m_lastSavedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_lastSavedBrowserSessionIdHasBeenSet) {
    payload.WithString("lastSavedBrowserSessionId", m_lastSavedBrowserSessionId);
  }

  if (m_lastSavedBrowserIdHasBeenSet) {
    payload.WithString("lastSavedBrowserId", m_lastSavedBrowserId);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
