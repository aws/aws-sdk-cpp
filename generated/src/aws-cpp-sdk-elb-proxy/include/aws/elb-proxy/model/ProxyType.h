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
enum class ProxyType { NOT_SET, envoy };

namespace ProxyTypeMapper {
AWS_ELBPROXY_API ProxyType GetProxyTypeForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyType(ProxyType value);
}  // namespace ProxyTypeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
