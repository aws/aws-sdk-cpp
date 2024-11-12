/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fis/model/ExperimentLogConfiguration.h>
#include <aws/fis/model/ExperimentOptions.h>
#include <aws/fis/model/ExperimentReportConfiguration.h>
#include <aws/fis/model/ExperimentReport.h>
#include <aws/fis/model/ExperimentTarget.h>
#include <aws/fis/model/ExperimentAction.h>
#include <aws/fis/model/ExperimentStopCondition.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes an experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/Experiment">AWS API
   * Reference</a></p>
   */
  class Experiment
  {
  public:
    AWS_FIS_API Experiment();
    AWS_FIS_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Experiment& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Experiment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Experiment& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Experiment& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Experiment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Experiment& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const{ return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    inline void SetExperimentTemplateId(const Aws::String& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = value; }
    inline void SetExperimentTemplateId(Aws::String&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::move(value); }
    inline void SetExperimentTemplateId(const char* value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId.assign(value); }
    inline Experiment& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}
    inline Experiment& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}
    inline Experiment& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Experiment& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Experiment& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Experiment& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ExperimentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ExperimentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Experiment& WithState(const ExperimentState& value) { SetState(value); return *this;}
    inline Experiment& WithState(ExperimentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTarget>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, ExperimentTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, ExperimentTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline Experiment& WithTargets(const Aws::Map<Aws::String, ExperimentTarget>& value) { SetTargets(value); return *this;}
    inline Experiment& WithTargets(Aws::Map<Aws::String, ExperimentTarget>&& value) { SetTargets(std::move(value)); return *this;}
    inline Experiment& AddTargets(const Aws::String& key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline Experiment& AddTargets(Aws::String&& key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline Experiment& AddTargets(const Aws::String& key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddTargets(Aws::String&& key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline Experiment& AddTargets(const char* key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddTargets(const char* key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Map<Aws::String, ExperimentAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Map<Aws::String, ExperimentAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline Experiment& WithActions(const Aws::Map<Aws::String, ExperimentAction>& value) { SetActions(value); return *this;}
    inline Experiment& WithActions(Aws::Map<Aws::String, ExperimentAction>&& value) { SetActions(std::move(value)); return *this;}
    inline Experiment& AddActions(const Aws::String& key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    inline Experiment& AddActions(Aws::String&& key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }
    inline Experiment& AddActions(const Aws::String& key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddActions(Aws::String&& key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }
    inline Experiment& AddActions(const char* key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddActions(const char* key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentStopCondition>& GetStopConditions() const{ return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    inline void SetStopConditions(const Aws::Vector<ExperimentStopCondition>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }
    inline void SetStopConditions(Aws::Vector<ExperimentStopCondition>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }
    inline Experiment& WithStopConditions(const Aws::Vector<ExperimentStopCondition>& value) { SetStopConditions(value); return *this;}
    inline Experiment& WithStopConditions(Aws::Vector<ExperimentStopCondition>&& value) { SetStopConditions(std::move(value)); return *this;}
    inline Experiment& AddStopConditions(const ExperimentStopCondition& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }
    inline Experiment& AddStopConditions(ExperimentStopCondition&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Experiment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Experiment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Experiment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Experiment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the experiment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Experiment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Experiment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Experiment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Experiment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Experiment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Experiment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Experiment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Experiment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Experiment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Experiment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const ExperimentLogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const ExperimentLogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(ExperimentLogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline Experiment& WithLogConfiguration(const ExperimentLogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline Experiment& WithLogConfiguration(ExperimentLogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment.</p>
     */
    inline const ExperimentOptions& GetExperimentOptions() const{ return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    inline void SetExperimentOptions(const ExperimentOptions& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = value; }
    inline void SetExperimentOptions(ExperimentOptions&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::move(value); }
    inline Experiment& WithExperimentOptions(const ExperimentOptions& value) { SetExperimentOptions(value); return *this;}
    inline Experiment& WithExperimentOptions(ExperimentOptions&& value) { SetExperimentOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of target account configurations for the experiment.</p>
     */
    inline long long GetTargetAccountConfigurationsCount() const{ return m_targetAccountConfigurationsCount; }
    inline bool TargetAccountConfigurationsCountHasBeenSet() const { return m_targetAccountConfigurationsCountHasBeenSet; }
    inline void SetTargetAccountConfigurationsCount(long long value) { m_targetAccountConfigurationsCountHasBeenSet = true; m_targetAccountConfigurationsCount = value; }
    inline Experiment& WithTargetAccountConfigurationsCount(long long value) { SetTargetAccountConfigurationsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment.</p>
     */
    inline const ExperimentReportConfiguration& GetExperimentReportConfiguration() const{ return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    inline void SetExperimentReportConfiguration(const ExperimentReportConfiguration& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = value; }
    inline void SetExperimentReportConfiguration(ExperimentReportConfiguration&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::move(value); }
    inline Experiment& WithExperimentReportConfiguration(const ExperimentReportConfiguration& value) { SetExperimentReportConfiguration(value); return *this;}
    inline Experiment& WithExperimentReportConfiguration(ExperimentReportConfiguration&& value) { SetExperimentReportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report for the experiment.</p>
     */
    inline const ExperimentReport& GetExperimentReport() const{ return m_experimentReport; }
    inline bool ExperimentReportHasBeenSet() const { return m_experimentReportHasBeenSet; }
    inline void SetExperimentReport(const ExperimentReport& value) { m_experimentReportHasBeenSet = true; m_experimentReport = value; }
    inline void SetExperimentReport(ExperimentReport&& value) { m_experimentReportHasBeenSet = true; m_experimentReport = std::move(value); }
    inline Experiment& WithExperimentReport(const ExperimentReport& value) { SetExperimentReport(value); return *this;}
    inline Experiment& WithExperimentReport(ExperimentReport&& value) { SetExperimentReport(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_experimentTemplateId;
    bool m_experimentTemplateIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ExperimentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, ExperimentTarget> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, ExperimentAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<ExperimentStopCondition> m_stopConditions;
    bool m_stopConditionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    ExperimentOptions m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    long long m_targetAccountConfigurationsCount;
    bool m_targetAccountConfigurationsCountHasBeenSet = false;

    ExperimentReportConfiguration m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;

    ExperimentReport m_experimentReport;
    bool m_experimentReportHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
