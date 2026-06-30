/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/WebNotificationContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

WebNotificationContext::WebNotificationContext(JsonView jsonValue) { *this = jsonValue; }

WebNotificationContext& WebNotificationContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionId")) {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("browserId")) {
    m_browserId = jsonValue.GetString("browserId");
    m_browserIdHasBeenSet = true;
  }
  return *this;
}

JsonValue WebNotificationContext::Jsonize() const {
  JsonValue payload;

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_browserIdHasBeenSet) {
    payload.WithString("browserId", m_browserId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
