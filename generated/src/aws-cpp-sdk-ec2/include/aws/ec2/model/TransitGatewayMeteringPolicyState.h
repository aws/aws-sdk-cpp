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
enum class TransitGatewayMeteringPolicyState { NOT_SET, available, deleted, pending, modifying, deleting };

namespace TransitGatewayMeteringPolicyStateMapper {
AWS_EC2_API TransitGatewayMeteringPolicyState GetTransitGatewayMeteringPolicyStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayMeteringPolicyState(TransitGatewayMeteringPolicyState value);
}  // namespace TransitGatewayMeteringPolicyStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
