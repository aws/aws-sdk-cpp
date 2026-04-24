/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class AggregateType { NOT_SET, AVERAGE, COUNT, MAXIMUM, MINIMUM, SUM, STANDARD_DEVIATION };

namespace AggregateTypeMapper {
AWS_IOTSITEWISE_API AggregateType GetAggregateTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAggregateType(AggregateType value);
}  // namespace AggregateTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
