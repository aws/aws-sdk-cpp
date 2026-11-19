/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/WebhookSignedMessageComposition.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace WebhookSignedMessageCompositionMapper {

static const int BODY_HASH = HashingUtils::HashString("BODY");
static const int TIMESTAMP_DOT_BODY_HASH = HashingUtils::HashString("TIMESTAMP_DOT_BODY");
static const int MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY_HASH = HashingUtils::HashString("MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY");

WebhookSignedMessageComposition GetWebhookSignedMessageCompositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BODY_HASH) {
    return WebhookSignedMessageComposition::BODY;
  } else if (hashCode == TIMESTAMP_DOT_BODY_HASH) {
    return WebhookSignedMessageComposition::TIMESTAMP_DOT_BODY;
  } else if (hashCode == MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY_HASH) {
    return WebhookSignedMessageComposition::MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookSignedMessageComposition>(hashCode);
  }

  return WebhookSignedMessageComposition::NOT_SET;
}

Aws::String GetNameForWebhookSignedMessageComposition(WebhookSignedMessageComposition enumValue) {
  switch (enumValue) {
    case WebhookSignedMessageComposition::NOT_SET:
      return {};
    case WebhookSignedMessageComposition::BODY:
      return "BODY";
    case WebhookSignedMessageComposition::TIMESTAMP_DOT_BODY:
      return "TIMESTAMP_DOT_BODY";
    case WebhookSignedMessageComposition::MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY:
      return "MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookSignedMessageCompositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
