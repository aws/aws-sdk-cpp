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
    AWS_KINESISVIDEO_API RecorderConfig();
    AWS_KINESISVIDEO_API RecorderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API RecorderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline const MediaSourceConfig& GetMediaSourceConfig() const{ return m_mediaSourceConfig; }

    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline bool MediaSourceConfigHasBeenSet() const { return m_mediaSourceConfigHasBeenSet; }

    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline void SetMediaSourceConfig(const MediaSourceConfig& value) { m_mediaSourceConfigHasBeenSet = true; m_mediaSourceConfig = value; }

    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline void SetMediaSourceConfig(MediaSourceConfig&& value) { m_mediaSourceConfigHasBeenSet = true; m_mediaSourceConfig = std::move(value); }

    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline RecorderConfig& WithMediaSourceConfig(const MediaSourceConfig& value) { SetMediaSourceConfig(value); return *this;}

    /**
     * <p>The configuration details that consist of the credentials required
     * (<code>MediaUriSecretArn</code> and <code>MediaUriType</code>) to access the
     * media files streamed to the camera. </p>
     */
    inline RecorderConfig& WithMediaSourceConfig(MediaSourceConfig&& value) { SetMediaSourceConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const{ return m_scheduleConfig; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline void SetScheduleConfig(const ScheduleConfig& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = value; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline void SetScheduleConfig(ScheduleConfig&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::move(value); }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline RecorderConfig& WithScheduleConfig(const ScheduleConfig& value) { SetScheduleConfig(value); return *this;}

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> attribute is not provided, then the Edge Agent
     * will always be set to recording mode.</p>
     */
    inline RecorderConfig& WithScheduleConfig(ScheduleConfig&& value) { SetScheduleConfig(std::move(value)); return *this;}

  private:

    MediaSourceConfig m_mediaSourceConfig;
    bool m_mediaSourceConfigHasBeenSet = false;

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
