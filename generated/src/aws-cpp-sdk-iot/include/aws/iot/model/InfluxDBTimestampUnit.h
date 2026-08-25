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
enum class InfluxDBTimestampUnit { NOT_SET, s, ms, us, ns };

namespace InfluxDBTimestampUnitMapper {
AWS_IOT_API InfluxDBTimestampUnit GetInfluxDBTimestampUnitForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForInfluxDBTimestampUnit(InfluxDBTimestampUnit value);
}  // namespace InfluxDBTimestampUnitMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
