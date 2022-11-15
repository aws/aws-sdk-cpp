/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class PropagateTags
  {
    NOT_SET,
    TASK_DEFINITION
  };

namespace PropagateTagsMapper
{
AWS_SCHEDULER_API PropagateTags GetPropagateTagsForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForPropagateTags(PropagateTags value);
} // namespace PropagateTagsMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
