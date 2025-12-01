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
enum class FlowModuleType { NOT_SET, MCP };

namespace FlowModuleTypeMapper {
AWS_CONNECT_API FlowModuleType GetFlowModuleTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFlowModuleType(FlowModuleType value);
}  // namespace FlowModuleTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
