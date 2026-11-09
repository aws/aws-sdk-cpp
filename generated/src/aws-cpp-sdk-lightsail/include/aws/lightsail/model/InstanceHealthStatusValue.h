/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class InstanceHealthStatusValue { NOT_SET, ok, impaired, initializing, insufficient_data, not_applicable };

namespace InstanceHealthStatusValueMapper {
AWS_LIGHTSAIL_API InstanceHealthStatusValue GetInstanceHealthStatusValueForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceHealthStatusValue(InstanceHealthStatusValue value);
}  // namespace InstanceHealthStatusValueMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
