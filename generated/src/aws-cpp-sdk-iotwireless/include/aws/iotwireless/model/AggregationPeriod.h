﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class AggregationPeriod { NOT_SET, OneHour, OneDay, OneWeek };

namespace AggregationPeriodMapper {
AWS_IOTWIRELESS_API AggregationPeriod GetAggregationPeriodForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForAggregationPeriod(AggregationPeriod value);
}  // namespace AggregationPeriodMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
