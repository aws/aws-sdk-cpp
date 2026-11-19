/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class WebhookSecretEncoding { NOT_SET, RAW, BASE64 };

namespace WebhookSecretEncodingMapper {
AWS_EVENTBRIDGEV2_API WebhookSecretEncoding GetWebhookSecretEncodingForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForWebhookSecretEncoding(WebhookSecretEncoding value);
}  // namespace WebhookSecretEncodingMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
