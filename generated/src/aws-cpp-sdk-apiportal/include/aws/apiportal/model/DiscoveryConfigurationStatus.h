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
enum class DiscoveryConfigurationStatus { NOT_SET, DISABLED, ENABLED, UPDATING };

namespace DiscoveryConfigurationStatusMapper {
AWS_APIPORTAL_API DiscoveryConfigurationStatus GetDiscoveryConfigurationStatusForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDiscoveryConfigurationStatus(DiscoveryConfigurationStatus value);
}  // namespace DiscoveryConfigurationStatusMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
