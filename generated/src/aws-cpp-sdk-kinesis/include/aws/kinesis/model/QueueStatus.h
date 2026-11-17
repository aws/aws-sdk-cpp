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
enum class QueueStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING };

namespace QueueStatusMapper {
AWS_KINESIS_API QueueStatus GetQueueStatusForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForQueueStatus(QueueStatus value);
}  // namespace QueueStatusMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
