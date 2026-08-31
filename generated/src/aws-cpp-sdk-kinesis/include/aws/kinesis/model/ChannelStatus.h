/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Kinesis {
namespace Model {
enum class ChannelStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, FAILED };

namespace ChannelStatusMapper {
AWS_KINESIS_API ChannelStatus GetChannelStatusForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForChannelStatus(ChannelStatus value);
}  // namespace ChannelStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
