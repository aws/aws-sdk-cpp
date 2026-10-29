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
enum class InstanceHealthStatusDetailName { NOT_SET, reachability };

namespace InstanceHealthStatusDetailNameMapper {
AWS_LIGHTSAIL_API InstanceHealthStatusDetailName GetInstanceHealthStatusDetailNameForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceHealthStatusDetailName(InstanceHealthStatusDetailName value);
}  // namespace InstanceHealthStatusDetailNameMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
