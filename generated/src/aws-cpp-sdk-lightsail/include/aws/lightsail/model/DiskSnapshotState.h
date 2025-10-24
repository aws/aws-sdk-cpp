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
enum class DiskSnapshotState { NOT_SET, pending, completed, error, unknown };

namespace DiskSnapshotStateMapper {
AWS_LIGHTSAIL_API DiskSnapshotState GetDiskSnapshotStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForDiskSnapshotState(DiskSnapshotState value);
}  // namespace DiskSnapshotStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
