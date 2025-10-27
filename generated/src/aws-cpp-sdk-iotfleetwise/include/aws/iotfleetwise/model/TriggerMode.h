/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

namespace Aws {
namespace IoTFleetWise {
namespace Model {
enum class TriggerMode { NOT_SET, ALWAYS, RISING_EDGE };

namespace TriggerModeMapper {
AWS_IOTFLEETWISE_API TriggerMode GetTriggerModeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForTriggerMode(TriggerMode value);
}  // namespace TriggerModeMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
