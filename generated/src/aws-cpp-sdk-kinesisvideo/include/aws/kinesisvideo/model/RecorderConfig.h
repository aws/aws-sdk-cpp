/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/MediaSourceConfig.h>
#include <aws/kinesisvideo/model/ScheduleConfig.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>The recorder configuration consists of the local
   * <code>MediaSourceConfig</code> details that are used as credentials to accesss
   * the local media files streamed on the camera. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/RecorderConfig">AWS
   * API Reference</a></p>
   */
  class RecorderConfig
  {
  public:
    AWS_KINESISVIDEO_API RecorderConfig() = default;
    AWS_KINESISVIDEO_API RecorderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API RecorderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline const MediaSourceConfig& GetMediaSourceConfig() const { return m_mediaSourceConfig; }
    inline bool MediaSourceConfigHasBeenSet() const { return m_mediaSourceConfigHasBeenSet; }
    template<typename MediaSourceConfigT = MediaSourceConfig>
    void SetMediaSourceConfig(MediaSourceConfigT&& value) { m_mediaSourceConfigHasBeenSet = true; m_mediaSourceConfig = std::forward<MediaSourceConfigT>(value); }
    template<typename MediaSourceConfigT = MediaSourceConfig>
    RecorderConfig& WithMediaSourceConfig(MediaSourceConfigT&& value) { SetMediaSourceConfig(std::forward<MediaSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
    template<typename ScheduleConfigT = ScheduleConfig>
    void SetScheduleConfig(ScheduleConfigT&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::forward<ScheduleConfigT>(value); }
    template<typename ScheduleConfigT = ScheduleConfig>
    RecorderConfig& WithScheduleConfig(ScheduleConfigT&& value) { SetScheduleConfig(std::forward<ScheduleConfigT>(value)); return *this;}
    ///@}
  private:

    MediaSourceConfig m_mediaSourceConfig;
    bool m_mediaSourceConfigHasBeenSet = false;

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
