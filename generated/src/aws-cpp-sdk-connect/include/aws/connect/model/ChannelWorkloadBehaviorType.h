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
enum class ChannelWorkloadBehaviorType {
  NOT_SET,
  ROUTE_CURRENT_CHANNEL_CURRENT_WORKLOADTYPE_ONLY,
  ROUTE_CURRENT_CHANNEL_ANY_WORKLOADTYPE_ONLY,
  ROUTE_ANY_CHANNEL_ANY_WORKLOAD_TYPE
};

namespace ChannelWorkloadBehaviorTypeMapper {
AWS_CONNECT_API ChannelWorkloadBehaviorType GetChannelWorkloadBehaviorTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForChannelWorkloadBehaviorType(ChannelWorkloadBehaviorType value);
}  // namespace ChannelWorkloadBehaviorTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
