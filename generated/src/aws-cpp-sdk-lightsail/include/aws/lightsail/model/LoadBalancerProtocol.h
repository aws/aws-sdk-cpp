/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class LoadBalancerProtocol { NOT_SET, HTTP_HTTPS, HTTP };

namespace LoadBalancerProtocolMapper {
AWS_LIGHTSAIL_API LoadBalancerProtocol GetLoadBalancerProtocolForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerProtocol(LoadBalancerProtocol value);
}  // namespace LoadBalancerProtocolMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
