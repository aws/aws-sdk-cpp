/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class ConcatenationSourceType
  {
    NOT_SET,
    MediaCapturePipeline
  };

namespace ConcatenationSourceTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSourceType GetConcatenationSourceTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForConcatenationSourceType(ConcatenationSourceType value);
} // namespace ConcatenationSourceTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
