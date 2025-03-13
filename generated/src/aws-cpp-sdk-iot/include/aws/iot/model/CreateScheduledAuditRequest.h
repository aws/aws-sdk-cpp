/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/AuditFrequency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateScheduledAuditRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateScheduledAuditRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledAudit"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>How often the scheduled audit takes place, either <code>DAILY</code>,
     * <code>WEEKLY</code>, <code>BIWEEKLY</code> or <code>MONTHLY</code>. The start
     * time of each audit is determined by the system.</p>
     */
    inline AuditFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(AuditFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline CreateScheduledAuditRequest& WithFrequency(AuditFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the month on which the scheduled audit takes place. This can be
     * "1" through "31" or "LAST". This field is required if the "frequency" parameter
     * is set to <code>MONTHLY</code>. If days 29 to 31 are specified, and the month
     * doesn't have that many days, the audit takes place on the <code>LAST</code> day
     * of the month.</p>
     */
    inline const Aws::String& GetDayOfMonth() const { return m_dayOfMonth; }
    inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
    template<typename DayOfMonthT = Aws::String>
    void SetDayOfMonth(DayOfMonthT&& value) { m_dayOfMonthHasBeenSet = true; m_dayOfMonth = std::forward<DayOfMonthT>(value); }
    template<typename DayOfMonthT = Aws::String>
    CreateScheduledAuditRequest& WithDayOfMonth(DayOfMonthT&& value) { SetDayOfMonth(std::forward<DayOfMonthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day of the week on which the scheduled audit takes place, either
     * <code>SUN</code>, <code>MON</code>, <code>TUE</code>, <code>WED</code>,
     * <code>THU</code>, <code>FRI</code>, or <code>SAT</code>. This field is required
     * if the <code>frequency</code> parameter is set to <code>WEEKLY</code> or
     * <code>BIWEEKLY</code>.</p>
     */
    inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(DayOfWeek value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline CreateScheduledAuditRequest& WithDayOfWeek(DayOfWeek value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Which checks are performed during the scheduled audit. Checks must be enabled
     * for your account. (Use <code>DescribeAccountAuditConfiguration</code> to see the
     * list of all checks, including those that are enabled or use
     * <code>UpdateAccountAuditConfiguration</code> to select which checks are
     * enabled.)</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetCheckNames() const { return m_targetCheckNames; }
    inline bool TargetCheckNamesHasBeenSet() const { return m_targetCheckNamesHasBeenSet; }
    template<typename TargetCheckNamesT = Aws::Vector<Aws::String>>
    void SetTargetCheckNames(TargetCheckNamesT&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames = std::forward<TargetCheckNamesT>(value); }
    template<typename TargetCheckNamesT = Aws::Vector<Aws::String>>
    CreateScheduledAuditRequest& WithTargetCheckNames(TargetCheckNamesT&& value) { SetTargetCheckNames(std::forward<TargetCheckNamesT>(value)); return *this;}
    template<typename TargetCheckNamesT = Aws::String>
    CreateScheduledAuditRequest& AddTargetCheckNames(TargetCheckNamesT&& value) { m_targetCheckNamesHasBeenSet = true; m_targetCheckNames.emplace_back(std::forward<TargetCheckNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name you want to give to the scheduled audit. (Max. 128 chars)</p>
     */
    inline const Aws::String& GetScheduledAuditName() const { return m_scheduledAuditName; }
    inline bool ScheduledAuditNameHasBeenSet() const { return m_scheduledAuditNameHasBeenSet; }
    template<typename ScheduledAuditNameT = Aws::String>
    void SetScheduledAuditName(ScheduledAuditNameT&& value) { m_scheduledAuditNameHasBeenSet = true; m_scheduledAuditName = std::forward<ScheduledAuditNameT>(value); }
    template<typename ScheduledAuditNameT = Aws::String>
    CreateScheduledAuditRequest& WithScheduledAuditName(ScheduledAuditNameT&& value) { SetScheduledAuditName(std::forward<ScheduledAuditNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the scheduled audit.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateScheduledAuditRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateScheduledAuditRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    AuditFrequency m_frequency{AuditFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::String m_dayOfMonth;
    bool m_dayOfMonthHasBeenSet = false;

    DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
    bool m_dayOfWeekHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetCheckNames;
    bool m_targetCheckNamesHasBeenSet = false;

    Aws::String m_scheduledAuditName;
    bool m_scheduledAuditNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
