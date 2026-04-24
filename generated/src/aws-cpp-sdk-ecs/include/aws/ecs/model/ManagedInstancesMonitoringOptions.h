/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class ManagedInstancesMonitoringOptions { NOT_SET, BASIC, DETAILED };

namespace ManagedInstancesMonitoringOptionsMapper {
AWS_ECS_API ManagedInstancesMonitoringOptions GetManagedInstancesMonitoringOptionsForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForManagedInstancesMonitoringOptions(ManagedInstancesMonitoringOptions value);
}  // namespace ManagedInstancesMonitoringOptionsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
