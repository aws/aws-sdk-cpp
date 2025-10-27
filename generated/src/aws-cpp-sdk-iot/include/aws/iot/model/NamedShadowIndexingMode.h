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
enum class NamedShadowIndexingMode { NOT_SET, OFF, ON };

namespace NamedShadowIndexingModeMapper {
AWS_IOT_API NamedShadowIndexingMode GetNamedShadowIndexingModeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForNamedShadowIndexingMode(NamedShadowIndexingMode value);
}  // namespace NamedShadowIndexingModeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
