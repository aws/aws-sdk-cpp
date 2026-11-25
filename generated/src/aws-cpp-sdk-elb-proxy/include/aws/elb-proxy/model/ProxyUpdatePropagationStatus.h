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
enum class ProxyUpdatePropagationStatus { NOT_SET, in_progress, complete, skipped, failed, cancelled };

namespace ProxyUpdatePropagationStatusMapper {
AWS_ELBPROXY_API ProxyUpdatePropagationStatus GetProxyUpdatePropagationStatusForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyUpdatePropagationStatus(ProxyUpdatePropagationStatus value);
}  // namespace ProxyUpdatePropagationStatusMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
