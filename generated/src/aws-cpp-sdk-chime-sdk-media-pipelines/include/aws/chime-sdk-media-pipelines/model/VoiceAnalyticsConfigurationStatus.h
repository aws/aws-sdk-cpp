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
  enum class VoiceAnalyticsConfigurationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace VoiceAnalyticsConfigurationStatusMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API VoiceAnalyticsConfigurationStatus GetVoiceAnalyticsConfigurationStatusForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForVoiceAnalyticsConfigurationStatus(VoiceAnalyticsConfigurationStatus value);
} // namespace VoiceAnalyticsConfigurationStatusMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
