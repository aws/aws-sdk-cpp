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
enum class EbsVolumeType { NOT_SET, standard, io1, io2, gp2, sc1, st1, gp3 };

namespace EbsVolumeTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API EbsVolumeType GetEbsVolumeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForEbsVolumeType(EbsVolumeType value);
}  // namespace EbsVolumeTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
