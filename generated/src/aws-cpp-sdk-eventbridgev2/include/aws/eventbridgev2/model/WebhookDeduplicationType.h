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
enum class WebhookDeduplicationType { NOT_SET, CONTENT_BASED };

namespace WebhookDeduplicationTypeMapper {
AWS_EVENTBRIDGEV2_API WebhookDeduplicationType GetWebhookDeduplicationTypeForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForWebhookDeduplicationType(WebhookDeduplicationType value);
}  // namespace WebhookDeduplicationTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
