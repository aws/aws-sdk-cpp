/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class RuleCapabilityTier { NOT_SET, GenerativeAI };

namespace RuleCapabilityTierMapper {
AWS_CONNECT_API RuleCapabilityTier GetRuleCapabilityTierForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRuleCapabilityTier(RuleCapabilityTier value);
}  // namespace RuleCapabilityTierMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
