/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws {
namespace Macie2 {
namespace Model {
enum class AutomatedDiscoveryStatus { NOT_SET, ENABLED, DISABLED };

namespace AutomatedDiscoveryStatusMapper {
AWS_MACIE2_API AutomatedDiscoveryStatus GetAutomatedDiscoveryStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAutomatedDiscoveryStatus(AutomatedDiscoveryStatus value);
}  // namespace AutomatedDiscoveryStatusMapper
}  // namespace Model
}  // namespace Macie2
}  // namespace Aws
