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
enum class Signal { NOT_SET, LOGS, METRICS, TRACES, CONFIG, UNKNOWN };

namespace SignalMapper {
AWS_CLOUDWATCHOMNI_API Signal GetSignalForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForSignal(Signal value);
}  // namespace SignalMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
