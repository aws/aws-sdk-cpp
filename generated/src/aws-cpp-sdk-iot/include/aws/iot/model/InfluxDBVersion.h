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
enum class InfluxDBVersion { NOT_SET, V2, V3 };

namespace InfluxDBVersionMapper {
AWS_IOT_API InfluxDBVersion GetInfluxDBVersionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForInfluxDBVersion(InfluxDBVersion value);
}  // namespace InfluxDBVersionMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
