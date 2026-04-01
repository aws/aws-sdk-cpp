/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class DaemonPropagateTags { NOT_SET, DAEMON, NONE };

namespace DaemonPropagateTagsMapper {
AWS_ECS_API DaemonPropagateTags GetDaemonPropagateTagsForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDaemonPropagateTags(DaemonPropagateTags value);
}  // namespace DaemonPropagateTagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
