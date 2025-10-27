/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Model {
enum class CustomRoutingAcceleratorStatus { NOT_SET, DEPLOYED, IN_PROGRESS };

namespace CustomRoutingAcceleratorStatusMapper {
AWS_GLOBALACCELERATOR_API CustomRoutingAcceleratorStatus GetCustomRoutingAcceleratorStatusForName(const Aws::String& name);

AWS_GLOBALACCELERATOR_API Aws::String GetNameForCustomRoutingAcceleratorStatus(CustomRoutingAcceleratorStatus value);
}  // namespace CustomRoutingAcceleratorStatusMapper
}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
