/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#if defined(_WIN32) && defined(interface)
#undef interface
#endif

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class NetworkInterfaceType
  {
    NOT_SET,
    interface,
    natGateway,
    efa,
    trunk,
    load_balancer,
    network_load_balancer,
    vpc_endpoint,
    branch,
    transit_gateway,
    lambda,
    quicksight,
    global_accelerator_managed,
    api_gateway_managed,
    gateway_load_balancer,
    gateway_load_balancer_endpoint,
    iot_rules_managed,
    aws_codestar_connections_managed
  };

namespace NetworkInterfaceTypeMapper
{
AWS_EC2_API NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType value);
} // namespace NetworkInterfaceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
