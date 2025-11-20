/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class ExtractionJobStatus { NOT_SET, FAILED };

namespace ExtractionJobStatusMapper {
AWS_BEDROCKAGENTCORE_API ExtractionJobStatus GetExtractionJobStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForExtractionJobStatus(ExtractionJobStatus value);
}  // namespace ExtractionJobStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
