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
  enum class SentimentType
  {
    NOT_SET,
    NEGATIVE
  };

namespace SentimentTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API SentimentType GetSentimentTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForSentimentType(SentimentType value);
} // namespace SentimentTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
