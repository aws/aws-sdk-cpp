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
enum class InstanceHealthStatusDetailValue { NOT_SET, passed, failed, insufficient_data, initializing };

namespace InstanceHealthStatusDetailValueMapper {
AWS_LIGHTSAIL_API InstanceHealthStatusDetailValue GetInstanceHealthStatusDetailValueForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceHealthStatusDetailValue(InstanceHealthStatusDetailValue value);
}  // namespace InstanceHealthStatusDetailValueMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
