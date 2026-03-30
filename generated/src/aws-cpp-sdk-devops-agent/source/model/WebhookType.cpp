/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/WebhookType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace WebhookTypeMapper {

static const int hmac_HASH = HashingUtils::HashString("hmac");
static const int apikey_HASH = HashingUtils::HashString("apikey");
static const int gitlab_HASH = HashingUtils::HashString("gitlab");
static const int pagerduty_HASH = HashingUtils::HashString("pagerduty");

WebhookType GetWebhookTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == hmac_HASH) {
    return WebhookType::hmac;
  } else if (hashCode == apikey_HASH) {
    return WebhookType::apikey;
  } else if (hashCode == gitlab_HASH) {
    return WebhookType::gitlab;
  } else if (hashCode == pagerduty_HASH) {
    return WebhookType::pagerduty;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookType>(hashCode);
  }

  return WebhookType::NOT_SET;
}

Aws::String GetNameForWebhookType(WebhookType enumValue) {
  switch (enumValue) {
    case WebhookType::NOT_SET:
      return {};
    case WebhookType::hmac:
      return "hmac";
    case WebhookType::apikey:
      return "apikey";
    case WebhookType::gitlab:
      return "gitlab";
    case WebhookType::pagerduty:
      return "pagerduty";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
