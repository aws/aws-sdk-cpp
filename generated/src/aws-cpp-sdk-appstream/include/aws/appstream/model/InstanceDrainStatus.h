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
enum class InstanceDrainStatus { NOT_SET, ACTIVE, DRAINING, NOT_APPLICABLE };

namespace InstanceDrainStatusMapper {
AWS_APPSTREAM_API InstanceDrainStatus GetInstanceDrainStatusForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForInstanceDrainStatus(InstanceDrainStatus value);
}  // namespace InstanceDrainStatusMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
