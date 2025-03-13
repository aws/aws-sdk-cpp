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
    AWS_FIS_API Experiment() = default;
    AWS_FIS_API Experiment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Experiment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Experiment& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Experiment& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const { return m_experimentTemplateId; }
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }
    template<typename ExperimentTemplateIdT = Aws::String>
    void SetExperimentTemplateId(ExperimentTemplateIdT&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::forward<ExperimentTemplateIdT>(value); }
    template<typename ExperimentTemplateIdT = Aws::String>
    Experiment& WithExperimentTemplateId(ExperimentTemplateIdT&& value) { SetExperimentTemplateId(std::forward<ExperimentTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Experiment& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ExperimentState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ExperimentState>
    Experiment& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTarget>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<Aws::String, ExperimentTarget>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<Aws::String, ExperimentTarget>>
    Experiment& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsKeyT = Aws::String, typename TargetsValueT = ExperimentTarget>
    Experiment& AddTargets(TargetsKeyT&& key, TargetsValueT&& value) {
      m_targetsHasBeenSet = true; m_targets.emplace(std::forward<TargetsKeyT>(key), std::forward<TargetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Map<Aws::String, ExperimentAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Map<Aws::String, ExperimentAction>>
    Experiment& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsKeyT = Aws::String, typename ActionsValueT = ExperimentAction>
    Experiment& AddActions(ActionsKeyT&& key, ActionsValueT&& value) {
      m_actionsHasBeenSet = true; m_actions.emplace(std::forward<ActionsKeyT>(key), std::forward<ActionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentStopCondition>& GetStopConditions() const { return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    template<typename StopConditionsT = Aws::Vector<ExperimentStopCondition>>
    void SetStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::forward<StopConditionsT>(value); }
    template<typename StopConditionsT = Aws::Vector<ExperimentStopCondition>>
    Experiment& WithStopConditions(StopConditionsT&& value) { SetStopConditions(std::forward<StopConditionsT>(value)); return *this;}
    template<typename StopConditionsT = ExperimentStopCondition>
    Experiment& AddStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.emplace_back(std::forward<StopConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Experiment& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Experiment& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the experiment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Experiment& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Experiment& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Experiment& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const ExperimentLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = ExperimentLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = ExperimentLogConfiguration>
    Experiment& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for the experiment.</p>
     */
    inline const ExperimentOptions& GetExperimentOptions() const { return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    template<typename ExperimentOptionsT = ExperimentOptions>
    void SetExperimentOptions(ExperimentOptionsT&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::forward<ExperimentOptionsT>(value); }
    template<typename ExperimentOptionsT = ExperimentOptions>
    Experiment& WithExperimentOptions(ExperimentOptionsT&& value) { SetExperimentOptions(std::forward<ExperimentOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of target account configurations for the experiment.</p>
     */
    inline long long GetTargetAccountConfigurationsCount() const { return m_targetAccountConfigurationsCount; }
    inline bool TargetAccountConfigurationsCountHasBeenSet() const { return m_targetAccountConfigurationsCountHasBeenSet; }
    inline void SetTargetAccountConfigurationsCount(long long value) { m_targetAccountConfigurationsCountHasBeenSet = true; m_targetAccountConfigurationsCount = value; }
    inline Experiment& WithTargetAccountConfigurationsCount(long long value) { SetTargetAccountConfigurationsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report configuration for the experiment.</p>
     */
    inline const ExperimentReportConfiguration& GetExperimentReportConfiguration() const { return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    template<typename ExperimentReportConfigurationT = ExperimentReportConfiguration>
    void SetExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::forward<ExperimentReportConfigurationT>(value); }
    template<typename ExperimentReportConfigurationT = ExperimentReportConfiguration>
    Experiment& WithExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { SetExperimentReportConfiguration(std::forward<ExperimentReportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment report for the experiment.</p>
     */
    inline const ExperimentReport& GetExperimentReport() const { return m_experimentReport; }
    inline bool ExperimentReportHasBeenSet() const { return m_experimentReportHasBeenSet; }
    template<typename ExperimentReportT = ExperimentReport>
    void SetExperimentReport(ExperimentReportT&& value) { m_experimentReportHasBeenSet = true; m_experimentReport = std::forward<ExperimentReportT>(value); }
    template<typename ExperimentReportT = ExperimentReport>
    Experiment& WithExperimentReport(ExperimentReportT&& value) { SetExperimentReport(std::forward<ExperimentReportT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    ExperimentOptions m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    long long m_targetAccountConfigurationsCount{0};
    bool m_targetAccountConfigurationsCountHasBeenSet = false;

    ExperimentReportConfiguration m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;

    ExperimentReport m_experimentReport;
    bool m_experimentReportHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
