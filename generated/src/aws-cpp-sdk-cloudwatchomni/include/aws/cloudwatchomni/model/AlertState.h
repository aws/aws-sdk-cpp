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
enum class AlertState { NOT_SET, OK, WARNING, CRITICAL, NODATA };

namespace AlertStateMapper {
AWS_CLOUDWATCHOMNI_API AlertState GetAlertStateForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAlertState(AlertState value);
}  // namespace AlertStateMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
