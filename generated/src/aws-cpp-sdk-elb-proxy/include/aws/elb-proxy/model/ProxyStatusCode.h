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
enum class ProxyStatusCode {
  NOT_SET,
  action_required,
  active,
  create_failed,
  create_in_progress,
  deleted,
  delete_in_progress,
  update_in_progress,
  cancel_update_in_progress
};

namespace ProxyStatusCodeMapper {
AWS_ELBPROXY_API ProxyStatusCode GetProxyStatusCodeForName(const Aws::String& name);

AWS_ELBPROXY_API Aws::String GetNameForProxyStatusCode(ProxyStatusCode value);
}  // namespace ProxyStatusCodeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
