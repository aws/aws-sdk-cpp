/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/Duration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies Auto-Tune maitenance schedule. See the <a
   * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
   * target="_blank">Developer Guide</a> for more information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AutoTuneMaintenanceSchedule">AWS
   * API Reference</a></p>
   */
  class AutoTuneMaintenanceSchedule
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AutoTuneMaintenanceSchedule() = default;
    AWS_ELASTICSEARCHSERVICE_API AutoTuneMaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API AutoTuneMaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies timestamp at which Auto-Tune maintenance schedule start. </p>
     */
    inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
    inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }
    template<typename StartAtT = Aws::Utils::DateTime>
    void SetStartAt(StartAtT&& value) { m_startAtHasBeenSet = true; m_startAt = std::forward<StartAtT>(value); }
    template<typename StartAtT = Aws::Utils::DateTime>
    AutoTuneMaintenanceSchedule& WithStartAt(StartAtT&& value) { SetStartAt(std::forward<StartAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Duration& GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    template<typename DurationT = Duration>
    void SetDuration(DurationT&& value) { m_durationHasBeenSet = true; m_duration = std::forward<DurationT>(value); }
    template<typename DurationT = Duration>
    AutoTuneMaintenanceSchedule& WithDuration(DurationT&& value) { SetDuration(std::forward<DurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies cron expression for a recurring maintenance schedule. See the <a
     * href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/auto-tune.html"
     * target="_blank">Developer Guide</a> for more information.</p>
     */
    inline const Aws::String& GetCronExpressionForRecurrence() const { return m_cronExpressionForRecurrence; }
    inline bool CronExpressionForRecurrenceHasBeenSet() const { return m_cronExpressionForRecurrenceHasBeenSet; }
    template<typename CronExpressionForRecurrenceT = Aws::String>
    void SetCronExpressionForRecurrence(CronExpressionForRecurrenceT&& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = std::forward<CronExpressionForRecurrenceT>(value); }
    template<typename CronExpressionForRecurrenceT = Aws::String>
    AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(CronExpressionForRecurrenceT&& value) { SetCronExpressionForRecurrence(std::forward<CronExpressionForRecurrenceT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startAt{};
    bool m_startAtHasBeenSet = false;

    Duration m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_cronExpressionForRecurrence;
    bool m_cronExpressionForRecurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
