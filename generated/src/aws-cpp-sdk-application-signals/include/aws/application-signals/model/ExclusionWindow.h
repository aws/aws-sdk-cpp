/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Window.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-signals/model/RecurrenceRule.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>The core SLO time window exclusion object that includes Window, StartTime,
   * RecurrenceRule, and Reason.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ExclusionWindow">AWS
   * API Reference</a></p>
   */
  class ExclusionWindow
  {
  public:
    AWS_APPLICATIONSIGNALS_API ExclusionWindow();
    AWS_APPLICATIONSIGNALS_API ExclusionWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ExclusionWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SLO time window exclusion .</p>
     */
    inline const Window& GetWindow() const{ return m_window; }
    inline bool WindowHasBeenSet() const { return m_windowHasBeenSet; }
    inline void SetWindow(const Window& value) { m_windowHasBeenSet = true; m_window = value; }
    inline void SetWindow(Window&& value) { m_windowHasBeenSet = true; m_window = std::move(value); }
    inline ExclusionWindow& WithWindow(const Window& value) { SetWindow(value); return *this;}
    inline ExclusionWindow& WithWindow(Window&& value) { SetWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the SLO time window exclusion. Defaults to current time if not
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ExclusionWindow& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ExclusionWindow& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurrence rule for the SLO time window exclusion. Supports both cron and
     * rate expressions.</p>
     */
    inline const RecurrenceRule& GetRecurrenceRule() const{ return m_recurrenceRule; }
    inline bool RecurrenceRuleHasBeenSet() const { return m_recurrenceRuleHasBeenSet; }
    inline void SetRecurrenceRule(const RecurrenceRule& value) { m_recurrenceRuleHasBeenSet = true; m_recurrenceRule = value; }
    inline void SetRecurrenceRule(RecurrenceRule&& value) { m_recurrenceRuleHasBeenSet = true; m_recurrenceRule = std::move(value); }
    inline ExclusionWindow& WithRecurrenceRule(const RecurrenceRule& value) { SetRecurrenceRule(value); return *this;}
    inline ExclusionWindow& WithRecurrenceRule(RecurrenceRule&& value) { SetRecurrenceRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description explaining why this time period should be excluded from SLO
     * calculations.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ExclusionWindow& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ExclusionWindow& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ExclusionWindow& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Window m_window;
    bool m_windowHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    RecurrenceRule m_recurrenceRule;
    bool m_recurrenceRuleHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
