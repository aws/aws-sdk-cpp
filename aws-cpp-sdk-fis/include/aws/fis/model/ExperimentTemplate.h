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
  class AWS_FIS_API ExperimentTemplate
  {
  public:
    ExperimentTemplate();
    ExperimentTemplate(Aws::Utils::Json::JsonView jsonValue);
    ExperimentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the experiment template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline ExperimentTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline ExperimentTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline ExperimentTemplate& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description for the experiment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the experiment template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the experiment template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the experiment template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the experiment template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the experiment template.</p>
     */
    inline ExperimentTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the experiment template.</p>
     */
    inline ExperimentTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the experiment template.</p>
     */
    inline ExperimentTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateTarget>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, ExperimentTemplateTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, ExperimentTemplateTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& WithTargets(const Aws::Map<Aws::String, ExperimentTemplateTarget>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& WithTargets(Aws::Map<Aws::String, ExperimentTemplateTarget>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(const Aws::String& key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(Aws::String&& key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(const Aws::String& key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(Aws::String&& key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(const char* key, ExperimentTemplateTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline ExperimentTemplate& AddTargets(const char* key, const ExperimentTemplateTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, ExperimentTemplateAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(const Aws::Map<Aws::String, ExperimentTemplateAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(Aws::Map<Aws::String, ExperimentTemplateAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& WithActions(const Aws::Map<Aws::String, ExperimentTemplateAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& WithActions(Aws::Map<Aws::String, ExperimentTemplateAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(const Aws::String& key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(Aws::String&& key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(const Aws::String& key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(Aws::String&& key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(const char* key, ExperimentTemplateAction&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline ExperimentTemplate& AddActions(const char* key, const ExperimentTemplateAction& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }


    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<ExperimentTemplateStopCondition>& GetStopConditions() const{ return m_stopConditions; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(const Aws::Vector<ExperimentTemplateStopCondition>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(Aws::Vector<ExperimentTemplateStopCondition>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline ExperimentTemplate& WithStopConditions(const Aws::Vector<ExperimentTemplateStopCondition>& value) { SetStopConditions(value); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline ExperimentTemplate& WithStopConditions(Aws::Vector<ExperimentTemplateStopCondition>&& value) { SetStopConditions(std::move(value)); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline ExperimentTemplate& AddStopConditions(const ExperimentTemplateStopCondition& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline ExperimentTemplate& AddStopConditions(ExperimentTemplateStopCondition&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time the experiment template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the experiment template was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the experiment template was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the experiment template was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the experiment template was created.</p>
     */
    inline ExperimentTemplate& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the experiment template was created.</p>
     */
    inline ExperimentTemplate& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline ExperimentTemplate& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the experiment template was last updated.</p>
     */
    inline ExperimentTemplate& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline ExperimentTemplate& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline ExperimentTemplate& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role.</p>
     */
    inline ExperimentTemplate& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The tags for the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the experiment template.</p>
     */
    inline ExperimentTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, ExperimentTemplateTarget> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Map<Aws::String, ExperimentTemplateAction> m_actions;
    bool m_actionsHasBeenSet;

    Aws::Vector<ExperimentTemplateStopCondition> m_stopConditions;
    bool m_stopConditionsHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
