/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/WebhookDeduplicationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace WebhookDeduplicationTypeMapper {

static const int CONTENT_BASED_HASH = HashingUtils::HashString("CONTENT_BASED");

WebhookDeduplicationType GetWebhookDeduplicationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTENT_BASED_HASH) {
    return WebhookDeduplicationType::CONTENT_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookDeduplicationType>(hashCode);
  }

  return WebhookDeduplicationType::NOT_SET;
}

Aws::String GetNameForWebhookDeduplicationType(WebhookDeduplicationType enumValue) {
  switch (enumValue) {
    case WebhookDeduplicationType::NOT_SET:
      return {};
    case WebhookDeduplicationType::CONTENT_BASED:
      return "CONTENT_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookDeduplicationTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
