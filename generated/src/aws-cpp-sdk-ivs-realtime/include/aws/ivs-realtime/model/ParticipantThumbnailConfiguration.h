/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/ThumbnailRecordingMode.h>
#include <aws/ivs-realtime/model/ThumbnailStorageType.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>An object representing a configuration of thumbnails for recorded video from
   * an individual participant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ParticipantThumbnailConfiguration">AWS
   * API Reference</a></p>
   */
  class ParticipantThumbnailConfiguration
  {
  public:
    AWS_IVSREALTIME_API ParticipantThumbnailConfiguration();
    AWS_IVSREALTIME_API ParticipantThumbnailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ParticipantThumbnailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The targeted thumbnail-generation interval in seconds. This is configurable
     * only if <code>recordingMode</code> is <code>INTERVAL</code>. Default: 60.</p>
     */
    inline int GetTargetIntervalSeconds() const{ return m_targetIntervalSeconds; }
    inline bool TargetIntervalSecondsHasBeenSet() const { return m_targetIntervalSecondsHasBeenSet; }
    inline void SetTargetIntervalSeconds(int value) { m_targetIntervalSecondsHasBeenSet = true; m_targetIntervalSeconds = value; }
    inline ParticipantThumbnailConfiguration& WithTargetIntervalSeconds(int value) { SetTargetIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the format in which thumbnails are recorded.
     * <code>SEQUENTIAL</code> records all generated thumbnails in a serial manner, to
     * the media/thumbnails/high directory. <code>LATEST</code> saves the latest
     * thumbnail in media/latest_thumbnail/high/thumb.jpg and overwrites it at the
     * interval specified by <code>targetIntervalSeconds</code>. You can enable both
     * <code>SEQUENTIAL</code> and <code>LATEST</code>. Default:
     * <code>SEQUENTIAL</code>.</p>
     */
    inline const Aws::Vector<ThumbnailStorageType>& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const Aws::Vector<ThumbnailStorageType>& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(Aws::Vector<ThumbnailStorageType>&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline ParticipantThumbnailConfiguration& WithStorage(const Aws::Vector<ThumbnailStorageType>& value) { SetStorage(value); return *this;}
    inline ParticipantThumbnailConfiguration& WithStorage(Aws::Vector<ThumbnailStorageType>&& value) { SetStorage(std::move(value)); return *this;}
    inline ParticipantThumbnailConfiguration& AddStorage(const ThumbnailStorageType& value) { m_storageHasBeenSet = true; m_storage.push_back(value); return *this; }
    inline ParticipantThumbnailConfiguration& AddStorage(ThumbnailStorageType&& value) { m_storageHasBeenSet = true; m_storage.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Thumbnail recording mode. Default: <code>DISABLED</code>.</p>
     */
    inline const ThumbnailRecordingMode& GetRecordingMode() const{ return m_recordingMode; }
    inline bool RecordingModeHasBeenSet() const { return m_recordingModeHasBeenSet; }
    inline void SetRecordingMode(const ThumbnailRecordingMode& value) { m_recordingModeHasBeenSet = true; m_recordingMode = value; }
    inline void SetRecordingMode(ThumbnailRecordingMode&& value) { m_recordingModeHasBeenSet = true; m_recordingMode = std::move(value); }
    inline ParticipantThumbnailConfiguration& WithRecordingMode(const ThumbnailRecordingMode& value) { SetRecordingMode(value); return *this;}
    inline ParticipantThumbnailConfiguration& WithRecordingMode(ThumbnailRecordingMode&& value) { SetRecordingMode(std::move(value)); return *this;}
    ///@}
  private:

    int m_targetIntervalSeconds;
    bool m_targetIntervalSecondsHasBeenSet = false;

    Aws::Vector<ThumbnailStorageType> m_storage;
    bool m_storageHasBeenSet = false;

    ThumbnailRecordingMode m_recordingMode;
    bool m_recordingModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
