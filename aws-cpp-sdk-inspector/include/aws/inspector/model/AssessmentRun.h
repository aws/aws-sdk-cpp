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
  class AWS_INSPECTOR_API AssessmentRun
  {
  public:
    AssessmentRun();
    AssessmentRun(Aws::Utils::Json::JsonView jsonValue);
    AssessmentRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline AssessmentRun& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline AssessmentRun& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run.</p>
     */
    inline AssessmentRun& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline AssessmentRun& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline AssessmentRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The auto-generated name for the assessment run.</p>
     */
    inline AssessmentRun& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline const Aws::String& GetAssessmentTemplateArn() const{ return m_assessmentTemplateArn; }

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline bool AssessmentTemplateArnHasBeenSet() const { return m_assessmentTemplateArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline void SetAssessmentTemplateArn(const Aws::String& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = value; }

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline void SetAssessmentTemplateArn(Aws::String&& value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline void SetAssessmentTemplateArn(const char* value) { m_assessmentTemplateArnHasBeenSet = true; m_assessmentTemplateArn.assign(value); }

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline AssessmentRun& WithAssessmentTemplateArn(const Aws::String& value) { SetAssessmentTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline AssessmentRun& WithAssessmentTemplateArn(Aws::String&& value) { SetAssessmentTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment template that is associated with the assessment
     * run.</p>
     */
    inline AssessmentRun& WithAssessmentTemplateArn(const char* value) { SetAssessmentTemplateArn(value); return *this;}


    /**
     * <p>The state of the assessment run.</p>
     */
    inline const AssessmentRunState& GetState() const{ return m_state; }

    /**
     * <p>The state of the assessment run.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the assessment run.</p>
     */
    inline void SetState(const AssessmentRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the assessment run.</p>
     */
    inline void SetState(AssessmentRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the assessment run.</p>
     */
    inline AssessmentRun& WithState(const AssessmentRunState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the assessment run.</p>
     */
    inline AssessmentRun& WithState(AssessmentRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The duration of the assessment run.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the assessment run.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The duration of the assessment run.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The duration of the assessment run.</p>
     */
    inline AssessmentRun& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline AssessmentRun& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline AssessmentRun& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline AssessmentRun& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline AssessmentRun& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The rules packages selected for the assessment run.</p>
     */
    inline AssessmentRun& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline bool UserAttributesForFindingsHasBeenSet() const { return m_userAttributesForFindingsHasBeenSet; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = std::move(value); }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline AssessmentRun& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline AssessmentRun& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(std::move(value)); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline AssessmentRun& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline AssessmentRun& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline AssessmentRun& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline AssessmentRun& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline AssessmentRun& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when <a>StartAssessmentRun</a> was called.</p>
     */
    inline AssessmentRun& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }

    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }

    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }

    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }

    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline AssessmentRun& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}

    /**
     * <p>The assessment run completion time that corresponds to the rules packages
     * evaluation completion time or failure.</p>
     */
    inline AssessmentRun& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}


    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStateChangedAt() const{ return m_stateChangedAt; }

    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline bool StateChangedAtHasBeenSet() const { return m_stateChangedAtHasBeenSet; }

    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline void SetStateChangedAt(const Aws::Utils::DateTime& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = value; }

    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline void SetStateChangedAt(Aws::Utils::DateTime&& value) { m_stateChangedAtHasBeenSet = true; m_stateChangedAt = std::move(value); }

    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline AssessmentRun& WithStateChangedAt(const Aws::Utils::DateTime& value) { SetStateChangedAt(value); return *this;}

    /**
     * <p>The last time when the assessment run's state changed.</p>
     */
    inline AssessmentRun& WithStateChangedAt(Aws::Utils::DateTime&& value) { SetStateChangedAt(std::move(value)); return *this;}


    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline bool GetDataCollected() const{ return m_dataCollected; }

    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline bool DataCollectedHasBeenSet() const { return m_dataCollectedHasBeenSet; }

    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline void SetDataCollected(bool value) { m_dataCollectedHasBeenSet = true; m_dataCollected = value; }

    /**
     * <p>A Boolean value (true or false) that specifies whether the process of
     * collecting data from the agents is completed.</p>
     */
    inline AssessmentRun& WithDataCollected(bool value) { SetDataCollected(value); return *this;}


    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline const Aws::Vector<AssessmentRunStateChange>& GetStateChanges() const{ return m_stateChanges; }

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline bool StateChangesHasBeenSet() const { return m_stateChangesHasBeenSet; }

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline void SetStateChanges(const Aws::Vector<AssessmentRunStateChange>& value) { m_stateChangesHasBeenSet = true; m_stateChanges = value; }

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline void SetStateChanges(Aws::Vector<AssessmentRunStateChange>&& value) { m_stateChangesHasBeenSet = true; m_stateChanges = std::move(value); }

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline AssessmentRun& WithStateChanges(const Aws::Vector<AssessmentRunStateChange>& value) { SetStateChanges(value); return *this;}

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline AssessmentRun& WithStateChanges(Aws::Vector<AssessmentRunStateChange>&& value) { SetStateChanges(std::move(value)); return *this;}

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline AssessmentRun& AddStateChanges(const AssessmentRunStateChange& value) { m_stateChangesHasBeenSet = true; m_stateChanges.push_back(value); return *this; }

    /**
     * <p>A list of the assessment run state changes.</p>
     */
    inline AssessmentRun& AddStateChanges(AssessmentRunStateChange&& value) { m_stateChangesHasBeenSet = true; m_stateChanges.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline const Aws::Vector<AssessmentRunNotification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline void SetNotifications(const Aws::Vector<AssessmentRunNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline void SetNotifications(Aws::Vector<AssessmentRunNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline AssessmentRun& WithNotifications(const Aws::Vector<AssessmentRunNotification>& value) { SetNotifications(value); return *this;}

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline AssessmentRun& WithNotifications(Aws::Vector<AssessmentRunNotification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline AssessmentRun& AddNotifications(const AssessmentRunNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }

    /**
     * <p>A list of notifications for the event subscriptions. A notification about a
     * particular generated finding is added to this list only once.</p>
     */
    inline AssessmentRun& AddNotifications(AssessmentRunNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline const Aws::Map<Severity, int>& GetFindingCounts() const{ return m_findingCounts; }

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline bool FindingCountsHasBeenSet() const { return m_findingCountsHasBeenSet; }

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline void SetFindingCounts(const Aws::Map<Severity, int>& value) { m_findingCountsHasBeenSet = true; m_findingCounts = value; }

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline void SetFindingCounts(Aws::Map<Severity, int>&& value) { m_findingCountsHasBeenSet = true; m_findingCounts = std::move(value); }

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline AssessmentRun& WithFindingCounts(const Aws::Map<Severity, int>& value) { SetFindingCounts(value); return *this;}

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline AssessmentRun& WithFindingCounts(Aws::Map<Severity, int>&& value) { SetFindingCounts(std::move(value)); return *this;}

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline AssessmentRun& AddFindingCounts(const Severity& key, int value) { m_findingCountsHasBeenSet = true; m_findingCounts.emplace(key, value); return *this; }

    /**
     * <p>Provides a total count of generated findings per severity.</p>
     */
    inline AssessmentRun& AddFindingCounts(Severity&& key, int value) { m_findingCountsHasBeenSet = true; m_findingCounts.emplace(std::move(key), value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_assessmentTemplateArn;
    bool m_assessmentTemplateArnHasBeenSet;

    AssessmentRunState m_state;
    bool m_stateHasBeenSet;

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;

    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet;

    Aws::Utils::DateTime m_stateChangedAt;
    bool m_stateChangedAtHasBeenSet;

    bool m_dataCollected;
    bool m_dataCollectedHasBeenSet;

    Aws::Vector<AssessmentRunStateChange> m_stateChanges;
    bool m_stateChangesHasBeenSet;

    Aws::Vector<AssessmentRunNotification> m_notifications;
    bool m_notificationsHasBeenSet;

    Aws::Map<Severity, int> m_findingCounts;
    bool m_findingCountsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
