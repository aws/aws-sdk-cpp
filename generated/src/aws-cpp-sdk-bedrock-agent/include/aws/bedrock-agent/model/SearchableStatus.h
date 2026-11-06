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
enum class SearchableStatus { NOT_SET, ENABLED, DISABLED };

namespace SearchableStatusMapper {
AWS_BEDROCKAGENT_API SearchableStatus GetSearchableStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForSearchableStatus(SearchableStatus value);
}  // namespace SearchableStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
