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
enum class AIAgentType { NOT_SET, THIRD_PARTY };

namespace AIAgentTypeMapper {
AWS_CONNECT_API AIAgentType GetAIAgentTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAIAgentType(AIAgentType value);
}  // namespace AIAgentTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
