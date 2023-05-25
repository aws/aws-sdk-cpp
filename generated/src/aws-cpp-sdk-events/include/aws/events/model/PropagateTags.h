/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
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
AWS_CLOUDWATCHEVENTS_API PropagateTags GetPropagateTagsForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForPropagateTags(PropagateTags value);
} // namespace PropagateTagsMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
