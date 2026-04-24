/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class TelemetrySinkType { NOT_SET, KINESIS_DATA_STREAM };

namespace TelemetrySinkTypeMapper {
AWS_GROUNDSTATION_API TelemetrySinkType GetTelemetrySinkTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForTelemetrySinkType(TelemetrySinkType value);
}  // namespace TelemetrySinkTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
