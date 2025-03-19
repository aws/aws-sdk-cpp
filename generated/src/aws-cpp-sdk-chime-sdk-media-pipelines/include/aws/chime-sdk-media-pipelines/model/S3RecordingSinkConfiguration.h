/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/RecordingFileFormat.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The structure that holds the settings for transmitting media to the Amazon S3
   * bucket. These values are used as defaults if
   * <code>S3RecordingSinkRuntimeConfiguration</code> is not specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/S3RecordingSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class S3RecordingSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default URI of the Amazon S3 bucket used as the recording sink.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    S3RecordingSinkConfiguration& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default file format for the media files sent to the Amazon S3 bucket.</p>
     */
    inline RecordingFileFormat GetRecordingFileFormat() const { return m_recordingFileFormat; }
    inline bool RecordingFileFormatHasBeenSet() const { return m_recordingFileFormatHasBeenSet; }
    inline void SetRecordingFileFormat(RecordingFileFormat value) { m_recordingFileFormatHasBeenSet = true; m_recordingFileFormat = value; }
    inline S3RecordingSinkConfiguration& WithRecordingFileFormat(RecordingFileFormat value) { SetRecordingFileFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    RecordingFileFormat m_recordingFileFormat{RecordingFileFormat::NOT_SET};
    bool m_recordingFileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
