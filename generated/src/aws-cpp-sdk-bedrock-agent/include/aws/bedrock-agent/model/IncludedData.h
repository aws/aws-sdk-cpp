/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgent {
namespace Model {
enum class IncludedData { NOT_SET, ALL_DATA, METADATA_ONLY };

namespace IncludedDataMapper {
AWS_BEDROCKAGENT_API IncludedData GetIncludedDataForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIncludedData(IncludedData value);
}  // namespace IncludedDataMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
