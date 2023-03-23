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
  enum class RecordingFileFormat
  {
    NOT_SET,
    Wav,
    Opus
  };

namespace RecordingFileFormatMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API RecordingFileFormat GetRecordingFileFormatForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForRecordingFileFormat(RecordingFileFormat value);
} // namespace RecordingFileFormatMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
