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
enum class AutoMountStatus { NOT_SET, Failed, Pending, Mounted, NotMounted };

namespace AutoMountStatusMapper {
AWS_LIGHTSAIL_API AutoMountStatus GetAutoMountStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAutoMountStatus(AutoMountStatus value);
}  // namespace AutoMountStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
