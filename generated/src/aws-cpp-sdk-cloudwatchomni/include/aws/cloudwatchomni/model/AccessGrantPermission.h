/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class AccessGrantPermission { NOT_SET, SPACE_ADMIN, READ, READ_WRITE_DELETE, CUSTOM };

namespace AccessGrantPermissionMapper {
AWS_CLOUDWATCHOMNI_API AccessGrantPermission GetAccessGrantPermissionForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForAccessGrantPermission(AccessGrantPermission value);
}  // namespace AccessGrantPermissionMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
