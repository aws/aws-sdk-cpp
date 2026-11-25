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
enum class ProxyUpdateType { NOT_SET, update_proxy_configuration };

namespace ProxyUpdateTypeMapper {
AWS_ELBPROXY_API ProxyUpdateType GetProxyUpdateTypeForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyUpdateType(ProxyUpdateType value);
}  // namespace ProxyUpdateTypeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
