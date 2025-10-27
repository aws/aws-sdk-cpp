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
enum class PropagateMITags { NOT_SET, CAPACITY_PROVIDER, NONE };

namespace PropagateMITagsMapper {
AWS_ECS_API PropagateMITags GetPropagateMITagsForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForPropagateMITags(PropagateMITags value);
}  // namespace PropagateMITagsMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
