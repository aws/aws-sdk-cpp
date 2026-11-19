/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistry {
namespace Model {
enum class SearchType { NOT_SET, HYBRID, SEMANTIC, KEYWORD };

namespace SearchTypeMapper {
AWS_AGENTREGISTRY_API SearchType GetSearchTypeForName(const Aws::String& name);

AWS_AGENTREGISTRY_API Aws::String GetNameForSearchType(SearchType value);
}  // namespace SearchTypeMapper
}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
