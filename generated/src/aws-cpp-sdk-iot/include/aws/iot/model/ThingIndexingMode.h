/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class ThingIndexingMode { NOT_SET, OFF, REGISTRY, REGISTRY_AND_SHADOW };

namespace ThingIndexingModeMapper {
AWS_IOT_API ThingIndexingMode GetThingIndexingModeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForThingIndexingMode(ThingIndexingMode value);
}  // namespace ThingIndexingModeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
