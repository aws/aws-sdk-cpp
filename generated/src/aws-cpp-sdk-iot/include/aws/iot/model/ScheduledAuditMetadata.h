/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditFrequency.h>
#include <aws/iot/model/DayOfWeek.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about the scheduled audit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ScheduledAuditMetadata">AWS
   * API Reference</a></p>
   */
  class ScheduledAuditMetadata
  {
  public:
    AWS_IOT_API ScheduledAuditMetadata() = default;
    AWS_IOT_API ScheduledAuditMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ScheduledAuditMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditName() const { return m_scheduledAuditName; }
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }
    template<typename ScheduledAuditNameT = Aws::String>
    void SetScheduledAuditName(ScheduledAuditNameT&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::forward<ScheduledAuditNameT>(value); }
    template<typename ScheduledAuditNameT = Aws::String>
    ScheduledAuditMetadata& WithScheduledAuditName(ScheduledAuditNameT&& value) { SetScheduledAuditName(std::forward<ScheduledAuditNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scheduled audit.</p>
     */
    inline const Aws::String& GetScheduledAuditArn() const { return m_scheduledAuditArn; }
    inline bool ScheduledAuditArnHasBeenSet() const { return m_scheduledAuditArnHasBeenSet; }
    template<typename ScheduledAuditArnT = Aws::String>
    void SetScheduledAuditArn(ScheduledAuditArnT&& value) { m_scheduledAuditArnHasBeenSet = true; m_scheduledAuditArn = std::forward<ScheduledAuditArnT>(value); }
    template<typename ScheduledAuditArnT = Aws::String>
    ScheduledAuditMetadata& WithScheduledAuditArn(ScheduledAuditArnT&& value) { SetScheduledAuditArn(std::forward<ScheduledAuditArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the scheduled audit occurs.</p>
     */
    inline AuditFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(AuditFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline ScheduledAuditMetadata& WithFrequency(AuditFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month on which the scheduled audit is run (if the
     * <code>frequency</code> is "MONTHLY"). If days 29-31 are specified, and the month
     * does not have that many days, the audit takes place on the "LAST" day of the
     * month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const { return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    template<typename DayOfMonthT = Aws::String>
    void SetDayOfMonth(DayOfMonthT&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::forward<DayOfMonthT>(value); }
    template<typename DayOfMonthT = Aws::String>
    ScheduledAuditMetadata& WithDayOfMonth(DayOfMonthT&& value) { SetDayOfMonth(std::forward<DayOfMonthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week on which the scheduled audit is run (if the
     * <code>frequency</code> is "WEEKLY" or "BIWEEKLY").</p>
     */
    inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(DayOfWeek value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline ScheduledAuditMetadata& WithDayOfWeek(DayOfWeek value) { SetDayOfWeek(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;

    Aws::String m_scheduledAuditArn;
    bool m_scheduledAuditArnHasBeenSet = false;

    AuditFrequency m_frequency{AuditFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
    bool m_dayOfWeekHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
