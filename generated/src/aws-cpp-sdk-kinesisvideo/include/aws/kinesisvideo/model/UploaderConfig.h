/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
   * <p>The configuration that consists of the <code>ScheduleExpression</code> and
   * the <code>DurationInMinutesdetails</code>, that specify the scheduling to record
   * from a camera, or local media file, onto the Edge Agent. If the
   * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
   * be in upload mode. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UploaderConfig">AWS
   * API Reference</a></p>
   */
  class UploaderConfig
  {
  public:
    AWS_KINESISVIDEO_API UploaderConfig();
    AWS_KINESISVIDEO_API UploaderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API UploaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const{ return m_scheduleConfig; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline void SetScheduleConfig(const ScheduleConfig& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = value; }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline void SetScheduleConfig(ScheduleConfig&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::move(value); }

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline UploaderConfig& WithScheduleConfig(const ScheduleConfig& value) { SetScheduleConfig(value); return *this;}

    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code>details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleExpression</code> is not provided, then the Edge Agent will always
     * be in recording mode.</p>
     */
    inline UploaderConfig& WithScheduleConfig(ScheduleConfig&& value) { SetScheduleConfig(std::move(value)); return *this;}

  private:

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
