/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class LifecycleExecutionResourceStatus
  {
    NOT_SET,
    FAILED,
    IN_PROGRESS,
    SKIPPED,
    SUCCESS
  };

namespace LifecycleExecutionResourceStatusMapper
{
AWS_IMAGEBUILDER_API LifecycleExecutionResourceStatus GetLifecycleExecutionResourceStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecycleExecutionResourceStatus(LifecycleExecutionResourceStatus value);
} // namespace LifecycleExecutionResourceStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
