/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>

namespace Aws {
namespace KinesisVideo {
namespace Model {
enum class ComparisonOperator { NOT_SET, BEGINS_WITH };

namespace ComparisonOperatorMapper {
AWS_KINESISVIDEO_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
