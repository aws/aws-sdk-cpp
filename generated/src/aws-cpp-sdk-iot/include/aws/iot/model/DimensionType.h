/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class DimensionType { NOT_SET, TOPIC_FILTER };

namespace DimensionTypeMapper {
AWS_IOT_API DimensionType GetDimensionTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDimensionType(DimensionType value);
}  // namespace DimensionTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
