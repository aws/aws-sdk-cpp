/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RecordingMode.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>An object representing a configuration of thumbnails for recorded
   * video.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ThumbnailConfiguration">AWS
   * API Reference</a></p>
   */
  class ThumbnailConfiguration
  {
  public:
    AWS_IVS_API ThumbnailConfiguration();
    AWS_IVS_API ThumbnailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API ThumbnailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline const RecordingMode& GetRecordingMode() const{ return m_recordingMode; }

    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline bool RecordingModeHasBeenSet() const { return m_recordingModeHasBeenSet; }

    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline void SetRecordingMode(const RecordingMode& value) { m_recordingModeHasBeenSet = true; m_recordingMode = value; }

    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline void SetRecordingMode(RecordingMode&& value) { m_recordingModeHasBeenSet = true; m_recordingMode = std::move(value); }

    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline ThumbnailConfiguration& WithRecordingMode(const RecordingMode& value) { SetRecordingMode(value); return *this;}

    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline ThumbnailConfiguration& WithRecordingMode(RecordingMode&& value) { SetRecordingMode(std::move(value)); return *this;}


    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * (and required) only if <code>recordingMode</code> is <code>INTERVAL</code>.
     * Default: 60.</p> <p> <b>Important:</b> Setting a value for
     * <code>targetIntervalSeconds</code> does not guarantee that thumbnails are
     * generated at the specified interval. For thumbnails to be generated at the
     * <code>targetIntervalSeconds</code> interval, the <code>IDR/Keyframe</code> value
     * for the input video must be less than the <code>targetIntervalSeconds</code>
     * value. See <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/streaming-config.html">
     * Amazon IVS Streaming Configuration</a> for information on setting
     * <code>IDR/Keyframe</code> to the recommended value in video-encoder
     * settings.</p>
     */
    inline long long GetTargetIntervalSeconds() const{ return m_targetIntervalSeconds; }

    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * (and required) only if <code>recordingMode</code> is <code>INTERVAL</code>.
     * Default: 60.</p> <p> <b>Important:</b> Setting a value for
     * <code>targetIntervalSeconds</code> does not guarantee that thumbnails are
     * generated at the specified interval. For thumbnails to be generated at the
     * <code>targetIntervalSeconds</code> interval, the <code>IDR/Keyframe</code> value
     * for the input video must be less than the <code>targetIntervalSeconds</code>
     * value. See <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/streaming-config.html">
     * Amazon IVS Streaming Configuration</a> for information on setting
     * <code>IDR/Keyframe</code> to the recommended value in video-encoder
     * settings.</p>
     */
    inline bool TargetIntervalSecondsHasBeenSet() const { return m_targetIntervalSecondsHasBeenSet; }

    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * (and required) only if <code>recordingMode</code> is <code>INTERVAL</code>.
     * Default: 60.</p> <p> <b>Important:</b> Setting a value for
     * <code>targetIntervalSeconds</code> does not guarantee that thumbnails are
     * generated at the specified interval. For thumbnails to be generated at the
     * <code>targetIntervalSeconds</code> interval, the <code>IDR/Keyframe</code> value
     * for the input video must be less than the <code>targetIntervalSeconds</code>
     * value. See <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/streaming-config.html">
     * Amazon IVS Streaming Configuration</a> for information on setting
     * <code>IDR/Keyframe</code> to the recommended value in video-encoder
     * settings.</p>
     */
    inline void SetTargetIntervalSeconds(long long value) { m_targetIntervalSecondsHasBeenSet = true; m_targetIntervalSeconds = value; }

    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * (and required) only if <code>recordingMode</code> is <code>INTERVAL</code>.
     * Default: 60.</p> <p> <b>Important:</b> Setting a value for
     * <code>targetIntervalSeconds</code> does not guarantee that thumbnails are
     * generated at the specified interval. For thumbnails to be generated at the
     * <code>targetIntervalSeconds</code> interval, the <code>IDR/Keyframe</code> value
     * for the input video must be less than the <code>targetIntervalSeconds</code>
     * value. See <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/streaming-config.html">
     * Amazon IVS Streaming Configuration</a> for information on setting
     * <code>IDR/Keyframe</code> to the recommended value in video-encoder
     * settings.</p>
     */
    inline ThumbnailConfiguration& WithTargetIntervalSeconds(long long value) { SetTargetIntervalSeconds(value); return *this;}

  private:

    RecordingMode m_recordingMode;
    bool m_recordingModeHasBeenSet = false;

    long long m_targetIntervalSeconds;
    bool m_targetIntervalSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
