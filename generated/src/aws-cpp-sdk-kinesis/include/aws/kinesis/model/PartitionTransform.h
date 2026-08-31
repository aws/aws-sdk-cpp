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
enum class PartitionTransform { NOT_SET, TIME_HOUR };

namespace PartitionTransformMapper {
AWS_KINESIS_API PartitionTransform GetPartitionTransformForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForPartitionTransform(PartitionTransform value);
}  // namespace PartitionTransformMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
