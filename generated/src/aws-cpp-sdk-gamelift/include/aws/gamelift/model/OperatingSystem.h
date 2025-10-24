/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class OperatingSystem { NOT_SET, WINDOWS_2012, AMAZON_LINUX, AMAZON_LINUX_2, WINDOWS_2016, AMAZON_LINUX_2023 };

namespace OperatingSystemMapper {
AWS_GAMELIFT_API OperatingSystem GetOperatingSystemForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForOperatingSystem(OperatingSystem value);
}  // namespace OperatingSystemMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
