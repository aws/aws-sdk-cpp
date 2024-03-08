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
  enum class LifecycleExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    CANCELLED,
    CANCELLING,
    FAILED,
    SUCCESS,
    PENDING
  };

namespace LifecycleExecutionStatusMapper
{
AWS_IMAGEBUILDER_API LifecycleExecutionStatus GetLifecycleExecutionStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecycleExecutionStatus(LifecycleExecutionStatus value);
} // namespace LifecycleExecutionStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
