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
enum class EventChannelType { NOT_SET, webhook };

namespace EventChannelTypeMapper {
AWS_DEVOPSAGENT_API EventChannelType GetEventChannelTypeForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForEventChannelType(EventChannelType value);
}  // namespace EventChannelTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
