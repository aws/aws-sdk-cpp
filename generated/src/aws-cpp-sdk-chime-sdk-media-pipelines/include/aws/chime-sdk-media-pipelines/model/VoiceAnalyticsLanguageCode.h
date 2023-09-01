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
  enum class VoiceAnalyticsLanguageCode
  {
    NOT_SET,
    en_US
  };

namespace VoiceAnalyticsLanguageCodeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API VoiceAnalyticsLanguageCode GetVoiceAnalyticsLanguageCodeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForVoiceAnalyticsLanguageCode(VoiceAnalyticsLanguageCode value);
} // namespace VoiceAnalyticsLanguageCodeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
