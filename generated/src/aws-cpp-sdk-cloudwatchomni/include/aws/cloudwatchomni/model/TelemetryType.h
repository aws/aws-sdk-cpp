/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class TelemetryType { NOT_SET, LOGS, TRACES };

namespace TelemetryTypeMapper {
AWS_CLOUDWATCHOMNI_API TelemetryType GetTelemetryTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForTelemetryType(TelemetryType value);
}  // namespace TelemetryTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
