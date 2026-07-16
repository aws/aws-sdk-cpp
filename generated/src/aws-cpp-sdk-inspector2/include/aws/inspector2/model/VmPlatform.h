/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class VmPlatform { NOT_SET, WINDOWS, LINUX, UNKNOWN };

namespace VmPlatformMapper {
AWS_INSPECTOR2_API VmPlatform GetVmPlatformForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForVmPlatform(VmPlatform value);
}  // namespace VmPlatformMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
