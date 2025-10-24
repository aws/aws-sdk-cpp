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
enum class AggregationTypeName { NOT_SET, Statistics, Percentiles, Cardinality };

namespace AggregationTypeNameMapper {
AWS_IOT_API AggregationTypeName GetAggregationTypeNameForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAggregationTypeName(AggregationTypeName value);
}  // namespace AggregationTypeNameMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
