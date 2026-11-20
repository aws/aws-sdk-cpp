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
enum class NetworkFirewallConnectivityType { NOT_SET, flexible, outbound_only, bidirectional, exclude, az_unsupported };

namespace NetworkFirewallConnectivityTypeMapper {
AWS_EC2_API NetworkFirewallConnectivityType GetNetworkFirewallConnectivityTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkFirewallConnectivityType(NetworkFirewallConnectivityType value);
}  // namespace NetworkFirewallConnectivityTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
