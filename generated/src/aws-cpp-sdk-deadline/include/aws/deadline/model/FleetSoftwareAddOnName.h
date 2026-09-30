/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class FleetSoftwareAddOnName { NOT_SET, docker };

namespace FleetSoftwareAddOnNameMapper {
AWS_DEADLINE_API FleetSoftwareAddOnName GetFleetSoftwareAddOnNameForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForFleetSoftwareAddOnName(FleetSoftwareAddOnName value);
}  // namespace FleetSoftwareAddOnNameMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
