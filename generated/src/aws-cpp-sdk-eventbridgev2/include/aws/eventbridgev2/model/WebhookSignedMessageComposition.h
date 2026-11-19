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
enum class WebhookSignedMessageComposition { NOT_SET, BODY, TIMESTAMP_DOT_BODY, MESSAGE_ID_DOT_TIMESTAMP_DOT_BODY };

namespace WebhookSignedMessageCompositionMapper {
AWS_EVENTBRIDGEV2_API WebhookSignedMessageComposition GetWebhookSignedMessageCompositionForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForWebhookSignedMessageComposition(WebhookSignedMessageComposition value);
}  // namespace WebhookSignedMessageCompositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
