/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{
  enum class PreviewStatus
  {
    NOT_SET,
    WORK_IN_PROGRESS,
    COMPLETED
  };

namespace PreviewStatusMapper
{
AWS_INSPECTOR_API PreviewStatus GetPreviewStatusForName(const Aws::String& name);

AWS_INSPECTOR_API Aws::String GetNameForPreviewStatus(PreviewStatus value);
} // namespace PreviewStatusMapper
} // namespace Model
} // namespace Inspector
} // namespace Aws
