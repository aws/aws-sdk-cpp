/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-insights/model/SeverityLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_APPLICATIONINSIGHTS_API Problem
  {
  public:
    Problem();
    Problem(Aws::Utils::Json::JsonView jsonValue);
    Problem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the problem.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the problem.</p>
     */
    inline Problem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline Problem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the problem.</p>
     */
    inline Problem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the problem.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The name of the problem.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The name of the problem.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The name of the problem.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The name of the problem.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The name of the problem.</p>
     */
    inline Problem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The name of the problem.</p>
     */
    inline Problem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The name of the problem.</p>
     */
    inline Problem& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline const Aws::String& GetInsights() const{ return m_insights; }

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline void SetInsights(const Aws::String& value) { m_insightsHasBeenSet = true; m_insights = value; }

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline void SetInsights(Aws::String&& value) { m_insightsHasBeenSet = true; m_insights = std::move(value); }

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline void SetInsights(const char* value) { m_insightsHasBeenSet = true; m_insights.assign(value); }

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline Problem& WithInsights(const Aws::String& value) { SetInsights(value); return *this;}

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline Problem& WithInsights(Aws::String&& value) { SetInsights(std::move(value)); return *this;}

    /**
     * <p>A detailed analysis of the problem using machine learning.</p>
     */
    inline Problem& WithInsights(const char* value) { SetInsights(value); return *this;}


    /**
     * <p>The status of the problem.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the problem.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the problem.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the problem.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the problem.</p>
     */
    inline Problem& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the problem.</p>
     */
    inline Problem& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The resource affected by the problem.</p>
     */
    inline const Aws::String& GetAffectedResource() const{ return m_affectedResource; }

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline bool AffectedResourceHasBeenSet() const { return m_affectedResourceHasBeenSet; }

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline void SetAffectedResource(const Aws::String& value) { m_affectedResourceHasBeenSet = true; m_affectedResource = value; }

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline void SetAffectedResource(Aws::String&& value) { m_affectedResourceHasBeenSet = true; m_affectedResource = std::move(value); }

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline void SetAffectedResource(const char* value) { m_affectedResourceHasBeenSet = true; m_affectedResource.assign(value); }

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline Problem& WithAffectedResource(const Aws::String& value) { SetAffectedResource(value); return *this;}

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline Problem& WithAffectedResource(Aws::String&& value) { SetAffectedResource(std::move(value)); return *this;}

    /**
     * <p>The resource affected by the problem.</p>
     */
    inline Problem& WithAffectedResource(const char* value) { SetAffectedResource(value); return *this;}


    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline Problem& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time when the problem started, in epoch seconds.</p>
     */
    inline Problem& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline Problem& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time when the problem ended, in epoch seconds.</p>
     */
    inline Problem& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline const SeverityLevel& GetSeverityLevel() const{ return m_severityLevel; }

    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline bool SeverityLevelHasBeenSet() const { return m_severityLevelHasBeenSet; }

    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline void SetSeverityLevel(const SeverityLevel& value) { m_severityLevelHasBeenSet = true; m_severityLevel = value; }

    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline void SetSeverityLevel(SeverityLevel&& value) { m_severityLevelHasBeenSet = true; m_severityLevel = std::move(value); }

    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline Problem& WithSeverityLevel(const SeverityLevel& value) { SetSeverityLevel(value); return *this;}

    /**
     * <p>A measure of the level of impact of the problem.</p>
     */
    inline Problem& WithSeverityLevel(SeverityLevel&& value) { SetSeverityLevel(std::move(value)); return *this;}


    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline Problem& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline Problem& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group affected by the problem.</p>
     */
    inline Problem& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline const Aws::Map<FeedbackKey, FeedbackValue>& GetFeedback() const{ return m_feedback; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline void SetFeedback(const Aws::Map<FeedbackKey, FeedbackValue>& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline void SetFeedback(Aws::Map<FeedbackKey, FeedbackValue>&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& WithFeedback(const Aws::Map<FeedbackKey, FeedbackValue>& value) { SetFeedback(value); return *this;}

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& WithFeedback(Aws::Map<FeedbackKey, FeedbackValue>&& value) { SetFeedback(std::move(value)); return *this;}

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& AddFeedback(const FeedbackKey& key, const FeedbackValue& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(key, value); return *this; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& AddFeedback(FeedbackKey&& key, const FeedbackValue& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(std::move(key), value); return *this; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& AddFeedback(const FeedbackKey& key, FeedbackValue&& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Feedback provided by the user about the problem.</p>
     */
    inline Problem& AddFeedback(FeedbackKey&& key, FeedbackValue&& value) { m_feedbackHasBeenSet = true; m_feedback.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_insights;
    bool m_insightsHasBeenSet;

    Status m_status;
    bool m_statusHasBeenSet;

    Aws::String m_affectedResource;
    bool m_affectedResourceHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    SeverityLevel m_severityLevel;
    bool m_severityLevelHasBeenSet;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::Map<FeedbackKey, FeedbackValue> m_feedback;
    bool m_feedbackHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
