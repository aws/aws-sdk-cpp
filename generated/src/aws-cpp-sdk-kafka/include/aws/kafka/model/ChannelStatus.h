/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class ChannelStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, FAILED, SUSPENDING, SUSPENDED };

namespace ChannelStatusMapper {
AWS_KAFKA_API ChannelStatus GetChannelStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForChannelStatus(ChannelStatus value);
}  // namespace ChannelStatusMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
