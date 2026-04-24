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
enum class InstanceSnapshotState { NOT_SET, pending, error, available };

namespace InstanceSnapshotStateMapper {
AWS_LIGHTSAIL_API InstanceSnapshotState GetInstanceSnapshotStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForInstanceSnapshotState(InstanceSnapshotState value);
}  // namespace InstanceSnapshotStateMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
