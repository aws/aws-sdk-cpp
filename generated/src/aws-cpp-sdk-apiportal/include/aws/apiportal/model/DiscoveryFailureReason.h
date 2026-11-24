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
enum class DiscoveryFailureReason { NOT_SET, ACCESS_DENIED, DEPENDENCY_ERROR, THROTTLED, INVALID_CONFIGURATION, INTERNAL_ERROR };

namespace DiscoveryFailureReasonMapper {
AWS_APIPORTAL_API DiscoveryFailureReason GetDiscoveryFailureReasonForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForDiscoveryFailureReason(DiscoveryFailureReason value);
}  // namespace DiscoveryFailureReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
