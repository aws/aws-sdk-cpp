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
#include <aws/fis/model/CreateExperimentTemplateStopConditionInput.h>
#include <aws/fis/model/CreateExperimentTemplateTargetInput.h>
#include <aws/fis/model/CreateExperimentTemplateActionInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FIS
{
namespace Model
{

  /**
   */
  class AWS_FIS_API CreateExperimentTemplateRequest : public FISRequest
  {
  public:
    CreateExperimentTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExperimentTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateExperimentTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateExperimentTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateExperimentTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline CreateExperimentTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline CreateExperimentTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the experiment template. Can contain up to 64 letters (A-Z
     * and a-z).</p>
     */
    inline CreateExperimentTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The stop conditions.</p>
     */
    inline const Aws::Vector<CreateExperimentTemplateStopConditionInput>& GetStopConditions() const{ return m_stopConditions; }

    /**
     * <p>The stop conditions.</p>
     */
    inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }

    /**
     * <p>The stop conditions.</p>
     */
    inline void SetStopConditions(const Aws::Vector<CreateExperimentTemplateStopConditionInput>& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = value; }

    /**
     * <p>The stop conditions.</p>
     */
    inline void SetStopConditions(Aws::Vector<CreateExperimentTemplateStopConditionInput>&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions = std::move(value); }

    /**
     * <p>The stop conditions.</p>
     */
    inline CreateExperimentTemplateRequest& WithStopConditions(const Aws::Vector<CreateExperimentTemplateStopConditionInput>& value) { SetStopConditions(value); return *this;}

    /**
     * <p>The stop conditions.</p>
     */
    inline CreateExperimentTemplateRequest& WithStopConditions(Aws::Vector<CreateExperimentTemplateStopConditionInput>&& value) { SetStopConditions(std::move(value)); return *this;}

    /**
     * <p>The stop conditions.</p>
     */
    inline CreateExperimentTemplateRequest& AddStopConditions(const CreateExperimentTemplateStopConditionInput& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(value); return *this; }

    /**
     * <p>The stop conditions.</p>
     */
    inline CreateExperimentTemplateRequest& AddStopConditions(CreateExperimentTemplateStopConditionInput&& value) { m_stopConditionsHasBeenSet = true; m_stopConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>The targets for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& WithTargets(const Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& WithTargets(Aws::Map<Aws::String, CreateExperimentTemplateTargetInput>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(const Aws::String& key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(Aws::String&& key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(const Aws::String& key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(Aws::String&& key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(const char* key, CreateExperimentTemplateTargetInput&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddTargets(const char* key, const CreateExperimentTemplateTargetInput& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The actions for the experiment.</p>
     */
    inline const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline void SetActions(Aws::Map<Aws::String, CreateExperimentTemplateActionInput>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& WithActions(const Aws::Map<Aws::String, CreateExperimentTemplateActionInput>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& WithActions(Aws::Map<Aws::String, CreateExperimentTemplateActionInput>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(const Aws::String& key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(Aws::String&& key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(const Aws::String& key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(Aws::String&& key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(const char* key, CreateExperimentTemplateActionInput&& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The actions for the experiment.</p>
     */
    inline CreateExperimentTemplateRequest& AddActions(const char* key, const CreateExperimentTemplateActionInput& value) { m_actionsHasBeenSet = true; m_actions.emplace(key, value); return *this; }


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
    inline CreateExperimentTemplateRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline CreateExperimentTemplateRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that grants the AWS FIS service
     * permission to perform service actions on your behalf.</p>
     */
    inline CreateExperimentTemplateRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to apply to the experiment template.</p>
     */
    inline CreateExperimentTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<CreateExperimentTemplateStopConditionInput> m_stopConditions;
    bool m_stopConditionsHasBeenSet;

    Aws::Map<Aws::String, CreateExperimentTemplateTargetInput> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Map<Aws::String, CreateExperimentTemplateActionInput> m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
