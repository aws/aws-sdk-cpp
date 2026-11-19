/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/WebhookHmacAlgorithm.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace WebhookHmacAlgorithmMapper {

static const int SHA256_HASH = HashingUtils::HashString("SHA256");
static const int SHA1_HASH = HashingUtils::HashString("SHA1");

WebhookHmacAlgorithm GetWebhookHmacAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHA256_HASH) {
    return WebhookHmacAlgorithm::SHA256;
  } else if (hashCode == SHA1_HASH) {
    return WebhookHmacAlgorithm::SHA1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebhookHmacAlgorithm>(hashCode);
  }

  return WebhookHmacAlgorithm::NOT_SET;
}

Aws::String GetNameForWebhookHmacAlgorithm(WebhookHmacAlgorithm enumValue) {
  switch (enumValue) {
    case WebhookHmacAlgorithm::NOT_SET:
      return {};
    case WebhookHmacAlgorithm::SHA256:
      return "SHA256";
    case WebhookHmacAlgorithm::SHA1:
      return "SHA1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebhookHmacAlgorithmMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
