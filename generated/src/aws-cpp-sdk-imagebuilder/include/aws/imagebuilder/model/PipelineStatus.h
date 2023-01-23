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
  enum class PipelineStatus
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace PipelineStatusMapper
{
AWS_IMAGEBUILDER_API PipelineStatus GetPipelineStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForPipelineStatus(PipelineStatus value);
} // namespace PipelineStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
