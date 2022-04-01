/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class MediaFormat
  {
    NOT_SET,
    mp3,
    mp4,
    wav,
    flac,
    ogg,
    amr,
    webm
  };

namespace MediaFormatMapper
{
AWS_TRANSCRIBESERVICE_API MediaFormat GetMediaFormatForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForMediaFormat(MediaFormat value);
} // namespace MediaFormatMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
