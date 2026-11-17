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
enum class QueueStartingPositionType { NOT_SET, TRIM_HORIZON, LATEST, AT_TIMESTAMP };

namespace QueueStartingPositionTypeMapper {
AWS_KINESIS_API QueueStartingPositionType GetQueueStartingPositionTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForQueueStartingPositionType(QueueStartingPositionType value);
}  // namespace QueueStartingPositionTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
