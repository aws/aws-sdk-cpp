/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class AggregationThresholdType { NOT_SET, COUNT_DISTINCT };

namespace AggregationThresholdTypeMapper {
AWS_CLEANROOMS_API AggregationThresholdType GetAggregationThresholdTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAggregationThresholdType(AggregationThresholdType value);
}  // namespace AggregationThresholdTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
