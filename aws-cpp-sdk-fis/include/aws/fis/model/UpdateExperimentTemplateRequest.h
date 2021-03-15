/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/UpdateExperimentTemplateStopConditionInput.h>
#include <aws/fis/model/UpdateExperimentTemplateTargetInput.h>
#include <aws/fis/model/UpdateExperimentTemplateActionInputItem.h>
#include <utility>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class AWS_FIS_API UpdateExperimentTemplateRequest : public FISRequest
  {
  public:
    UpdateExperimentTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperimentTemplate"; }

    Aws::String SerializePayload() const override;


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
    inline UpdateExperimentTemplateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline UpdateExperimentTemplateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment template.</p>
     */
    inline UpdateExperimentTemplateRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description for the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the template.</p>
     */
    inline UpdateExperimentTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the template.</p>
     */
    inline UpdateExperimentTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the template.</p>
     */
    inline UpdateExperimentTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& GetStopConditions() const{ return m_stopConditions; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline void SetStopConditions(Aws::Vector<UpdateExperimentTemplateStopConditionInput>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithStopConditions(const Aws::Vector<UpdateExperimentTemplateStopConditionInput>& value) { SetStopConditions(value); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithStopConditions(Aws::Vector<UpdateExperimentTemplateStopConditionInput>&& value) { SetStopConditions(std::move(value)); return *this;}

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddStopConditions(const UpdateExperimentTemplateStopConditionInput& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }

    /**
     * <p>The stop conditions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddStopConditions(UpdateExperimentTemplateStopConditionInput&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithTargets(const Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithTargets(Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(const Aws::String& key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(Aws::String&& key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(const Aws::String& key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(Aws::String&& key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(const char* key, UpdateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddTargets(const char* key, const UpdateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithActions(const Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& WithActions(Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(const Aws::String& key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(Aws::String&& key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(const Aws::String& key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(Aws::String&& key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(const char* key, UpdateExperimentTemplateActionInputItem&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline UpdateExperimentTemplateRequest& AddActions(const char* key, const UpdateExperimentTemplateActionInputItem& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline UpdateExperimentTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline UpdateExperimentTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline UpdateExperimentTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<UpdateExperimentTemplateStopConditionInput> m_stopConditions;
    bool m_stopConditionsHasBeenSet;

    Aws::Map<Aws::String, UpdateExperimentTemplateTargetInput> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Map<Aws::String, UpdateExperimentTemplateActionInputItem> m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
