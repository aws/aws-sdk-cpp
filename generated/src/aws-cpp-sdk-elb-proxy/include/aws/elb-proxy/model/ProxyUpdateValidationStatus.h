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
enum class ProxyUpdateValidationStatus { NOT_SET, not_validated, valid, invalid };

namespace ProxyUpdateValidationStatusMapper {
AWS_ELBPROXY_API ProxyUpdateValidationStatus GetProxyUpdateValidationStatusForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyUpdateValidationStatus(ProxyUpdateValidationStatus value);
}  // namespace ProxyUpdateValidationStatusMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
