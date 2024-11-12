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
    AWS_FIS_API ExperimentTemplate();
    AWS_FIS_API ExperimentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ExperimentTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ExperimentTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ExperimentTemplate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExperimentTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExperimentTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExperimentTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the experiment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ExperimentTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ExperimentTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ExperimentTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateTarget>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, ExperimentTemplateTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, ExperimentTemplateTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline ExperimentTemplate& WithTargets(const Aws::Map<Aws::String, ExperimentTemplateTarget>& value) { SetTargets(value); return *this;}
    inline ExperimentTemplate& WithTargets(Aws::Map<Aws::String, ExperimentTemplateTarget>&& value) { SetTargets(std::move(value)); return *this;}
    inline ExperimentTemplate& AddTargets(const Aws::String& key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline ExperimentTemplate& AddTargets(Aws::String&& key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline ExperimentTemplate& AddTargets(const Aws::String& key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddTargets(Aws::String&& key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentTemplate& AddTargets(const char* key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddTargets(const char* key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Map<Aws::String, ExperimentTemplateAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Map<Aws::String, ExperimentTemplateAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline ExperimentTemplate& WithActions(const Aws::Map<Aws::String, ExperimentTemplateAction>& value) { SetActions(value); return *this;}
    inline ExperimentTemplate& WithActions(Aws::Map<Aws::String, ExperimentTemplateAction>&& value) { SetActions(std::move(value)); return *this;}
    inline ExperimentTemplate& AddActions(const Aws::String& key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    inline ExperimentTemplate& AddActions(Aws::String&& key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }
    inline ExperimentTemplate& AddActions(const Aws::String& key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddActions(Aws::String&& key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentTemplate& AddActions(const char* key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddActions(const char* key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentTemplateStopCondition>& GetStopConditions() const{ return m_stopConditions; }
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
    inline void SetStopConditions(const Aws::Vector<ExperimentTemplateStopCondition>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }
    inline void SetStopConditions(Aws::Vector<ExperimentTemplateStopCondition>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }
    inline ExperimentTemplate& WithStopConditions(const Aws::Vector<ExperimentTemplateStopCondition>& value) { SetStopConditions(value); return *this;}
    inline ExperimentTemplate& WithStopConditions(Aws::Vector<ExperimentTemplateStopCondition>&& value) { SetStopConditions(std::move(value)); return *this;}
    inline ExperimentTemplate& AddStopConditions(const ExperimentTemplateStopCondition& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }
    inline ExperimentTemplate& AddStopConditions(ExperimentTemplateStopCondition&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the experiment template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ExperimentTemplate& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ExperimentTemplate& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ExperimentTemplate& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ExperimentTemplate& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ExperimentTemplate& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ExperimentTemplate& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ExperimentTemplate& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ExperimentTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ExperimentTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ExperimentTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ExperimentTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExperimentTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ExperimentTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExperimentTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExperimentTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const ExperimentTemplateLogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const ExperimentTemplateLogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(ExperimentTemplateLogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline ExperimentTemplate& WithLogConfiguration(const ExperimentTemplateLogConfiguration& value) { SetLogConfiguration(value); return *this;}
    inline ExperimentTemplate& WithLogConfiguration(ExperimentTemplateLogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The experiment options for an experiment template.</p>
     */
    inline const ExperimentTemplateExperimentOptions& GetExperimentOptions() const{ return m_experimentOptions; }
    inline bool ExperimentOptionsHasBeenSet() const { return m_experimentOptionsHasBeenSet; }
    inline void SetExperimentOptions(const ExperimentTemplateExperimentOptions& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = value; }
    inline void SetExperimentOptions(ExperimentTemplateExperimentOptions&& value) { m_experimentOptionsHasBeenSet = true; m_experimentOptions = std::move(value); }
    inline ExperimentTemplate& WithExperimentOptions(const ExperimentTemplateExperimentOptions& value) { SetExperimentOptions(value); return *this;}
    inline ExperimentTemplate& WithExperimentOptions(ExperimentTemplateExperimentOptions&& value) { SetExperimentOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of target account configurations for the experiment template.</p>
     */
    inline long long GetTargetAccountConfigurationsCount() const{ return m_targetAccountConfigurationsCount; }
    inline bool TargetAccountConfigurationsCountHasBeenSet() const { return m_targetAccountConfigurationsCountHasBeenSet; }
    inline void SetTargetAccountConfigurationsCount(long long value) { m_targetAccountConfigurationsCountHasBeenSet = true; m_targetAccountConfigurationsCount = value; }
    inline ExperimentTemplate& WithTargetAccountConfigurationsCount(long long value) { SetTargetAccountConfigurationsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the report configuration for the experiment template.</p>
     */
    inline const ExperimentTemplateReportConfiguration& GetExperimentReportConfiguration() const{ return m_experimentReportConfiguration; }
    inline bool ExperimentReportConfigurationHasBeenSet() const { return m_experimentReportConfigurationHasBeenSet; }
    inline void SetExperimentReportConfiguration(const ExperimentTemplateReportConfiguration& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = value; }
    inline void SetExperimentReportConfiguration(ExperimentTemplateReportConfiguration&& value) { m_experimentReportConfigurationHasBeenSet = true; m_experimentReportConfiguration = std::move(value); }
    inline ExperimentTemplate& WithExperimentReportConfiguration(const ExperimentTemplateReportConfiguration& value) { SetExperimentReportConfiguration(value); return *this;}
    inline ExperimentTemplate& WithExperimentReportConfiguration(ExperimentTemplateReportConfiguration&& value) { SetExperimentReportConfiguration(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExperimentTemplateLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    ExperimentTemplateExperimentOptions m_experimentOptions;
    bool m_experimentOptionsHasBeenSet = false;

    long long m_targetAccountConfigurationsCount;
    bool m_targetAccountConfigurationsCountHasBeenSet = false;

    ExperimentTemplateReportConfiguration m_experimentReportConfiguration;
    bool m_experimentReportConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
