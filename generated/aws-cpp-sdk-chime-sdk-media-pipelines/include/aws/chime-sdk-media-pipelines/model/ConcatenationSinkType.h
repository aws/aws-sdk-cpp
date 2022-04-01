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
  enum class ConcatenationSinkType
  {
    NOT_SET,
    S3Bucket
  };

namespace ConcatenationSinkTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSinkType GetConcatenationSinkTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForConcatenationSinkType(ConcatenationSinkType value);
} // namespace ConcatenationSinkTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
