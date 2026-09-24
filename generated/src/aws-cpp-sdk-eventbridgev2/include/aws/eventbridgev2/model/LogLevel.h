/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
enum class LogLevel { NOT_SET, OFF, ERROR_, INFO };

namespace LogLevelMapper {
AWS_EVENTBRIDGEV2_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_EVENTBRIDGEV2_API Aws::String GetNameForLogLevel(LogLevel value);
}  // namespace LogLevelMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
