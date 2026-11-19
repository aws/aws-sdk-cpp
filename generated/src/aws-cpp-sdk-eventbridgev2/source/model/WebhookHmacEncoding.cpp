/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/WebhookHmacEncoding.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace WebhookHmacEncodingMapper {

static const int HEX_HASH = HashingUtils::HashString("HEX");
static const int BASE64_HASH = HashingUtils::HashString("BASE64");

WebhookHmacEncoding GetWebhookHmacEncodingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HEX_HASH) {
    return WebhookHmacEncoding::HEX;
  } else if (hashCode == BASE64_HASH) {
    return WebhookHmacEncoding::BASE64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookHmacEncoding>(hashCode);
  }

  return WebhookHmacEncoding::NOT_SET;
}

Aws::String GetNameForWebhookHmacEncoding(WebhookHmacEncoding enumValue) {
  switch (enumValue) {
    case WebhookHmacEncoding::NOT_SET:
      return {};
    case WebhookHmacEncoding::HEX:
      return "HEX";
    case WebhookHmacEncoding::BASE64:
      return "BASE64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookHmacEncodingMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
