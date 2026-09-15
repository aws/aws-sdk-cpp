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
enum class ProxyMode { NOT_SET, NONE, PROXY_PROTOCOL_V2_ENFORCED };

namespace ProxyModeMapper {
AWS_TRANSFER_API ProxyMode GetProxyModeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForProxyMode(ProxyMode value);
}  // namespace ProxyModeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
