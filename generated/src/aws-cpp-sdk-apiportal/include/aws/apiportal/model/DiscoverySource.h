/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class DiscoverySource { NOT_SET, API_GATEWAY, ELB, CLOUDFRONT };

namespace DiscoverySourceMapper {
AWS_APIPORTAL_API DiscoverySource GetDiscoverySourceForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDiscoverySource(DiscoverySource value);
}  // namespace DiscoverySourceMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
