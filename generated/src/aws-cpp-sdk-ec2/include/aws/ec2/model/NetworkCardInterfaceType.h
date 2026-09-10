/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#if defined(_WIN32) && defined(interface)
#undef interface
#endif

namespace Aws {
namespace EC2 {
namespace Model {
enum class NetworkCardInterfaceType { NOT_SET, interface, efa, efa_only, secondary };

namespace NetworkCardInterfaceTypeMapper {
AWS_EC2_API NetworkCardInterfaceType GetNetworkCardInterfaceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForNetworkCardInterfaceType(NetworkCardInterfaceType value);
}  // namespace NetworkCardInterfaceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
