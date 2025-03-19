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
   * the <code>DurationInMinutes</code> details that specify the scheduling to record
   * from a camera, or local media file, onto the Edge Agent. If the
   * <code>ScheduleConfig</code> is not provided in the <code>UploaderConfig</code>,
   * then the Edge Agent will upload at regular intervals (every 1 hour).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/UploaderConfig">AWS
   * API Reference</a></p>
   */
  class UploaderConfig
  {
  public:
    AWS_KINESISVIDEO_API UploaderConfig() = default;
    AWS_KINESISVIDEO_API UploaderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API UploaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration that consists of the <code>ScheduleExpression</code> and
     * the <code>DurationInMinutes</code> details that specify the scheduling to record
     * from a camera, or local media file, onto the Edge Agent. If the
     * <code>ScheduleConfig</code> is not provided in this <code>UploaderConfig</code>,
     * then the Edge Agent will upload at regular intervals (every 1 hour).</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
    template<typename ScheduleConfigT = ScheduleConfig>
    void SetScheduleConfig(ScheduleConfigT&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::forward<ScheduleConfigT>(value); }
    template<typename ScheduleConfigT = ScheduleConfig>
    UploaderConfig& WithScheduleConfig(ScheduleConfigT&& value) { SetScheduleConfig(std::forward<ScheduleConfigT>(value)); return *this;}
    ///@}
  private:

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
