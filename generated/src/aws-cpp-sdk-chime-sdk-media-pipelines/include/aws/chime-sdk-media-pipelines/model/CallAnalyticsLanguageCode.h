﻿/**
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
  enum class CallAnalyticsLanguageCode
  {
    NOT_SET,
    en_US,
    en_GB,
    es_US,
    fr_CA,
    fr_FR,
    en_AU,
    it_IT,
    de_DE,
    pt_BR
  };

namespace CallAnalyticsLanguageCodeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API CallAnalyticsLanguageCode GetCallAnalyticsLanguageCodeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForCallAnalyticsLanguageCode(CallAnalyticsLanguageCode value);
} // namespace CallAnalyticsLanguageCodeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
