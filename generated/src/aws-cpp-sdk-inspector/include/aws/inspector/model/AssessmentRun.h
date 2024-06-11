/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentRunState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector/model/Attribute.h>
#include <aws/inspector/model/AssessmentRunStateChange.h>
#include <aws/inspector/model/AssessmentRunNotification.h>
#include <aws/inspector/model/Severity.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>A snapshot of an Amazon Inspector assessment run that contains the findings
   * of the assessment run .</p> <p>Used as the response element in the
   * <a>DescribeAssessmentRuns</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRun">AWS
   * API Reference</a></p>
   */
  class AssessmentRun
  {
  public:
    AWS_INSPECTOR_API AssessmentRun();
    AWS_INSPECTOR_API AssessmentRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AssessmentRun& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssessmentRun& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssessmentRun& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssessmentRun& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssessmentRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssessmentRun& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }
    inline AssessmentRun& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}
    inline AssessmentRun& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}
    inline AssessmentRun& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the assessment run.</p>
     */
    inline const AssessmentRunState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AssessmentRunState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AssessmentRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AssessmentRun& WithState(const AssessmentRunState& value) { SetState(value); return *this;}
    inline AssessmentRun& WithState(AssessmentRunState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the assessment run.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline AssessmentRun& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }
    inline AssessmentRun& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}
    inline AssessmentRun& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}
    inline AssessmentRun& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    inline AssessmentRun& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }
    inline AssessmentRun& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::move(value); }
    inline AssessmentRun& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}
    inline AssessmentRun& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(std::move(value)); return *this;}
    inline AssessmentRun& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }
    inline AssessmentRun& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssessmentRun& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssessmentRun& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline AssessmentRun& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline AssessmentRun& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline AssessmentRun& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline AssessmentRun& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateChangedAt() const{ return m_stateChangedAt; }
    inline bool StateChangedAtHasBeenSet() const { return m_stateChangedAtHasBeenSet; }
    inline void SetStateChangedAt(const Aws::Utils::DateTime& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = value; }
    inline void SetStateChangedAt(Aws::Utils::DateTime&& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = std::move(value); }
    inline AssessmentRun& WithStateChangedAt(const Aws::Utils::DateTime& value) { SetStateChangedAt(value); return *this;}
    inline AssessmentRun& WithStateChangedAt(Aws::Utils::DateTime&& value) { SetStateChangedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline bool GetDataCollected() const{ return m_dataCollected; }
    inline bool DataCollectedHasBeenSet() const { return m_dataCollectedHasBeenSet; }
    inline void SetDataCollected(bool value) { m_dataCollectedHasBeenSet = true; m_dataCollected = value; }
    inline AssessmentRun& WithDataCollected(bool value) { SetDataCollected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline const Aws::Vector<AssessmentRunStateChange>& GetStateChanges() const{ return m_stateChanges; }
    inline bool StateChangesHasBeenSet() const { return m_stateChangesHasBeenSet; }
    inline void SetStateChanges(const Aws::Vector<AssessmentRunStateChange>& value) { m_stateChangesHasBeenSet = true; m_stateChanges = value; }
    inline void SetStateChanges(Aws::Vector<AssessmentRunStateChange>&& value) { m_stateChangesHasBeenSet = true; m_stateChanges = std::move(value); }
    inline AssessmentRun& WithStateChanges(const Aws::Vector<AssessmentRunStateChange>& value) { SetStateChanges(value); return *this;}
    inline AssessmentRun& WithStateChanges(Aws::Vector<AssessmentRunStateChange>&& value) { SetStateChanges(std::move(value)); return *this;}
    inline AssessmentRun& AddStateChanges(const AssessmentRunStateChange& value) { m_stateChangesHasBeenSet = true; m_stateChanges.push_back(value); return *this; }
    inline AssessmentRun& AddStateChanges(AssessmentRunStateChange&& value) { m_stateChangesHasBeenSet = true; m_stateChanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline const Aws::Vector<AssessmentRunNotification>& GetNotifications() const{ return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    inline void SetNotifications(const Aws::Vector<AssessmentRunNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }
    inline void SetNotifications(Aws::Vector<AssessmentRunNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }
    inline AssessmentRun& WithNotifications(const Aws::Vector<AssessmentRunNotification>& value) { SetNotifications(value); return *this;}
    inline AssessmentRun& WithNotifications(Aws::Vector<AssessmentRunNotification>&& value) { SetNotifications(std::move(value)); return *this;}
    inline AssessmentRun& AddNotifications(const AssessmentRunNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }
    inline AssessmentRun& AddNotifications(AssessmentRunNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline const Aws::Map<Severity, int>& GetFindingCounts() const{ return m_findingCounts; }
    inline bool FindingCountsHasBeenSet() const { return m_findingCountsHasBeenSet; }
    inline void SetFindingCounts(const Aws::Map<Severity, int>& value) { m_findingCountsHasBeenSet = true; m_findingCounts = value; }
    inline void SetFindingCounts(Aws::Map<Severity, int>&& value) { m_findingCountsHasBeenSet = true; m_findingCounts = std::move(value); }
    inline AssessmentRun& WithFindingCounts(const Aws::Map<Severity, int>& value) { SetFindingCounts(value); return *this;}
    inline AssessmentRun& WithFindingCounts(Aws::Map<Severity, int>&& value) { SetFindingCounts(std::move(value)); return *this;}
    inline AssessmentRun& AddFindingCounts(const Severity& key, int value) { m_findingCountsHasBeenSet = true; m_findingCounts.emplace(key, value); return *this; }
    inline AssessmentRun& AddFindingCounts(Severity&& key, int value) { m_findingCountsHasBeenSet = true; m_findingCounts.emplace(std::move(key), value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    AssessmentRunState m_state;
    bool m_stateHasBeenSet = false;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;

    Aws::Utils::DateTime m_stateChangedAt;
    bool m_stateChangedAtHasBeenSet = false;

    bool m_dataCollected;
    bool m_dataCollectedHasBeenSet = false;

    Aws::Vector<AssessmentRunStateChange> m_stateChanges;
    bool m_stateChangesHasBeenSet = false;

    Aws::Vector<AssessmentRunNotification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    Aws::Map<Severity, int> m_findingCounts;
    bool m_findingCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
