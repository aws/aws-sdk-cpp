/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
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
AWS_PIPES_API PropagateTags GetPropagateTagsForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForPropagateTags(PropagateTags value);
} // namespace PropagateTagsMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
