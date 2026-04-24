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
enum class BooleanComparisonType { NOT_SET, IS_TRUE, IS_FALSE };

namespace BooleanComparisonTypeMapper {
AWS_CONNECT_API BooleanComparisonType GetBooleanComparisonTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForBooleanComparisonType(BooleanComparisonType value);
}  // namespace BooleanComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
