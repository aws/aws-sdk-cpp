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
    AWS_APPLICATIONINSIGHTS_API Problem();
    AWS_APPLICATIONINSIGHTS_API Problem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Problem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Problem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Problem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Problem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the problem.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Problem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Problem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Problem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The short name of the problem associated with the SNS notification. </p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = std::move(value); }
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }
    inline Problem& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}
    inline Problem& WithShortName(Aws::String&& value) { SetShortName(std::move(value)); return *this;}
    inline Problem& WithShortName(const char* value) { SetShortName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline const Aws::String& GetInsights() const{ return m_insights; }
    inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
    inline void SetInsights(const Aws::String& value) { m_insightsHasBeenSet = true; m_insights = value; }
    inline void SetInsights(Aws::String&& value) { m_insightsHasBeenSet = true; m_insights = std::move(value); }
    inline void SetInsights(const char* value) { m_insightsHasBeenSet = true; m_insights.assign(value); }
    inline Problem& WithInsights(const Aws::String& value) { SetInsights(value); return *this;}
    inline Problem& WithInsights(Aws::String&& value) { SetInsights(std::move(value)); return *this;}
    inline Problem& WithInsights(const char* value) { SetInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the problem.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Problem& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline Problem& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource affected by the problem.</p>
     */
    inline const Aws::String& GetAffectedResource() const{ return m_affectedResource; }
    inline bool AffectedResourceHasBeenSet() const { return m_affectedResourceHasBeenSet; }
    inline void SetAffectedResource(const Aws::String& value) { m_affectedResourceHasBeenSet = true; m_affectedResource = value; }
    inline void SetAffectedResource(Aws::String&& value) { m_affectedResourceHasBeenSet = true; m_affectedResource = std::move(value); }
    inline void SetAffectedResource(const char* value) { m_affectedResourceHasBeenSet = true; m_affectedResource.assign(value); }
    inline Problem& WithAffectedResource(const Aws::String& value) { SetAffectedResource(value); return *this;}
    inline Problem& WithAffectedResource(Aws::String&& value) { SetAffectedResource(std::move(value)); return *this;}
    inline Problem& WithAffectedResource(const char* value) { SetAffectedResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Problem& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Problem& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Problem& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Problem& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline const SeverityLevel& GetSeverityLevel() const{ return m_severityLevel; }
    inline bool SeverityLevelHasBeenSet() const { return m_severityLevelHasBeenSet; }
    inline void SetSeverityLevel(const SeverityLevel& value) { m_severityLevelHasBeenSet = true; m_severityLevel = value; }
    inline void SetSeverityLevel(SeverityLevel&& value) { m_severityLevelHasBeenSet = true; m_severityLevel = std::move(value); }
    inline Problem& WithSeverityLevel(const SeverityLevel& value) { SetSeverityLevel(value); return *this;}
    inline Problem& WithSeverityLevel(SeverityLevel&& value) { SetSeverityLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the resource group
     * affected by the problem.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Problem& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Problem& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Problem& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline Problem& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline Problem& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline Problem& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline const Aws::Map<FeedbackKey, FeedbackValue>& GetFeedback() const{ return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(const Aws::Map<FeedbackKey, FeedbackValue>& value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline void SetFeedback(Aws::Map<FeedbackKey, FeedbackValue>&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }
    inline Problem& WithFeedback(const Aws::Map<FeedbackKey, FeedbackValue>& value) { SetFeedback(value); return *this;}
    inline Problem& WithFeedback(Aws::Map<FeedbackKey, FeedbackValue>&& value) { SetFeedback(std::move(value)); return *this;}
    inline Problem& AddFeedback(const FeedbackKey& key, const FeedbackValue& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(key, value); return *this; }
    inline Problem& AddFeedback(FeedbackKey&& key, const FeedbackValue& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(std::move(key), value); return *this; }
    inline Problem& AddFeedback(const FeedbackKey& key, FeedbackValue&& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(key, std::move(value)); return *this; }
    inline Problem& AddFeedback(FeedbackKey&& key, FeedbackValue&& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of times that the same problem reoccurred after the first time it
     * was resolved. </p>
     */
    inline long long GetRecurringCount() const{ return m_recurringCount; }
    inline bool RecurringCountHasBeenSet() const { return m_recurringCountHasBeenSet; }
    inline void SetRecurringCount(long long value) { m_recurringCountHasBeenSet = true; m_recurringCount = value; }
    inline Problem& WithRecurringCount(long long value) { SetRecurringCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the problem reoccurred after its last resolution. </p>
     */
    inline const Aws::Utils::DateTime& GetLastRecurrenceTime() const{ return m_lastRecurrenceTime; }
    inline bool LastRecurrenceTimeHasBeenSet() const { return m_lastRecurrenceTimeHasBeenSet; }
    inline void SetLastRecurrenceTime(const Aws::Utils::DateTime& value) { m_lastRecurrenceTimeHasBeenSet = true; m_lastRecurrenceTime = value; }
    inline void SetLastRecurrenceTime(Aws::Utils::DateTime&& value) { m_lastRecurrenceTimeHasBeenSet = true; m_lastRecurrenceTime = std::move(value); }
    inline Problem& WithLastRecurrenceTime(const Aws::Utils::DateTime& value) { SetLastRecurrenceTime(value); return *this;}
    inline Problem& WithLastRecurrenceTime(Aws::Utils::DateTime&& value) { SetLastRecurrenceTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not you can view the problem. Updates to ignored
     * problems do not generate notifications.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline Problem& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline Problem& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the problem was resolved. If the value is
     * <code>AUTOMATIC</code>, the system resolved the problem. If the value is
     * <code>MANUAL</code>, the user resolved the problem. If the value is
     * <code>UNRESOLVED</code>, then the problem is not resolved.</p>
     */
    inline const ResolutionMethod& GetResolutionMethod() const{ return m_resolutionMethod; }
    inline bool ResolutionMethodHasBeenSet() const { return m_resolutionMethodHasBeenSet; }
    inline void SetResolutionMethod(const ResolutionMethod& value) { m_resolutionMethodHasBeenSet = true; m_resolutionMethod = value; }
    inline void SetResolutionMethod(ResolutionMethod&& value) { m_resolutionMethodHasBeenSet = true; m_resolutionMethod = std::move(value); }
    inline Problem& WithResolutionMethod(const ResolutionMethod& value) { SetResolutionMethod(value); return *this;}
    inline Problem& WithResolutionMethod(ResolutionMethod&& value) { SetResolutionMethod(std::move(value)); return *this;}
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

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_affectedResource;
    bool m_affectedResourceHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    SeverityLevel m_severityLevel;
    bool m_severityLevelHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::Map<FeedbackKey, FeedbackValue> m_feedback;
    bool m_feedbackHasBeenSet = false;

    long long m_recurringCount;
    bool m_recurringCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastRecurrenceTime;
    bool m_lastRecurrenceTimeHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    ResolutionMethod m_resolutionMethod;
    bool m_resolutionMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
