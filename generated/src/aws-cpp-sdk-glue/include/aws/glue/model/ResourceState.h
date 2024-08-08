/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ResourceState
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    SUCCESS,
    STOPPED,
    FAILED
  };

namespace ResourceStateMapper
{
AWS_GLUE_API ResourceState GetResourceStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForResourceState(ResourceState value);
} // namespace ResourceStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
