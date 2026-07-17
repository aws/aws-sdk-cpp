/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ChimeSDKVoice {
namespace Model {
enum class CallDistributionType { NOT_SET, PriorityWeightedDistribution, LoadBalancedDistribution };

namespace CallDistributionTypeMapper {
AWS_CHIMESDKVOICE_API CallDistributionType GetCallDistributionTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForCallDistributionType(CallDistributionType value);
}  // namespace CallDistributionTypeMapper
}  // namespace Model
}  // namespace ChimeSDKVoice
}  // namespace Aws
