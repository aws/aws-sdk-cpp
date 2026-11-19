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
enum class WebhookHmacAlgorithm { NOT_SET, SHA256, SHA1 };

namespace WebhookHmacAlgorithmMapper {
AWS_EVENTBRIDGEV2_API WebhookHmacAlgorithm GetWebhookHmacAlgorithmForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForWebhookHmacAlgorithm(WebhookHmacAlgorithm value);
}  // namespace WebhookHmacAlgorithmMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
