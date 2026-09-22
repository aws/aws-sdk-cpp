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
enum class SignalType { NOT_SET, LOGS, TRACES };

namespace SignalTypeMapper {
AWS_CLOUDWATCHOMNI_API SignalType GetSignalTypeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForSignalType(SignalType value);
}  // namespace SignalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
