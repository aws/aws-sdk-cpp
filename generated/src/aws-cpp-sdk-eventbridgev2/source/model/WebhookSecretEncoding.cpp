/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/WebhookSecretEncoding.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace WebhookSecretEncodingMapper {

static const int RAW_HASH = HashingUtils::HashString("RAW");
static const int BASE64_HASH = HashingUtils::HashString("BASE64");

WebhookSecretEncoding GetWebhookSecretEncodingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_HASH) {
    return WebhookSecretEncoding::RAW;
  } else if (hashCode == BASE64_HASH) {
    return WebhookSecretEncoding::BASE64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookSecretEncoding>(hashCode);
  }

  return WebhookSecretEncoding::NOT_SET;
}

Aws::String GetNameForWebhookSecretEncoding(WebhookSecretEncoding enumValue) {
  switch (enumValue) {
    case WebhookSecretEncoding::NOT_SET:
      return {};
    case WebhookSecretEncoding::RAW:
      return "RAW";
    case WebhookSecretEncoding::BASE64:
      return "BASE64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookSecretEncodingMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
