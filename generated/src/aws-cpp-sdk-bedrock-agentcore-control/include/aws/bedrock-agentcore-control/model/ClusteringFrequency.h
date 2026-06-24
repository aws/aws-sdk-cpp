/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class ClusteringFrequency { NOT_SET, DAILY, WEEKLY, MONTHLY };

namespace ClusteringFrequencyMapper {
AWS_BEDROCKAGENTCORECONTROL_API ClusteringFrequency GetClusteringFrequencyForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForClusteringFrequency(ClusteringFrequency value);
}  // namespace ClusteringFrequencyMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
