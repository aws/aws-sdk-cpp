/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/S3RecordingSinkRuntimeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

S3RecordingSinkRuntimeConfiguration::S3RecordingSinkRuntimeConfiguration() : 
    m_destinationHasBeenSet(false),
    m_recordingFileFormat(RecordingFileFormat::NOT_SET),
    m_recordingFileFormatHasBeenSet(false)
{
}

S3RecordingSinkRuntimeConfiguration::S3RecordingSinkRuntimeConfiguration(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_recordingFileFormat(RecordingFileFormat::NOT_SET),
    m_recordingFileFormatHasBeenSet(false)
{
  *this = jsonValue;
}

S3RecordingSinkRuntimeConfiguration& S3RecordingSinkRuntimeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordingFileFormat"))
  {
    m_recordingFileFormat = RecordingFileFormatMapper::GetRecordingFileFormatForName(jsonValue.GetString("RecordingFileFormat"));

    m_recordingFileFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue S3RecordingSinkRuntimeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_recordingFileFormatHasBeenSet)
  {
   payload.WithString("RecordingFileFormat", RecordingFileFormatMapper::GetNameForRecordingFileFormat(m_recordingFileFormat));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
