/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RecordingMode.h>
#include <aws/ivs/model/ThumbnailConfigurationResolution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/ThumbnailConfigurationStorage.h>
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
    AWS_IVS_API ThumbnailConfiguration() = default;
    AWS_IVS_API ThumbnailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API ThumbnailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Thumbnail recording mode. Default: <code>INTERVAL</code>.</p>
     */
    inline RecordingMode GetRecordingMode() const { return m_recordingMode; }
    inline bool RecordingModeHasBeenSet() const { return m_recordingModeHasBeenSet; }
    inline void SetRecordingMode(RecordingMode value) { m_recordingModeHasBeenSet = true; m_recordingMode = value; }
    inline ThumbnailConfiguration& WithRecordingMode(RecordingMode value) { SetRecordingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the desired resolution of recorded thumbnails. Thumbnails are
     * recorded at the selected resolution if the corresponding rendition is available
     * during the stream; otherwise, they are recorded at source resolution. For more
     * information about resolution values and their corresponding height and width
     * dimensions, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/record-to-s3.html">Auto-Record
     * to Amazon S3</a>. Default: Null (source resolution is returned).</p>
     */
    inline ThumbnailConfigurationResolution GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(ThumbnailConfigurationResolution value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline ThumbnailConfiguration& WithResolution(ThumbnailConfigurationResolution value) { SetResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the format in which thumbnails are recorded.
     * <code>SEQUENTIAL</code> records all generated thumbnails in a serial manner, to
     * the media/thumbnails directory. <code>LATEST</code> saves the latest thumbnail
     * in media/latest_thumbnail/thumb.jpg and overwrites it at the interval specified
     * by <code>targetIntervalSeconds</code>. You can enable both
     * <code>SEQUENTIAL</code> and <code>LATEST</code>. Default:
     * <code>SEQUENTIAL</code>.</p>
     */
    inline const Aws::Vector<ThumbnailConfigurationStorage>& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = Aws::Vector<ThumbnailConfigurationStorage>>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = Aws::Vector<ThumbnailConfigurationStorage>>
    ThumbnailConfiguration& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    inline ThumbnailConfiguration& AddStorage(ThumbnailConfigurationStorage value) { m_storageHasBeenSet = true; m_storage.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * (and required) only if <code>recordingMode</code> is <code>INTERVAL</code>.
     * Default: 60.</p> <p> <b>Important:</b> For the <code>BASIC</code> channel type,
     * or the <code>STANDARD</code> channel type with multitrack input, setting a value
     * for <code>targetIntervalSeconds</code> does not guarantee that thumbnails are
     * generated at the specified interval. For thumbnails to be generated at the
     * <code>targetIntervalSeconds</code> interval, the <code>IDR/Keyframe</code> value
     * for the input video must be less than the <code>targetIntervalSeconds</code>
     * value. See <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/streaming-config.html">
     * Amazon IVS Streaming Configuration</a> for information on setting
     * <code>IDR/Keyframe</code> to the recommended value in video-encoder
     * settings.</p>
     */
    inline long long GetTargetIntervalSeconds() const { return m_targetIntervalSeconds; }
    inline bool TargetIntervalSecondsHasBeenSet() const { return m_targetIntervalSecondsHasBeenSet; }
    inline void SetTargetIntervalSeconds(long long value) { m_targetIntervalSecondsHasBeenSet = true; m_targetIntervalSeconds = value; }
    inline ThumbnailConfiguration& WithTargetIntervalSeconds(long long value) { SetTargetIntervalSeconds(value); return *this;}
    ///@}
  private:

    RecordingMode m_recordingMode{RecordingMode::NOT_SET};
    bool m_recordingModeHasBeenSet = false;

    ThumbnailConfigurationResolution m_resolution{ThumbnailConfigurationResolution::NOT_SET};
    bool m_resolutionHasBeenSet = false;

    Aws::Vector<ThumbnailConfigurationStorage> m_storage;
    bool m_storageHasBeenSet = false;

    long long m_targetIntervalSeconds{0};
    bool m_targetIntervalSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
