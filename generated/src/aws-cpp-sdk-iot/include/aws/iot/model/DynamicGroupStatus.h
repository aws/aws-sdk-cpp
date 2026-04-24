/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class DynamicGroupStatus { NOT_SET, ACTIVE, BUILDING, REBUILDING };

namespace DynamicGroupStatusMapper {
AWS_IOT_API DynamicGroupStatus GetDynamicGroupStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForDynamicGroupStatus(DynamicGroupStatus value);
}  // namespace DynamicGroupStatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
