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
enum class TargetType { NOT_SET, BUILT_IN, NONE };

namespace TargetTypeMapper {
AWS_KINESIS_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_KINESIS_API Aws::String GetNameForTargetType(TargetType value);
}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
