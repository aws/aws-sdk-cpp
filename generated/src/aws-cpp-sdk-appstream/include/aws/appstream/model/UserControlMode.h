/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class UserControlMode { NOT_SET, VIEW_ONLY, VIEW_STOP, DISABLED };

namespace UserControlModeMapper {
AWS_APPSTREAM_API UserControlMode GetUserControlModeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForUserControlMode(UserControlMode value);
}  // namespace UserControlModeMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
