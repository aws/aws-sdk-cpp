/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/GenericWebhook.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

GenericWebhook::GenericWebhook(JsonView jsonValue) { *this = jsonValue; }

GenericWebhook& GenericWebhook::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("webhookUrl")) {
    m_webhookUrl = jsonValue.GetString("webhookUrl");
    m_webhookUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webhookId")) {
    m_webhookId = jsonValue.GetString("webhookId");
    m_webhookIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webhookType")) {
    m_webhookType = WebhookTypeMapper::GetWebhookTypeForName(jsonValue.GetString("webhookType"));
    m_webhookTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webhookSecret")) {
    m_webhookSecret = jsonValue.GetString("webhookSecret");
    m_webhookSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKey")) {
    m_apiKey = jsonValue.GetString("apiKey");
    m_apiKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue GenericWebhook::Jsonize() const {
  JsonValue payload;

  if (m_webhookUrlHasBeenSet) {
    payload.WithString("webhookUrl", m_webhookUrl);
  }

  if (m_webhookIdHasBeenSet) {
    payload.WithString("webhookId", m_webhookId);
  }

  if (m_webhookTypeHasBeenSet) {
    payload.WithString("webhookType", WebhookTypeMapper::GetNameForWebhookType(m_webhookType));
  }

  if (m_webhookSecretHasBeenSet) {
    payload.WithString("webhookSecret", m_webhookSecret);
  }

  if (m_apiKeyHasBeenSet) {
    payload.WithString("apiKey", m_apiKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
