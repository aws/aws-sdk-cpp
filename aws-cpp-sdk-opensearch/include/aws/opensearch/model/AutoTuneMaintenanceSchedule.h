/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/Duration.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Specifies the Auto-Tune maintenance schedule. See <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
   * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
   * information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneMaintenanceSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API AutoTuneMaintenanceSchedule
  {
  public:
    AutoTuneMaintenanceSchedule();
    AutoTuneMaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
    AutoTuneMaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAt() const{ return m_startAt; }

    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }

    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline void SetStartAt(const Aws::Utils::DateTime& value) { m_startAtHasBeenSet = true; m_startAt = value; }

    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline void SetStartAt(Aws::Utils::DateTime&& value) { m_startAtHasBeenSet = true; m_startAt = std::move(value); }

    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithStartAt(const Aws::Utils::DateTime& value) { SetStartAt(value); return *this;}

    /**
     * <p>The timestamp at which the Auto-Tune maintenance schedule starts.</p>
     */
    inline AutoTuneMaintenanceSchedule& WithStartAt(Aws::Utils::DateTime&& value) { SetStartAt(std::move(value)); return *this;}


    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline const Duration& GetDuration() const{ return m_duration; }

    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetDuration(const Duration& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetDuration(Duration&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneMaintenanceSchedule& WithDuration(const Duration& value) { SetDuration(value); return *this;}

    /**
     * <p>Specifies maintenance schedule duration: duration value and duration unit.
     * See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneMaintenanceSchedule& WithDuration(Duration&& value) { SetDuration(std::move(value)); return *this;}


    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline const Aws::String& GetCronExpressionForRecurrence() const{ return m_cronExpressionForRecurrence; }

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline bool CronExpressionForRecurrenceHasBeenSet() const { return m_cronExpressionForRecurrenceHasBeenSet; }

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetCronExpressionForRecurrence(const Aws::String& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = value; }

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetCronExpressionForRecurrence(Aws::String&& value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence = std::move(value); }

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline void SetCronExpressionForRecurrence(const char* value) { m_cronExpressionForRecurrenceHasBeenSet = true; m_cronExpressionForRecurrence.assign(value); }

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const Aws::String& value) { SetCronExpressionForRecurrence(value); return *this;}

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(Aws::String&& value) { SetCronExpressionForRecurrence(std::move(value)); return *this;}

    /**
     * <p>A cron expression for a recurring maintenance schedule. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html"
     * target="_blank"> Auto-Tune for Amazon OpenSearch Service </a> for more
     * information. </p>
     */
    inline AutoTuneMaintenanceSchedule& WithCronExpressionForRecurrence(const char* value) { SetCronExpressionForRecurrence(value); return *this;}

  private:

    Aws::Utils::DateTime m_startAt;
    bool m_startAtHasBeenSet;

    Duration m_duration;
    bool m_durationHasBeenSet;

    Aws::String m_cronExpressionForRecurrence;
    bool m_cronExpressionForRecurrenceHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
