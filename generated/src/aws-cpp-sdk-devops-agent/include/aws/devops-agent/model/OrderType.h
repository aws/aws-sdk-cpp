/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class OrderType { NOT_SET, ASC, DESC };

namespace OrderTypeMapper {
AWS_DEVOPSAGENT_API OrderType GetOrderTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForOrderType(OrderType value);
}  // namespace OrderTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
