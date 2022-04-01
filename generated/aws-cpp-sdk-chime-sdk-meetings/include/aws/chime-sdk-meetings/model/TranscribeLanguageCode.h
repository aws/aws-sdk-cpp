﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{
  enum class TranscribeLanguageCode
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
    pt_BR,
    ja_JP,
    ko_KR,
    zh_CN
  };

namespace TranscribeLanguageCodeMapper
{
AWS_CHIMESDKMEETINGS_API TranscribeLanguageCode GetTranscribeLanguageCodeForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForTranscribeLanguageCode(TranscribeLanguageCode value);
} // namespace TranscribeLanguageCodeMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
