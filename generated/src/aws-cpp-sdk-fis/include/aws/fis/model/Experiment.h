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


    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline Experiment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline Experiment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline Experiment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetExperimentTemplateId() const{ return m_experimentTemplateId; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline bool ExperimentTemplateIdHasBeenSet() const { return m_experimentTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetExperimentTemplateId(const Aws::String& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = value; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetExperimentTemplateId(Aws::String&& value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId = std::move(value); }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetExperimentTemplateId(const char* value) { m_experimentTemplateIdHasBeenSet = true; m_experimentTemplateId.assign(value); }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline Experiment& WithExperimentTemplateId(const Aws::String& value) { SetExperimentTemplateId(value); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline Experiment& WithExperimentTemplateId(Aws::String&& value) { SetExperimentTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline Experiment& WithExperimentTemplateId(const char* value) { SetExperimentTemplateId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline Experiment& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline Experiment& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline Experiment& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The state of the experiment.</p>
     */
    inline const ExperimentState& GetState() const{ return m_state; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline void SetState(const ExperimentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the experiment.</p>
     */
    inline void SetState(ExperimentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the experiment.</p>
     */
    inline Experiment& WithState(const ExperimentState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the experiment.</p>
     */
    inline Experiment& WithState(ExperimentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTarget>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, ExperimentTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, ExperimentTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& WithTargets(const Aws::Map<Aws::String, ExperimentTarget>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& WithTargets(Aws::Map<Aws::String, ExperimentTarget>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(const Aws::String& key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(Aws::String&& key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(const Aws::String& key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(Aws::String&& key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(const char* key, ExperimentTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline Experiment& AddTargets(const char* key, const ExperimentTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(const Aws::Map<Aws::String, ExperimentAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(Aws::Map<Aws::String, ExperimentAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& WithActions(const Aws::Map<Aws::String, ExperimentAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& WithActions(Aws::Map<Aws::String, ExperimentAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(const Aws::String& key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(Aws::String&& key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(const Aws::String& key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(Aws::String&& key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(const char* key, ExperimentAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline Experiment& AddActions(const char* key, const ExperimentAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }


    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentStopCondition>& GetStopConditions() const{ return m_stopConditions; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(const Aws::Vector<ExperimentStopCondition>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(Aws::Vector<ExperimentStopCondition>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline Experiment& WithStopConditions(const Aws::Vector<ExperimentStopCondition>& value) { SetStopConditions(value); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline Experiment& WithStopConditions(Aws::Vector<ExperimentStopCondition>&& value) { SetStopConditions(std::move(value)); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline Experiment& AddStopConditions(const ExperimentStopCondition& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline Experiment& AddStopConditions(ExperimentStopCondition&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time that the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the experiment was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the experiment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the experiment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the experiment was created.</p>
     */
    inline Experiment& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the experiment was created.</p>
     */
    inline Experiment& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the experiment started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the experiment started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the experiment started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the experiment started.</p>
     */
    inline Experiment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the experiment started.</p>
     */
    inline Experiment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the experiment ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time that the experiment ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time that the experiment ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time that the experiment ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time that the experiment ended.</p>
     */
    inline Experiment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time that the experiment ended.</p>
     */
    inline Experiment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The tags for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the experiment.</p>
     */
    inline Experiment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline const ExperimentLogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline void SetLogConfiguration(const ExperimentLogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline void SetLogConfiguration(ExperimentLogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline Experiment& WithLogConfiguration(const ExperimentLogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The configuration for experiment logging.</p>
     */
    inline Experiment& WithLogConfiguration(ExperimentLogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
