/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fis/model/ExperimentTemplateLogConfiguration.h>
#include <aws/fis/model/ExperimentTemplateExperimentOptions.h>
#include <aws/fis/model/ExperimentTemplateReportConfiguration.h>
#include <aws/fis/model/ExperimentTemplateTarget.h>
#include <aws/fis/model/ExperimentTemplateAction.h>
#include <aws/fis/model/ExperimentTemplateStopCondition.h>
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
   * <p>Describes an experiment template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplate">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplate
  {
  public:
    AWS_FIS_API ExperimentTemplate() = default;
    AWS_FIS_API ExperimentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ExperimentTemplate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExperimentTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the experiment template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ExperimentTemplate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateTarget>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Map<Aws::String, ExperimentTemplateTarget>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Map<Aws::String, ExperimentTemplateTarget>>
    ExperimentTemplate& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsKeyT = Aws::String, typename TargetsValueT = ExperimentTemplateTarget>
    ExperimentTemplate& AddTargets(TargetsKeyT&& key, TargetsValueT&& value) {
      m_targetsHasBeenSet = true; m_targets.emplace(std::forward<TargetsKeyT>(key), std::forward<TargetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Map<Aws::String, ExperimentTemplateAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Map<Aws::String, ExperimentTemplateAction>>
    ExperimentTemplate& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsKeyT = Aws::String, typename ActionsValueT = ExperimentTemplateAction>
    ExperimentTemplate& AddActions(ActionsKeyT&& key, ActionsValueT&& value) {
      m_actionsHasBeenSet = true; m_actions.emplace(std::forward<ActionsKeyT>(key), std::forward<ActionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentTemplateStopCondition>& GetStopConditions() const { return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    template<typename StopConditionsT = Aws::Vector<ExperimentTemplateStopCondition>>
    void SetStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::forward<StopConditionsT>(value); }
    template<typename StopConditionsT = Aws::Vector<ExperimentTemplateStopCondition>>
    ExperimentTemplate& WithStopConditions(StopConditionsT&& value) { SetStopConditions(std::forward<StopConditionsT>(value)); return *this;}
    template<typename StopConditionsT = ExperimentTemplateStopCondition>
    ExperimentTemplate& AddStopConditions(StopConditionsT&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.emplace_back(std::forward<StopConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the experiment template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ExperimentTemplate& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    ExperimentTemplate& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ExperimentTemplate& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ExperimentTemplate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ExperimentTemplate& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const ExperimentTemplateLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = ExperimentTemplateLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = ExperimentTemplateLogConfiguration>
    ExperimentTemplate& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for an experiment template.</p>
     */
    inline const ExperimentTemplateExperimentOptions& GetExperimentOptions() const { return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    template<typename ExperimentOptionsT = ExperimentTemplateExperimentOptions>
    void SetExperimentOptions(ExperimentOptionsT&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::forward<ExperimentOptionsT>(value); }
    template<typename ExperimentOptionsT = ExperimentTemplateExperimentOptions>
    ExperimentTemplate& WithExperimentOptions(ExperimentOptionsT&& value) { SetExperimentOptions(std::forward<ExperimentOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of target account configurations for the experiment template.</p>
     */
    inline long long GetTargetAccountConfigurationsCount() const { return m_targetAccountConfigurationsCount; }
    inline bool TargetAccountConfigurationsCountHasBeenSet() const { return m_targetAccountConfigurationsCountHasBeenSet; }
    inline void SetTargetAccountConfigurationsCount(long long value) { m_targetAccountConfigurationsCountHasBeenSet = true; m_targetAccountConfigurationsCount = value; }
    inline ExperimentTemplate& WithTargetAccountConfigurationsCount(long long value) { SetTargetAccountConfigurationsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the report configuration for the experiment template.</p>
     */
    inline const ExperimentTemplateReportConfiguration& GetExperimentReportConfiguration() const { return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    template<typename ExperimentReportConfigurationT = ExperimentTemplateReportConfiguration>
    void SetExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::forward<ExperimentReportConfigurationT>(value); }
    template<typename ExperimentReportConfigurationT = ExperimentTemplateReportConfiguration>
    ExperimentTemplate& WithExperimentReportConfiguration(ExperimentReportConfigurationT&& value) { SetExperimentReportConfiguration(std::forward<ExperimentReportConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ExperimentTemplateTarget> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, ExperimentTemplateAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<ExperimentTemplateStopCondition> m_stopConditions;
    bool m_stopConditionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentTemplateLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    ExperimentTemplateExperimentOptions m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    long long m_targetAccountConfigurationsCount{0};
    bool m_targetAccountConfigurationsCountHasBeenSet = false;

    ExperimentTemplateReportConfiguration m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
