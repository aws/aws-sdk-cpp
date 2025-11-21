/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class AutoProvisionZonesState { NOT_SET, enabled, disabled };

namespace AutoProvisionZonesStateMapper {
AWS_EC2_API AutoProvisionZonesState GetAutoProvisionZonesStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAutoProvisionZonesState(AutoProvisionZonesState value);
}  // namespace AutoProvisionZonesStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
