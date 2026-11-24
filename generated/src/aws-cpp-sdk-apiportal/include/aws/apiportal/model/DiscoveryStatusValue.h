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
enum class DiscoveryStatusValue { NOT_SET, STOPPED, PROVISIONING, RUNNING, FAILED };

namespace DiscoveryStatusValueMapper {
AWS_APIPORTAL_API DiscoveryStatusValue GetDiscoveryStatusValueForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDiscoveryStatusValue(DiscoveryStatusValue value);
}  // namespace DiscoveryStatusValueMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
