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
enum class DiskState { NOT_SET, pending, error, available, in_use, unknown };

namespace DiskStateMapper {
AWS_LIGHTSAIL_API DiskState GetDiskStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForDiskState(DiskState value);
}  // namespace DiskStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
