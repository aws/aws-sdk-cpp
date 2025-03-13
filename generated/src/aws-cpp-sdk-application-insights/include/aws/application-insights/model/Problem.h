/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/SeverityLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/application-insights/model/Visibility.h>
#include <aws/application-insights/model/ResolutionMethod.h>
#include <aws/application-insights/model/FeedbackKey.h>
#include <aws/application-insights/model/FeedbackValue.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes a problem that is detected by correlating
   * observations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/Problem">AWS
   * API Reference</a></p>
   */
  class Problem
  {
  public:
    AWS_APPLICATIONINSIGHTS_API Problem() = default;
    AWS_APPLICATIONINSIGHTS_API Problem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Problem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Problem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the problem.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Problem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The short name of the problem associated with the SNS notification. </p>
     */
    inline const Aws::String& GetShortName() const { return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    template<typename ShortNameT = Aws::String>
    void SetShortName(ShortNameT&& value) { m_shortNameHasBeenSet = true; m_shortName = std::forward<ShortNameT>(value); }
    template<typename ShortNameT = Aws::String>
    Problem& WithShortName(ShortNameT&& value) { SetShortName(std::forward<ShortNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline const Aws::String& GetInsights() const { return m_insights; }
    inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
    template<typename InsightsT = Aws::String>
    void SetInsights(InsightsT&& value) { m_insightsHasBeenSet = true; m_insights = std::forward<InsightsT>(value); }
    template<typename InsightsT = Aws::String>
    Problem& WithInsights(InsightsT&& value) { SetInsights(std::forward<InsightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the problem.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Problem& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource affected by the problem.</p>
     */
    inline const Aws::String& GetAffectedResource() const { return m_affectedResource; }
    inline bool AffectedResourceHasBeenSet() const { return m_affectedResourceHasBeenSet; }
    template<typename AffectedResourceT = Aws::String>
    void SetAffectedResource(AffectedResourceT&& value) { m_affectedResourceHasBeenSet = true; m_affectedResource = std::forward<AffectedResourceT>(value); }
    template<typename AffectedResourceT = Aws::String>
    Problem& WithAffectedResource(AffectedResourceT&& value) { SetAffectedResource(std::forward<AffectedResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Problem& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Problem& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline SeverityLevel GetSeverityLevel() const { return m_severityLevel; }
    inline bool SeverityLevelHasBeenSet() const { return m_severityLevelHasBeenSet; }
    inline void SetSeverityLevel(SeverityLevel value) { m_severityLevelHasBeenSet = true; m_severityLevel = value; }
    inline Problem& WithSeverityLevel(SeverityLevel value) { SetSeverityLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the resource group
     * affected by the problem.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Problem& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    Problem& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline const Aws::Map<FeedbackKey, FeedbackValue>& GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    template<typename FeedbackT = Aws::Map<FeedbackKey, FeedbackValue>>
    void SetFeedback(FeedbackT&& value) { m_feedbackHasBeenSet = true; m_feedback = std::forward<FeedbackT>(value); }
    template<typename FeedbackT = Aws::Map<FeedbackKey, FeedbackValue>>
    Problem& WithFeedback(FeedbackT&& value) { SetFeedback(std::forward<FeedbackT>(value)); return *this;}
    inline Problem& AddFeedback(FeedbackKey key, FeedbackValue value) {
      m_feedbackHasBeenSet = true; m_feedback.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The number of times that the same problem reoccurred after the first time it
     * was resolved. </p>
     */
    inline long long GetRecurringCount() const { return m_recurringCount; }
    inline bool RecurringCountHasBeenSet() const { return m_recurringCountHasBeenSet; }
    inline void SetRecurringCount(long long value) { m_recurringCountHasBeenSet = true; m_recurringCount = value; }
    inline Problem& WithRecurringCount(long long value) { SetRecurringCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the problem reoccurred after its last resolution. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRecurrenceTime() const { return m_lastRecurrenceTime; }
    inline bool LastRecurrenceTimeHasBeenSet() const { return m_lastRecurrenceTimeHasBeenSet; }
    template<typename LastRecurrenceTimeT = Aws::Utils::DateTime>
    void SetLastRecurrenceTime(LastRecurrenceTimeT&& value) { m_lastRecurrenceTimeHasBeenSet = true; m_lastRecurrenceTime = std::forward<LastRecurrenceTimeT>(value); }
    template<typename LastRecurrenceTimeT = Aws::Utils::DateTime>
    Problem& WithLastRecurrenceTime(LastRecurrenceTimeT&& value) { SetLastRecurrenceTime(std::forward<LastRecurrenceTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not you can view the problem. Updates to ignored
     * problems do not generate notifications.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline Problem& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the problem was resolved. If the value is
     * <code>AUTOMATIC</code>, the system resolved the problem. If the value is
     * <code>MANUAL</code>, the user resolved the problem. If the value is
     * <code>UNRESOLVED</code>, then the problem is not resolved.</p>
     */
    inline ResolutionMethod GetResolutionMethod() const { return m_resolutionMethod; }
    inline bool ResolutionMethodHasBeenSet() const { return m_resolutionMethodHasBeenSet; }
    inline void SetResolutionMethod(ResolutionMethod value) { m_resolutionMethodHasBeenSet = true; m_resolutionMethod = value; }
    inline Problem& WithResolutionMethod(ResolutionMethod value) { SetResolutionMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_shortName;
    bool m_shortNameHasBeenSet = false;

    Aws::String m_insights;
    bool m_insightsHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_affectedResource;
    bool m_affectedResourceHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    SeverityLevel m_severityLevel{SeverityLevel::NOT_SET};
    bool m_severityLevelHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::Map<FeedbackKey, FeedbackValue> m_feedback;
    bool m_feedbackHasBeenSet = false;

    long long m_recurringCount{0};
    bool m_recurringCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastRecurrenceTime{};
    bool m_lastRecurrenceTimeHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    ResolutionMethod m_resolutionMethod{ResolutionMethod::NOT_SET};
    bool m_resolutionMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
