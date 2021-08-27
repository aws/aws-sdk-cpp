/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class PropagateTags
  {
    NOT_SET,
    TASK_DEFINITION,
    SERVICE
  };

namespace PropagateTagsMapper
{
AWS_ECS_API PropagateTags GetPropagateTagsForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForPropagateTags(PropagateTags value);
} // namespace PropagateTagsMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
