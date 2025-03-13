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
    AWS_INSPECTOR_API AssessmentRun() = default;
    AWS_INSPECTOR_API AssessmentRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssessmentRun& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssessmentRun& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const { return m_assessmentTemplateArn; }
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }
    template<typename AssessmentTemplateArnT = Aws::String>
    void SetAssessmentTemplateArn(AssessmentTemplateArnT&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::forward<AssessmentTemplateArnT>(value); }
    template<typename AssessmentTemplateArnT = Aws::String>
    AssessmentRun& WithAssessmentTemplateArn(AssessmentTemplateArnT&& value) { SetAssessmentTemplateArn(std::forward<AssessmentTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the assessment run.</p>
     */
    inline AssessmentRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AssessmentRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AssessmentRun& WithState(AssessmentRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the assessment run.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline AssessmentRun& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    AssessmentRun& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    AssessmentRun& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const { return m_userAttributesForFindings; }
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }
    template<typename UserAttributesForFindingsT = Aws::Vector<Attribute>>
    void SetUserAttributesForFindings(UserAttributesForFindingsT&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::forward<UserAttributesForFindingsT>(value); }
    template<typename UserAttributesForFindingsT = Aws::Vector<Attribute>>
    AssessmentRun& WithUserAttributesForFindings(UserAttributesForFindingsT&& value) { SetUserAttributesForFindings(std::forward<UserAttributesForFindingsT>(value)); return *this;}
    template<typename UserAttributesForFindingsT = Attribute>
    AssessmentRun& AddUserAttributesForFindings(UserAttributesForFindingsT&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.emplace_back(std::forward<UserAttributesForFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AssessmentRun& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    AssessmentRun& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    AssessmentRun& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateChangedAt() const { return m_stateChangedAt; }
    inline bool StateChangedAtHasBeenSet() const { return m_stateChangedAtHasBeenSet; }
    template<typename StateChangedAtT = Aws::Utils::DateTime>
    void SetStateChangedAt(StateChangedAtT&& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = std::forward<StateChangedAtT>(value); }
    template<typename StateChangedAtT = Aws::Utils::DateTime>
    AssessmentRun& WithStateChangedAt(StateChangedAtT&& value) { SetStateChangedAt(std::forward<StateChangedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline bool GetDataCollected() const { return m_dataCollected; }
    inline bool DataCollectedHasBeenSet() const { return m_dataCollectedHasBeenSet; }
    inline void SetDataCollected(bool value) { m_dataCollectedHasBeenSet = true; m_dataCollected = value; }
    inline AssessmentRun& WithDataCollected(bool value) { SetDataCollected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline const Aws::Vector<AssessmentRunStateChange>& GetStateChanges() const { return m_stateChanges; }
    inline bool StateChangesHasBeenSet() const { return m_stateChangesHasBeenSet; }
    template<typename StateChangesT = Aws::Vector<AssessmentRunStateChange>>
    void SetStateChanges(StateChangesT&& value) { m_stateChangesHasBeenSet = true; m_stateChanges = std::forward<StateChangesT>(value); }
    template<typename StateChangesT = Aws::Vector<AssessmentRunStateChange>>
    AssessmentRun& WithStateChanges(StateChangesT&& value) { SetStateChanges(std::forward<StateChangesT>(value)); return *this;}
    template<typename StateChangesT = AssessmentRunStateChange>
    AssessmentRun& AddStateChanges(StateChangesT&& value) { m_stateChangesHasBeenSet = true; m_stateChanges.emplace_back(std::forward<StateChangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline const Aws::Vector<AssessmentRunNotification>& GetNotifications() const { return m_notifications; }
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }
    template<typename NotificationsT = Aws::Vector<AssessmentRunNotification>>
    void SetNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications = std::forward<NotificationsT>(value); }
    template<typename NotificationsT = Aws::Vector<AssessmentRunNotification>>
    AssessmentRun& WithNotifications(NotificationsT&& value) { SetNotifications(std::forward<NotificationsT>(value)); return *this;}
    template<typename NotificationsT = AssessmentRunNotification>
    AssessmentRun& AddNotifications(NotificationsT&& value) { m_notificationsHasBeenSet = true; m_notifications.emplace_back(std::forward<NotificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline const Aws::Map<Severity, int>& GetFindingCounts() const { return m_findingCounts; }
    inline bool FindingCountsHasBeenSet() const { return m_findingCountsHasBeenSet; }
    template<typename FindingCountsT = Aws::Map<Severity, int>>
    void SetFindingCounts(FindingCountsT&& value) { m_findingCountsHasBeenSet = true; m_findingCounts = std::forward<FindingCountsT>(value); }
    template<typename FindingCountsT = Aws::Map<Severity, int>>
    AssessmentRun& WithFindingCounts(FindingCountsT&& value) { SetFindingCounts(std::forward<FindingCountsT>(value)); return *this;}
    inline AssessmentRun& AddFindingCounts(Severity key, int value) {
      m_findingCountsHasBeenSet = true; m_findingCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet = false;

    AssessmentRunState m_state{AssessmentRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::Utils::DateTime m_stateChangedAt{};
    bool m_stateChangedAtHasBeenSet = false;

    bool m_dataCollected{false};
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
