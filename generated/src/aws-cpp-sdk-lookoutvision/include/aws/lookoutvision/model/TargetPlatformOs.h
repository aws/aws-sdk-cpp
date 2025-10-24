/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>

namespace Aws {
namespace LookoutforVision {
namespace Model {
enum class TargetPlatformOs { NOT_SET, LINUX };

namespace TargetPlatformOsMapper {
AWS_LOOKOUTFORVISION_API TargetPlatformOs GetTargetPlatformOsForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForTargetPlatformOs(TargetPlatformOs value);
}  // namespace TargetPlatformOsMapper
}  // namespace Model
}  // namespace LookoutforVision
}  // namespace Aws
