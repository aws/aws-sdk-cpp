/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class WebhookType { NOT_SET, hmac, apikey, gitlab, pagerduty };

namespace WebhookTypeMapper {
AWS_DEVOPSAGENT_API WebhookType GetWebhookTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForWebhookType(WebhookType value);
}  // namespace WebhookTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
