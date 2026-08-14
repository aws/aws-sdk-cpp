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
enum class DocumentAclMembershipType { NOT_SET, KNOWLEDGE_BASE, DATA_SOURCE };

namespace DocumentAclMembershipTypeMapper {
AWS_BEDROCKAGENTRUNTIME_API DocumentAclMembershipType GetDocumentAclMembershipTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForDocumentAclMembershipType(DocumentAclMembershipType value);
}  // namespace DocumentAclMembershipTypeMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
