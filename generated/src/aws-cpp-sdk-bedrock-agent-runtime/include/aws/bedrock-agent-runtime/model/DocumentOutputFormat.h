/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class DocumentOutputFormat { NOT_SET, RAW, EXTRACTED };

namespace DocumentOutputFormatMapper {
AWS_BEDROCKAGENTRUNTIME_API DocumentOutputFormat GetDocumentOutputFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForDocumentOutputFormat(DocumentOutputFormat value);
}  // namespace DocumentOutputFormatMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
