/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>

namespace Aws {
namespace ELBProxy {
namespace Model {
enum class ProxyIpv4Addressability { NOT_SET, off, internet_facing, internal };

namespace ProxyIpv4AddressabilityMapper {
AWS_ELBPROXY_API ProxyIpv4Addressability GetProxyIpv4AddressabilityForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyIpv4Addressability(ProxyIpv4Addressability value);
}  // namespace ProxyIpv4AddressabilityMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
