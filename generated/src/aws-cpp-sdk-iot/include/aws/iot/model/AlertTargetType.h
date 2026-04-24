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
enum class AlertTargetType { NOT_SET, SNS };

namespace AlertTargetTypeMapper {
AWS_IOT_API AlertTargetType GetAlertTargetTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAlertTargetType(AlertTargetType value);
}  // namespace AlertTargetTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
