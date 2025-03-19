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
    AWS_APPLICATIONSIGNALS_API ExclusionWindow() = default;
    AWS_APPLICATIONSIGNALS_API ExclusionWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ExclusionWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SLO time window exclusion .</p>
     */
    inline const Window& GetWindow() const { return m_window; }
    inline bool WindowHasBeenSet() const { return m_windowHasBeenSet; }
    template<typename WindowT = Window>
    void SetWindow(WindowT&& value) { m_windowHasBeenSet = true; m_window = std::forward<WindowT>(value); }
    template<typename WindowT = Window>
    ExclusionWindow& WithWindow(WindowT&& value) { SetWindow(std::forward<WindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the SLO time window exclusion. Defaults to current time if not
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ExclusionWindow& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurrence rule for the SLO time window exclusion. Supports both cron and
     * rate expressions.</p>
     */
    inline const RecurrenceRule& GetRecurrenceRule() const { return m_recurrenceRule; }
    inline bool RecurrenceRuleHasBeenSet() const { return m_recurrenceRuleHasBeenSet; }
    template<typename RecurrenceRuleT = RecurrenceRule>
    void SetRecurrenceRule(RecurrenceRuleT&& value) { m_recurrenceRuleHasBeenSet = true; m_recurrenceRule = std::forward<RecurrenceRuleT>(value); }
    template<typename RecurrenceRuleT = RecurrenceRule>
    ExclusionWindow& WithRecurrenceRule(RecurrenceRuleT&& value) { SetRecurrenceRule(std::forward<RecurrenceRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description explaining why this time period should be excluded from SLO
     * calculations.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    ExclusionWindow& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Window m_window;
    bool m_windowHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    RecurrenceRule m_recurrenceRule;
    bool m_recurrenceRuleHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
