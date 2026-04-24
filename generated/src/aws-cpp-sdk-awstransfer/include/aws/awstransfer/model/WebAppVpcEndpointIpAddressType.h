/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class WebAppVpcEndpointIpAddressType { NOT_SET, IPV4, DUALSTACK };

namespace WebAppVpcEndpointIpAddressTypeMapper {
AWS_TRANSFER_API WebAppVpcEndpointIpAddressType GetWebAppVpcEndpointIpAddressTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForWebAppVpcEndpointIpAddressType(WebAppVpcEndpointIpAddressType value);
}  // namespace WebAppVpcEndpointIpAddressTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
